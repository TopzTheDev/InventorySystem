#include "Product_db.h"



	Product_db::Product_db()
	{
	}

	void Product_db:: loadProductFromFile() {
		String^ fileName = "product_tb.txt";
	
		StreamReader^ din = File::OpenText(fileName);

		productCount = Int32::Parse(din->ReadLine());
		if (productCount > 0) {
			for (int i = 0; i < productCount; i++) {
				pro[i].barcode = din->ReadLine();
				pro[i].name = din->ReadLine();
				pro[i].description = din->ReadLine();
				pro[i].category = din->ReadLine();
				pro[i].stock = Int32::Parse(din->ReadLine());
				pro[i].price = double::Parse(din->ReadLine());
			}
		}
		else {
			MessageBox::Show("The database is empty");
		}

		din->Close();
	}
	//Save to update array to database;
	void Product_db:: saveToDatabase() {
		String^ fileName = "product_tb.txt";

		StreamWriter^ sw = gcnew StreamWriter(fileName);
		sw->WriteLine(productCount);
		for (int i = 0; i < productCount; i++) {
			sw->WriteLine(pro[i].barcode);
			sw->WriteLine(pro[i].name);
			sw->WriteLine(pro[i].description);
			sw->WriteLine(pro[i].category);
			sw->WriteLine(pro[i].stock);
			sw->WriteLine(pro[i].price);
		}

		sw->Close();

	}

	void Product_db::searchProduct *proSearch(String^ bcode) {
		searchProduct *searched = (value struct searchProduct*) malloc(sizeof(value struct searchProduct));

		for (int i = 0; i < productCount; i++) {

			if (String::Compare(pro[i].barcode, bcode) == 0) {
				searched->barcode = pro[i].barcode;
				searched->name = pro[i].name;
				searched->description = pro[i].description;
				searched->stock = pro[i].stock;
				searched->price = pro[i].price;
				searched->category = pro[i].category;
				searched->idx = i;
				break;
			}
			else {
				searched->barcode = "NULL";
			}

		}
		return searched;
		free(searched);
	}

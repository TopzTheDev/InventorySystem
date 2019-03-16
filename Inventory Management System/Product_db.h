#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;

ref class Product_db
{
public:
	Product_db();
	//Struct of Products
	public: 
	
	value struct Product {
		String^ barcode;
		String^ name;
		String^ description;
		String^ category;
		int stock;
		double price;
	};

	//Searching product structure
	 value struct searchProduct {
		String^ barcode;
		String^ name;
		String^ description;
		String^ category;
		int stock;
		double price;
		int idx;
	};

	//Count of products in textfile
	int productCount;

	//Array of Structure for products
	array<Product>^ pro = gcnew array< Product >(1000);

	void loadProductFromFile();

	void saveToDatabase();

	searchProduct *proSearch(String^);

};


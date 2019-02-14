#pragma once
#include <iostream>
#include <string>
#include <vector> 
namespace InventoryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace std;
	
	/// <summary>
	/// Summary for inventory
	/// </summary>
	public ref class inventory : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;
		
	private: System::Windows::Forms::TextBox^  inp_prevCategory;
	private: System::Windows::Forms::Label^  lbl_prevCode;
	private: System::Windows::Forms::Label^  lbl_searchError;

	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::DataGridView^  table_prevProduct;
	private: System::Windows::Forms::ComboBox^  cb_proCategory;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::ComboBox^  cb_searchCategory;


	public:

	public:
		//Connection to database
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=inventorysystem_db";
		
		inventory(void)
		{
			
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
		}

		inventory(Form ^obj1)
		{	
			obj = obj1; 
			
			InitializeComponent();
			InitalizeOtherComponent();
			//
			//TODO: Add the constructor code here
			//

		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~inventory()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TabPage^  tab_dashboard;
	private: System::Windows::Forms::ComboBox^  cb_category;
	protected:

	protected:


	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  inp_proSearch;
	private: System::Windows::Forms::TextBox^  inp_prevStock;
	private: System::Windows::Forms::TextBox^  inp_prevPrice;
	private: System::Windows::Forms::TextBox^  inp_prevDesc;

	private: System::Windows::Forms::TextBox^  inp_prevName;
	private: System::Windows::Forms::Button^  btn_prevDelete;

	private: System::Windows::Forms::Button^  btn_prevEdit;
	private: System::Windows::Forms::Label^  label11;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;

	private: System::Windows::Forms::TabPage^  tab_addproduct;

	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  inp_proStock;
	private: System::Windows::Forms::TextBox^  inp_proPrice;
	private: System::Windows::Forms::TextBox^  inp_proDesc;
	private: System::Windows::Forms::TextBox^  inp_proCode;
	private: System::Windows::Forms::TextBox^  inp_proName;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TabControl^  tab_control;

	private: System::Windows::Forms::TabPage^  tab_editproduct;
	private: System::Windows::Forms::Button^  btn_editBack;
	private: System::Windows::Forms::Button^  inp_editUpdate;



	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  inp_editStock;

	private: System::Windows::Forms::TextBox^  inp_editPrice;

	private: System::Windows::Forms::TextBox^  inp_editDesc;

	private: System::Windows::Forms::TextBox^  inp_editCode;
	private: System::Windows::Forms::TextBox^  inp_editName;


	private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::ComboBox^  cb_editCategory;


	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  btn_addproduct;

	private: System::Windows::Forms::Button^  btn_dashboard;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::TabPage^  tab_accounts;
private: System::Windows::Forms::Label^  label24;

private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::TextBox^  textBox3;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::ComboBox^  comboBox1;
private: System::Windows::Forms::TextBox^  textBox4;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::ComboBox^  comboBox2;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::DataGridView^  dataGridView1;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label33;

private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Label^  label37;
private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>

		void InitalizeOtherComponent(void){
			loadTable("Default");
			table_prevProduct->MultiSelect = true;
			cb_category->SelectedItem = "Barcode";
			cb_proCategory->SelectedItem = "Others";
			table_prevProduct->Columns[0]->HeaderText = "Barcode";
			table_prevProduct->Columns[1]->HeaderText = "Product Name";
			table_prevProduct->Columns[2]->HeaderText = "Description";
			table_prevProduct->Columns[3]->HeaderText = "Category";
			table_prevProduct->Columns[4]->HeaderText = "Price";
			table_prevProduct->Columns[5]->HeaderText = "Stocks";
			cb_searchCategory->Visible = false;
		}
		void InitializeComponent(void)
		{	
			this->components = (gcnew System::ComponentModel::Container());
			this->tab_dashboard = (gcnew System::Windows::Forms::TabPage());
			this->cb_searchCategory = (gcnew System::Windows::Forms::ComboBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->table_prevProduct = (gcnew System::Windows::Forms::DataGridView());
			this->lbl_searchError = (gcnew System::Windows::Forms::Label());
			this->lbl_prevCode = (gcnew System::Windows::Forms::Label());
			this->inp_prevCategory = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->cb_category = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->inp_proSearch = (gcnew System::Windows::Forms::TextBox());
			this->inp_prevStock = (gcnew System::Windows::Forms::TextBox());
			this->inp_prevPrice = (gcnew System::Windows::Forms::TextBox());
			this->inp_prevDesc = (gcnew System::Windows::Forms::TextBox());
			this->inp_prevName = (gcnew System::Windows::Forms::TextBox());
			this->btn_prevDelete = (gcnew System::Windows::Forms::Button());
			this->btn_prevEdit = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tab_addproduct = (gcnew System::Windows::Forms::TabPage());
			this->cb_proCategory = (gcnew System::Windows::Forms::ComboBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->inp_proStock = (gcnew System::Windows::Forms::TextBox());
			this->inp_proPrice = (gcnew System::Windows::Forms::TextBox());
			this->inp_proDesc = (gcnew System::Windows::Forms::TextBox());
			this->inp_proCode = (gcnew System::Windows::Forms::TextBox());
			this->inp_proName = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tab_control = (gcnew System::Windows::Forms::TabControl());
			this->tab_editproduct = (gcnew System::Windows::Forms::TabPage());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->btn_editBack = (gcnew System::Windows::Forms::Button());
			this->inp_editUpdate = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->inp_editStock = (gcnew System::Windows::Forms::TextBox());
			this->inp_editPrice = (gcnew System::Windows::Forms::TextBox());
			this->inp_editDesc = (gcnew System::Windows::Forms::TextBox());
			this->inp_editCode = (gcnew System::Windows::Forms::TextBox());
			this->inp_editName = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->cb_editCategory = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->tab_accounts = (gcnew System::Windows::Forms::TabPage());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->btn_addproduct = (gcnew System::Windows::Forms::Button());
			this->btn_dashboard = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->tab_dashboard->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table_prevProduct))->BeginInit();
			this->tab_addproduct->SuspendLayout();
			this->tab_control->SuspendLayout();
			this->tab_editproduct->SuspendLayout();
			this->tab_accounts->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// tab_dashboard
			// 
			this->tab_dashboard->BackColor = System::Drawing::Color::White;
			this->tab_dashboard->Controls->Add(this->cb_searchCategory);
			this->tab_dashboard->Controls->Add(this->label16);
			this->tab_dashboard->Controls->Add(this->table_prevProduct);
			this->tab_dashboard->Controls->Add(this->lbl_searchError);
			this->tab_dashboard->Controls->Add(this->lbl_prevCode);
			this->tab_dashboard->Controls->Add(this->inp_prevCategory);
			this->tab_dashboard->Controls->Add(this->label32);
			this->tab_dashboard->Controls->Add(this->cb_category);
			this->tab_dashboard->Controls->Add(this->label15);
			this->tab_dashboard->Controls->Add(this->label14);
			this->tab_dashboard->Controls->Add(this->inp_proSearch);
			this->tab_dashboard->Controls->Add(this->inp_prevStock);
			this->tab_dashboard->Controls->Add(this->inp_prevPrice);
			this->tab_dashboard->Controls->Add(this->inp_prevDesc);
			this->tab_dashboard->Controls->Add(this->inp_prevName);
			this->tab_dashboard->Controls->Add(this->btn_prevDelete);
			this->tab_dashboard->Controls->Add(this->btn_prevEdit);
			this->tab_dashboard->Controls->Add(this->label11);
			this->tab_dashboard->Controls->Add(this->label12);
			this->tab_dashboard->Controls->Add(this->label13);
			this->tab_dashboard->Controls->Add(this->label8);
			this->tab_dashboard->Controls->Add(this->label9);
			this->tab_dashboard->Controls->Add(this->label10);
			this->tab_dashboard->Location = System::Drawing::Point(4, 25);
			this->tab_dashboard->Name = L"tab_dashboard";
			this->tab_dashboard->Padding = System::Windows::Forms::Padding(3);
			this->tab_dashboard->Size = System::Drawing::Size(1173, 530);
			this->tab_dashboard->TabIndex = 1;
			this->tab_dashboard->Text = L"Dashboard";
			// 
			// cb_searchCategory
			// 
			this->cb_searchCategory->Font = (gcnew System::Drawing::Font(L"Roboto Light", 13));
			this->cb_searchCategory->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->cb_searchCategory->FormattingEnabled = true;
			this->cb_searchCategory->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"Alcohol", L"Fruit/veg/salads", L"Dairy",
					L"Chilled convenience", L"Bathroom toiletries", L"Household/cleaning", L"Fresh meat", L"Frozen prepared foods", L"Ambient bakery",
					L"Soft drinks", L"Confectionery", L"Fresh Poultry/game", L"Biscuits", L"Canned goods", L"Petcare", L"Savoury home cooking", L"Savouries",
					L"Hot beverages", L"Packet cereal", L"Healthcare", L"Others"
			});
			this->cb_searchCategory->Location = System::Drawing::Point(679, 37);
			this->cb_searchCategory->Name = L"cb_searchCategory";
			this->cb_searchCategory->Size = System::Drawing::Size(289, 28);
			this->cb_searchCategory->TabIndex = 44;
			this->cb_searchCategory->SelectedIndexChanged += gcnew System::EventHandler(this, &inventory::cb_searchCategory_SelectedIndexChanged);
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label16->Location = System::Drawing::Point(-2, 16);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(21, 5);
			this->label16->TabIndex = 43;
			// 
			// table_prevProduct
			// 
			this->table_prevProduct->BackgroundColor = System::Drawing::Color::White;
			this->table_prevProduct->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table_prevProduct->Location = System::Drawing::Point(438, 87);
			this->table_prevProduct->Name = L"table_prevProduct";
			this->table_prevProduct->Size = System::Drawing::Size(703, 401);
			this->table_prevProduct->TabIndex = 42;
			this->table_prevProduct->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &inventory::table_prevProduct_CellClick);
			// 
			// lbl_searchError
			// 
			this->lbl_searchError->Font = (gcnew System::Drawing::Font(L"Roboto Light", 10.25F));
			this->lbl_searchError->ForeColor = System::Drawing::Color::Red;
			this->lbl_searchError->Location = System::Drawing::Point(524, 68);
			this->lbl_searchError->Name = L"lbl_searchError";
			this->lbl_searchError->Size = System::Drawing::Size(407, 22);
			this->lbl_searchError->TabIndex = 40;
			// 
			// lbl_prevCode
			// 
			this->lbl_prevCode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->lbl_prevCode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->lbl_prevCode->Location = System::Drawing::Point(25, 111);
			this->lbl_prevCode->Name = L"lbl_prevCode";
			this->lbl_prevCode->Size = System::Drawing::Size(308, 26);
			this->lbl_prevCode->TabIndex = 39;
			// 
			// inp_prevCategory
			// 
			this->inp_prevCategory->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_prevCategory->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_prevCategory->Font = (gcnew System::Drawing::Font(L"Roboto Light", 13));
			this->inp_prevCategory->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_prevCategory->HideSelection = false;
			this->inp_prevCategory->Location = System::Drawing::Point(31, 290);
			this->inp_prevCategory->Name = L"inp_prevCategory";
			this->inp_prevCategory->Size = System::Drawing::Size(364, 28);
			this->inp_prevCategory->TabIndex = 38;
			// 
			// label32
			// 
			this->label32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label32->Location = System::Drawing::Point(219, 16);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(960, 5);
			this->label32->TabIndex = 37;
			// 
			// cb_category
			// 
			this->cb_category->DisplayMember = L"Barcode";
			this->cb_category->Font = (gcnew System::Drawing::Font(L"Roboto Light", 13));
			this->cb_category->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->cb_category->FormattingEnabled = true;
			this->cb_category->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Default", L"Barcode", L"Product Name", L"Category" });
			this->cb_category->Location = System::Drawing::Point(524, 36);
			this->cb_category->Name = L"cb_category";
			this->cb_category->Size = System::Drawing::Size(149, 28);
			this->cb_category->TabIndex = 36;
			this->cb_category->SelectedIndexChanged += gcnew System::EventHandler(this, &inventory::cb_category_SelectedIndexChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Roboto", 23, System::Drawing::FontStyle::Bold));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label15->Location = System::Drawing::Point(24, 36);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(141, 37);
			this->label15->TabIndex = 34;
			this->label15->Text = L"Products";
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label14->Location = System::Drawing::Point(434, 38);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(84, 26);
			this->label14->TabIndex = 33;
			this->label14->Text = L"Search by";
			// 
			// inp_proSearch
			// 
			this->inp_proSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_proSearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_proSearch->Font = (gcnew System::Drawing::Font(L"Roboto Light", 13));
			this->inp_proSearch->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_proSearch->HideSelection = false;
			this->inp_proSearch->Location = System::Drawing::Point(679, 37);
			this->inp_proSearch->Name = L"inp_proSearch";
			this->inp_proSearch->Size = System::Drawing::Size(289, 28);
			this->inp_proSearch->TabIndex = 32;
			this->inp_proSearch->TextChanged += gcnew System::EventHandler(this, &inventory::inp_search);
			// 
			// inp_prevStock
			// 
			this->inp_prevStock->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_prevStock->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_prevStock->Font = (gcnew System::Drawing::Font(L"Roboto Light", 13));
			this->inp_prevStock->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_prevStock->HideSelection = false;
			this->inp_prevStock->Location = System::Drawing::Point(31, 411);
			this->inp_prevStock->Name = L"inp_prevStock";
			this->inp_prevStock->Size = System::Drawing::Size(361, 28);
			this->inp_prevStock->TabIndex = 29;
			// 
			// inp_prevPrice
			// 
			this->inp_prevPrice->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_prevPrice->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_prevPrice->Font = (gcnew System::Drawing::Font(L"Roboto Light", 13));
			this->inp_prevPrice->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_prevPrice->HideSelection = false;
			this->inp_prevPrice->Location = System::Drawing::Point(31, 351);
			this->inp_prevPrice->Name = L"inp_prevPrice";
			this->inp_prevPrice->Size = System::Drawing::Size(361, 28);
			this->inp_prevPrice->TabIndex = 27;
			// 
			// inp_prevDesc
			// 
			this->inp_prevDesc->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_prevDesc->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_prevDesc->Font = (gcnew System::Drawing::Font(L"Roboto Light", 13));
			this->inp_prevDesc->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_prevDesc->HideSelection = false;
			this->inp_prevDesc->Location = System::Drawing::Point(30, 231);
			this->inp_prevDesc->Name = L"inp_prevDesc";
			this->inp_prevDesc->Size = System::Drawing::Size(364, 28);
			this->inp_prevDesc->TabIndex = 20;
			// 
			// inp_prevName
			// 
			this->inp_prevName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_prevName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_prevName->Font = (gcnew System::Drawing::Font(L"Roboto Light", 13));
			this->inp_prevName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_prevName->HideSelection = false;
			this->inp_prevName->Location = System::Drawing::Point(29, 172);
			this->inp_prevName->Name = L"inp_prevName";
			this->inp_prevName->Size = System::Drawing::Size(364, 28);
			this->inp_prevName->TabIndex = 16;
			// 
			// btn_prevDelete
			// 
			this->btn_prevDelete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_prevDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_prevDelete->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			this->btn_prevDelete->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btn_prevDelete->Location = System::Drawing::Point(216, 453);
			this->btn_prevDelete->Name = L"btn_prevDelete";
			this->btn_prevDelete->Size = System::Drawing::Size(176, 35);
			this->btn_prevDelete->TabIndex = 31;
			this->btn_prevDelete->Text = L"Delete Product";
			this->btn_prevDelete->UseVisualStyleBackColor = true;
			this->btn_prevDelete->Click += gcnew System::EventHandler(this, &inventory::inp_prevDelete_Click);
			// 
			// btn_prevEdit
			// 
			this->btn_prevEdit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_prevEdit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_prevEdit->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			this->btn_prevEdit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->btn_prevEdit->Location = System::Drawing::Point(31, 453);
			this->btn_prevEdit->Name = L"btn_prevEdit";
			this->btn_prevEdit->Size = System::Drawing::Size(167, 35);
			this->btn_prevEdit->TabIndex = 30;
			this->btn_prevEdit->Text = L"Edit Product";
			this->btn_prevEdit->UseVisualStyleBackColor = true;
			this->btn_prevEdit->Click += gcnew System::EventHandler(this, &inventory::btn_prevEdit_Click);
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label11->Location = System::Drawing::Point(26, 382);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(305, 26);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Stock";
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label12->Location = System::Drawing::Point(27, 262);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(305, 26);
			this->label12->TabIndex = 25;
			this->label12->Text = L"Category";
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label13->Location = System::Drawing::Point(26, 322);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(305, 26);
			this->label13->TabIndex = 24;
			this->label13->Text = L"Price";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label8->Location = System::Drawing::Point(27, 204);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(308, 26);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Description";
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label9->Location = System::Drawing::Point(25, 87);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(308, 26);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Barcode";
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label10->Location = System::Drawing::Point(26, 145);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(308, 26);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Product Name";
			// 
			// tab_addproduct
			// 
			this->tab_addproduct->BackColor = System::Drawing::Color::White;
			this->tab_addproduct->Controls->Add(this->cb_proCategory);
			this->tab_addproduct->Controls->Add(this->label34);
			this->tab_addproduct->Controls->Add(this->label33);
			this->tab_addproduct->Controls->Add(this->label31);
			this->tab_addproduct->Controls->Add(this->button2);
			this->tab_addproduct->Controls->Add(this->label7);
			this->tab_addproduct->Controls->Add(this->inp_proStock);
			this->tab_addproduct->Controls->Add(this->inp_proPrice);
			this->tab_addproduct->Controls->Add(this->inp_proDesc);
			this->tab_addproduct->Controls->Add(this->inp_proCode);
			this->tab_addproduct->Controls->Add(this->inp_proName);
			this->tab_addproduct->Controls->Add(this->label6);
			this->tab_addproduct->Controls->Add(this->label5);
			this->tab_addproduct->Controls->Add(this->label3);
			this->tab_addproduct->Controls->Add(this->label2);
			this->tab_addproduct->Controls->Add(this->label1);
			this->tab_addproduct->Controls->Add(this->label4);
			this->tab_addproduct->Controls->Add(this->button1);
			this->tab_addproduct->Location = System::Drawing::Point(4, 25);
			this->tab_addproduct->Name = L"tab_addproduct";
			this->tab_addproduct->Padding = System::Windows::Forms::Padding(3);
			this->tab_addproduct->Size = System::Drawing::Size(1173, 530);
			this->tab_addproduct->TabIndex = 0;
			this->tab_addproduct->Text = L"Add Product";
			// 
			// cb_proCategory
			// 
			this->cb_proCategory->Font = (gcnew System::Drawing::Font(L"Roboto Light", 13));
			this->cb_proCategory->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->cb_proCategory->FormattingEnabled = true;
			this->cb_proCategory->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"Alcohol", L"Fruit/veg/salads", L"Dairy",
					L"Chilled convenience", L"Bathroom toiletries", L"Household/cleaning", L"Fresh meat", L"Frozen prepared foods", L"Ambient bakery",
					L"Soft drinks", L"Confectionery", L"Fresh Poultry/game", L"Biscuits", L"Canned goods", L"Petcare", L"Savoury home cooking", L"Savouries",
					L"Hot beverages", L"Packet cereal", L"Healthcare", L"Others"
			});
			this->cb_proCategory->Location = System::Drawing::Point(772, 157);
			this->cb_proCategory->Name = L"cb_proCategory";
			this->cb_proCategory->Size = System::Drawing::Size(351, 28);
			this->cb_proCategory->TabIndex = 40;
			// 
			// label34
			// 
			this->label34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label34->Location = System::Drawing::Point(-5, 16);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(225, 5);
			this->label34->TabIndex = 39;
			// 
			// label33
			// 
			this->label33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label33->Location = System::Drawing::Point(420, 16);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(760, 5);
			this->label33->TabIndex = 38;
			// 
			// label31
			// 
			this->label31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label31->Location = System::Drawing::Point(201, 15);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(972, 1);
			this->label31->TabIndex = 27;
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->button2->Location = System::Drawing::Point(798, 425);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(160, 35);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Roboto", 23, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label7->Location = System::Drawing::Point(379, 69);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(188, 37);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Add Product";
			// 
			// inp_proStock
			// 
			this->inp_proStock->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_proStock->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_proStock->Font = (gcnew System::Drawing::Font(L"Roboto Light", 13));
			this->inp_proStock->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_proStock->HideSelection = false;
			this->inp_proStock->Location = System::Drawing::Point(773, 315);
			this->inp_proStock->Name = L"inp_proStock";
			this->inp_proStock->Size = System::Drawing::Size(351, 28);
			this->inp_proStock->TabIndex = 23;
			// 
			// inp_proPrice
			// 
			this->inp_proPrice->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_proPrice->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_proPrice->Font = (gcnew System::Drawing::Font(L"Roboto Light", 13));
			this->inp_proPrice->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_proPrice->HideSelection = false;
			this->inp_proPrice->Location = System::Drawing::Point(773, 234);
			this->inp_proPrice->Name = L"inp_proPrice";
			this->inp_proPrice->Size = System::Drawing::Size(351, 28);
			this->inp_proPrice->TabIndex = 21;
			// 
			// inp_proDesc
			// 
			this->inp_proDesc->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_proDesc->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_proDesc->Font = (gcnew System::Drawing::Font(L"Roboto Light", 13));
			this->inp_proDesc->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_proDesc->HideSelection = false;
			this->inp_proDesc->Location = System::Drawing::Point(386, 315);
			this->inp_proDesc->Name = L"inp_proDesc";
			this->inp_proDesc->Size = System::Drawing::Size(351, 28);
			this->inp_proDesc->TabIndex = 14;
			// 
			// inp_proCode
			// 
			this->inp_proCode->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_proCode->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_proCode->Font = (gcnew System::Drawing::Font(L"Roboto Light", 13));
			this->inp_proCode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_proCode->HideSelection = false;
			this->inp_proCode->Location = System::Drawing::Point(384, 158);
			this->inp_proCode->Name = L"inp_proCode";
			this->inp_proCode->Size = System::Drawing::Size(351, 28);
			this->inp_proCode->TabIndex = 12;
			// 
			// inp_proName
			// 
			this->inp_proName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_proName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_proName->Font = (gcnew System::Drawing::Font(L"Roboto Light", 13));
			this->inp_proName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_proName->HideSelection = false;
			this->inp_proName->Location = System::Drawing::Point(385, 234);
			this->inp_proName->Name = L"inp_proName";
			this->inp_proName->Size = System::Drawing::Size(351, 28);
			this->inp_proName->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label6->Location = System::Drawing::Point(768, 286);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(354, 26);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Stock";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label5->Location = System::Drawing::Point(769, 129);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(354, 26);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Category";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label3->Location = System::Drawing::Point(768, 205);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(354, 26);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Price";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label2->Location = System::Drawing::Point(383, 288);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(354, 26);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Description";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label1->Location = System::Drawing::Point(381, 131);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(354, 26);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Barcode";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label4->Location = System::Drawing::Point(382, 207);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(354, 26);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Product Name";
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->button1->Location = System::Drawing::Point(964, 425);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 35);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &inventory::button1_Click);
			// 
			// tab_control
			// 
			this->tab_control->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tab_control->Controls->Add(this->tab_addproduct);
			this->tab_control->Controls->Add(this->tab_dashboard);
			this->tab_control->Controls->Add(this->tab_editproduct);
			this->tab_control->Controls->Add(this->tab_accounts);
			this->tab_control->Location = System::Drawing::Point(-6, 1);
			this->tab_control->Name = L"tab_control";
			this->tab_control->SelectedIndex = 1;
			this->tab_control->Size = System::Drawing::Size(1181, 559);
			this->tab_control->TabIndex = 10;
			// 
			// tab_editproduct
			// 
			this->tab_editproduct->BackColor = System::Drawing::Color::White;
			this->tab_editproduct->Controls->Add(this->label38);
			this->tab_editproduct->Controls->Add(this->label36);
			this->tab_editproduct->Controls->Add(this->btn_editBack);
			this->tab_editproduct->Controls->Add(this->inp_editUpdate);
			this->tab_editproduct->Controls->Add(this->label17);
			this->tab_editproduct->Controls->Add(this->inp_editStock);
			this->tab_editproduct->Controls->Add(this->inp_editPrice);
			this->tab_editproduct->Controls->Add(this->inp_editDesc);
			this->tab_editproduct->Controls->Add(this->inp_editCode);
			this->tab_editproduct->Controls->Add(this->inp_editName);
			this->tab_editproduct->Controls->Add(this->label18);
			this->tab_editproduct->Controls->Add(this->cb_editCategory);
			this->tab_editproduct->Controls->Add(this->label19);
			this->tab_editproduct->Controls->Add(this->label20);
			this->tab_editproduct->Controls->Add(this->label21);
			this->tab_editproduct->Controls->Add(this->label22);
			this->tab_editproduct->Controls->Add(this->label23);
			this->tab_editproduct->Location = System::Drawing::Point(4, 25);
			this->tab_editproduct->Name = L"tab_editproduct";
			this->tab_editproduct->Padding = System::Windows::Forms::Padding(3);
			this->tab_editproduct->Size = System::Drawing::Size(1173, 530);
			this->tab_editproduct->TabIndex = 2;
			this->tab_editproduct->Text = L"Edit Product";
			// 
			// label38
			// 
			this->label38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label38->Location = System::Drawing::Point(-2, 16);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(21, 5);
			this->label38->TabIndex = 41;
			// 
			// label36
			// 
			this->label36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label36->Location = System::Drawing::Point(219, 16);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(953, 5);
			this->label36->TabIndex = 40;
			// 
			// btn_editBack
			// 
			this->btn_editBack->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_editBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_editBack->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			this->btn_editBack->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->btn_editBack->Location = System::Drawing::Point(684, 411);
			this->btn_editBack->Name = L"btn_editBack";
			this->btn_editBack->Size = System::Drawing::Size(160, 35);
			this->btn_editBack->TabIndex = 39;
			this->btn_editBack->Text = L"Back";
			this->btn_editBack->UseVisualStyleBackColor = true;
			this->btn_editBack->Click += gcnew System::EventHandler(this, &inventory::btn_editBack_Click);
			// 
			// inp_editUpdate
			// 
			this->inp_editUpdate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->inp_editUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->inp_editUpdate->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			this->inp_editUpdate->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_editUpdate->Location = System::Drawing::Point(850, 411);
			this->inp_editUpdate->Name = L"inp_editUpdate";
			this->inp_editUpdate->Size = System::Drawing::Size(160, 35);
			this->inp_editUpdate->TabIndex = 38;
			this->inp_editUpdate->Text = L"Update Product";
			this->inp_editUpdate->UseVisualStyleBackColor = true;
			this->inp_editUpdate->Click += gcnew System::EventHandler(this, &inventory::inp_editUpdate_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Roboto", 23, System::Drawing::FontStyle::Bold));
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label17->Location = System::Drawing::Point(266, 82);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(185, 37);
			this->label17->TabIndex = 37;
			this->label17->Text = L"Edit Product";
			// 
			// inp_editStock
			// 
			this->inp_editStock->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_editStock->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_editStock->Font = (gcnew System::Drawing::Font(L"Roboto Light", 13));
			this->inp_editStock->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_editStock->HideSelection = false;
			this->inp_editStock->Location = System::Drawing::Point(659, 329);
			this->inp_editStock->Name = L"inp_editStock";
			this->inp_editStock->Size = System::Drawing::Size(351, 28);
			this->inp_editStock->TabIndex = 36;
			// 
			// inp_editPrice
			// 
			this->inp_editPrice->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_editPrice->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_editPrice->Font = (gcnew System::Drawing::Font(L"Roboto Light", 13));
			this->inp_editPrice->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_editPrice->HideSelection = false;
			this->inp_editPrice->Location = System::Drawing::Point(659, 248);
			this->inp_editPrice->Name = L"inp_editPrice";
			this->inp_editPrice->Size = System::Drawing::Size(351, 28);
			this->inp_editPrice->TabIndex = 34;
			// 
			// inp_editDesc
			// 
			this->inp_editDesc->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_editDesc->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_editDesc->Font = (gcnew System::Drawing::Font(L"Roboto Light", 13));
			this->inp_editDesc->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_editDesc->HideSelection = false;
			this->inp_editDesc->Location = System::Drawing::Point(272, 329);
			this->inp_editDesc->Name = L"inp_editDesc";
			this->inp_editDesc->Size = System::Drawing::Size(351, 28);
			this->inp_editDesc->TabIndex = 29;
			// 
			// inp_editCode
			// 
			this->inp_editCode->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_editCode->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_editCode->Enabled = false;
			this->inp_editCode->Font = (gcnew System::Drawing::Font(L"Roboto Light", 13));
			this->inp_editCode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_editCode->HideSelection = false;
			this->inp_editCode->Location = System::Drawing::Point(270, 172);
			this->inp_editCode->Name = L"inp_editCode";
			this->inp_editCode->Size = System::Drawing::Size(351, 28);
			this->inp_editCode->TabIndex = 27;
			// 
			// inp_editName
			// 
			this->inp_editName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_editName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_editName->Font = (gcnew System::Drawing::Font(L"Roboto Light", 13));
			this->inp_editName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_editName->HideSelection = false;
			this->inp_editName->Location = System::Drawing::Point(271, 248);
			this->inp_editName->Name = L"inp_editName";
			this->inp_editName->Size = System::Drawing::Size(351, 28);
			this->inp_editName->TabIndex = 25;
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label18->Location = System::Drawing::Point(654, 300);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(354, 26);
			this->label18->TabIndex = 35;
			this->label18->Text = L"Stock";
			// 
			// cb_editCategory
			// 
			this->cb_editCategory->Font = (gcnew System::Drawing::Font(L"Roboto Light", 13));
			this->cb_editCategory->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->cb_editCategory->FormattingEnabled = true;
			this->cb_editCategory->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"Alcohol", L"Fruit/veg/salads", L"Dairy",
					L"Chilled convenience", L"Bathroom toiletries", L"Household/cleaning", L"Fresh meat", L"Frozen prepared foods", L"Ambient bakery",
					L"Soft drinks", L"Confectionery", L"Fresh Poultry/game", L"Biscuits", L"Canned goods", L"Petcare", L"Savoury home cooking", L"Savouries",
					L"Hot beverages", L"Packet cereal", L"Healthcare", L"Others"
			});
			this->cb_editCategory->Location = System::Drawing::Point(659, 172);
			this->cb_editCategory->Name = L"cb_editCategory";
			this->cb_editCategory->Size = System::Drawing::Size(351, 28);
			this->cb_editCategory->TabIndex = 33;
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label19->Location = System::Drawing::Point(655, 143);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(354, 26);
			this->label19->TabIndex = 32;
			this->label19->Text = L"Category";
			// 
			// label20
			// 
			this->label20->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label20->Location = System::Drawing::Point(654, 219);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(354, 26);
			this->label20->TabIndex = 31;
			this->label20->Text = L"Price";
			// 
			// label21
			// 
			this->label21->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label21->Location = System::Drawing::Point(269, 302);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(354, 26);
			this->label21->TabIndex = 30;
			this->label21->Text = L"Description";
			// 
			// label22
			// 
			this->label22->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label22->Location = System::Drawing::Point(267, 145);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(354, 26);
			this->label22->TabIndex = 28;
			this->label22->Text = L"Barcode";
			// 
			// label23
			// 
			this->label23->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label23->Location = System::Drawing::Point(268, 221);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(354, 26);
			this->label23->TabIndex = 26;
			this->label23->Text = L"Product Name";
			// 
			// tab_accounts
			// 
			this->tab_accounts->BackColor = System::Drawing::Color::White;
			this->tab_accounts->Controls->Add(this->label35);
			this->tab_accounts->Controls->Add(this->label37);
			this->tab_accounts->Controls->Add(this->comboBox2);
			this->tab_accounts->Controls->Add(this->label29);
			this->tab_accounts->Controls->Add(this->label30);
			this->tab_accounts->Controls->Add(this->textBox1);
			this->tab_accounts->Controls->Add(this->dataGridView1);
			this->tab_accounts->Controls->Add(this->button5);
			this->tab_accounts->Controls->Add(this->button3);
			this->tab_accounts->Controls->Add(this->button4);
			this->tab_accounts->Controls->Add(this->label28);
			this->tab_accounts->Controls->Add(this->comboBox1);
			this->tab_accounts->Controls->Add(this->textBox4);
			this->tab_accounts->Controls->Add(this->label24);
			this->tab_accounts->Controls->Add(this->textBox2);
			this->tab_accounts->Controls->Add(this->textBox3);
			this->tab_accounts->Controls->Add(this->label25);
			this->tab_accounts->Controls->Add(this->label26);
			this->tab_accounts->Controls->Add(this->label27);
			this->tab_accounts->Location = System::Drawing::Point(4, 25);
			this->tab_accounts->Name = L"tab_accounts";
			this->tab_accounts->Padding = System::Windows::Forms::Padding(3);
			this->tab_accounts->Size = System::Drawing::Size(1173, 530);
			this->tab_accounts->TabIndex = 3;
			this->tab_accounts->Text = L"Accounts";
			// 
			// label35
			// 
			this->label35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label35->Location = System::Drawing::Point(-1, 16);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(422, 5);
			this->label35->TabIndex = 57;
			// 
			// label37
			// 
			this->label37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label37->Location = System::Drawing::Point(621, 16);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(551, 5);
			this->label37->TabIndex = 56;
			// 
			// comboBox2
			// 
			this->comboBox2->Enabled = false;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Roboto Light", 13));
			this->comboBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(933, 36);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(184, 28);
			this->comboBox2->TabIndex = 55;
			// 
			// label29
			// 
			this->label29->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label29->Location = System::Drawing::Point(833, 38);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(94, 26);
			this->label29->TabIndex = 54;
			this->label29->Text = L"Category";
			// 
			// label30
			// 
			this->label30->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label30->Location = System::Drawing::Point(421, 36);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(62, 26);
			this->label30->TabIndex = 53;
			this->label30->Text = L"Search";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Roboto Light", 13));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->textBox1->HideSelection = false;
			this->textBox1->Location = System::Drawing::Point(488, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(249, 28);
			this->textBox1->TabIndex = 52;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(422, 78);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(695, 401);
			this->dataGridView1->TabIndex = 51;
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->button5->Location = System::Drawing::Point(228, 395);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(157, 35);
			this->button5->TabIndex = 50;
			this->button5->Text = L"Add Account";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button3->Location = System::Drawing::Point(139, 444);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(166, 35);
			this->button3->TabIndex = 49;
			this->button3->Text = L"Delete Account";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->button4->Location = System::Drawing::Point(34, 395);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(157, 35);
			this->button4->TabIndex = 48;
			this->button4->Text = L"Update Account";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label28
			// 
			this->label28->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label28->Location = System::Drawing::Point(31, 319);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(354, 26);
			this->label28->TabIndex = 47;
			this->label28->Text = L"Login as.";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Roboto Light", 13));
			this->comboBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Administrator", L"Inventory", L"Cashier" });
			this->comboBox1->Location = System::Drawing::Point(34, 349);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(351, 28);
			this->comboBox1->TabIndex = 45;
			this->comboBox1->Text = L"Login as";
			// 
			// textBox4
			// 
			this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Roboto Light", 13));
			this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->textBox4->HideSelection = false;
			this->textBox4->Location = System::Drawing::Point(34, 273);
			this->textBox4->Name = L"textBox4";
			this->textBox4->PasswordChar = '*';
			this->textBox4->Size = System::Drawing::Size(351, 28);
			this->textBox4->TabIndex = 46;
			this->textBox4->Text = L"Hello World";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Roboto", 23, System::Drawing::FontStyle::Bold));
			this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label24->Location = System::Drawing::Point(30, 37);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(148, 37);
			this->label24->TabIndex = 44;
			this->label24->Text = L"Accounts";
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Roboto Light", 13));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->textBox2->HideSelection = false;
			this->textBox2->Location = System::Drawing::Point(34, 127);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(351, 28);
			this->textBox2->TabIndex = 40;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Roboto Light", 13));
			this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->textBox3->HideSelection = false;
			this->textBox3->Location = System::Drawing::Point(35, 197);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(351, 28);
			this->textBox3->TabIndex = 38;
			// 
			// label25
			// 
			this->label25->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label25->Location = System::Drawing::Point(33, 244);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(354, 26);
			this->label25->TabIndex = 43;
			this->label25->Text = L"Password";
			// 
			// label26
			// 
			this->label26->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label26->Location = System::Drawing::Point(31, 100);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(354, 26);
			this->label26->TabIndex = 41;
			this->label26->Text = L"ID#";
			// 
			// label27
			// 
			this->label27->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label27->Location = System::Drawing::Point(32, 170);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(354, 26);
			this->label27->TabIndex = 39;
			this->label27->Text = L"Username";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->btn_addproduct);
			this->panel1->Controls->Add(this->btn_dashboard);
			this->panel1->Location = System::Drawing::Point(-6, -3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1177, 46);
			this->panel1->TabIndex = 27;
			// 
			// button8
			// 
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			this->button8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->button8->Location = System::Drawing::Point(424, 5);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(202, 42);
			this->button8->TabIndex = 13;
			this->button8->Text = L"Accounts";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &inventory::button8_Click);
			// 
			// button7
			// 
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->button7->Location = System::Drawing::Point(625, 5);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(202, 42);
			this->button7->TabIndex = 12;
			this->button7->Text = L"Settings";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &inventory::button7_Click);
			// 
			// btn_addproduct
			// 
			this->btn_addproduct->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_addproduct->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_addproduct->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			this->btn_addproduct->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->btn_addproduct->Location = System::Drawing::Point(223, 5);
			this->btn_addproduct->Name = L"btn_addproduct";
			this->btn_addproduct->Size = System::Drawing::Size(202, 42);
			this->btn_addproduct->TabIndex = 11;
			this->btn_addproduct->Text = L"Add Product";
			this->btn_addproduct->UseVisualStyleBackColor = true;
			this->btn_addproduct->Click += gcnew System::EventHandler(this, &inventory::btn_addproduct_Click);
			// 
			// btn_dashboard
			// 
			this->btn_dashboard->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_dashboard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_dashboard->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			this->btn_dashboard->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->btn_dashboard->Location = System::Drawing::Point(22, 5);
			this->btn_dashboard->Name = L"btn_dashboard";
			this->btn_dashboard->Size = System::Drawing::Size(202, 42);
			this->btn_dashboard->TabIndex = 10;
			this->btn_dashboard->Text = L"Dashboard";
			this->btn_dashboard->UseVisualStyleBackColor = true;
			this->btn_dashboard->Click += gcnew System::EventHandler(this, &inventory::btn_dashboard_Click);
			// 
			// inventory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1171, 552);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->tab_control);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"inventory";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"inventory";
			this->tab_dashboard->ResumeLayout(false);
			this->tab_dashboard->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table_prevProduct))->EndInit();
			this->tab_addproduct->ResumeLayout(false);
			this->tab_addproduct->PerformLayout();
			this->tab_control->ResumeLayout(false);
			this->tab_editproduct->ResumeLayout(false);
			this->tab_editproduct->PerformLayout();
			this->tab_accounts->ResumeLayout(false);
			this->tab_accounts->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion
		//Create Product to the database
		
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			try
			{
				
				MySqlConnection^ con = gcnew MySqlConnection(constr);

				String^	barcode = inp_proCode->Text;
				String^	proName = inp_proName->Text;
				String^	proDesc = inp_proDesc->Text;
				String^	proCategory = cb_proCategory->Text;
				double	proPrice = double::Parse(inp_proPrice->Text);
				int	proStock = Int32::Parse(inp_proStock->Text);


				MySqlCommand^ cmd = gcnew MySqlCommand("insert into product_tb values("+barcode+",'"+proName+"','"+proDesc+"','"+proCategory+"','"+proPrice+"','"+proStock+"')", con);
				//"INSERT INTO `product_tb`(`barcode`, `pro_name`, `pro_desc`, `pro_category`, `pro_price`, `pro_stock`) VALUES ("+barcode+","+proName+","+proDesc+","+proCategory+","+proPrice+","+proStock+")"
				//"insert into product_tb values("+barcode+","+proName+","+proDesc+"," +proCategory+","+proPrice+"," + proStock + ")"
				MySqlDataReader^ dr;
				con->Open();
				dr = cmd->ExecuteReader();
				MessageBox::Show("The product " + proName + " with barcode of " + barcode + " added");
				clearfields();
				tab_control->SelectTab(1);
				loadTable("Default");
				
				
				con->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Something wrong in adding the product: "+ ex);
			}
		}
		
		//Update Product to the Databse
		private: System::Void inp_editUpdate_Click(System::Object^  sender, System::EventArgs^  e) {
			
			if (validateFields("update_sameFields")) {
				MessageBox::Show("Nothing to change, update is not applied");
			}
			else {
				if (validateFields("update_emptyFields")) {
					MessageBox::Show("Some fields is empty, update is not applied");
				}
				else {
					try
					{
						String^	barcode = inp_editCode->Text;
						String^	proName = inp_editName->Text;
						String^	proDesc = inp_editDesc->Text;
						String^	proCategory = cb_editCategory->Text;
						double	proPrice = double::Parse(inp_editPrice->Text);
						int	proStock = Int32::Parse(inp_editStock->Text);
						MessageBox::Show("" + barcode + " " + proName + " " + proDesc + " " + proCategory + " " + proPrice + " " + proStock);
						MySqlConnection ^con = gcnew MySqlConnection(constr);
						MySqlCommand ^cmd = gcnew MySqlCommand("update product_tb set pro_name='" + proName + "',pro_desc='" + proDesc + "',pro_category='" + proCategory + "',pro_price='" + proPrice + "',pro_stock='" + proStock + "' WHERE barcode=" + barcode + "", con);
						MySqlDataReader^ dr;
						con->Open();

						//update product_tb set pro_name='"+proName+"',pro_desc='"+proDesc+"',pro_category='"+proCategory+"',pro_price='" +proPrice+ "',pro_stock='"+proStock+"' WHERE barcode='"+barcode+"'"
						dr = cmd->ExecuteReader();

						MessageBox::Show("Product " + barcode + " information updated");
						tab_control->SelectTab(1);
						clearfields();
						loadTable("Default");

						con->Close();
					}
					catch (Exception^ ex)
					{
						MessageBox::Show("Something wrong in updating the product: " + ex);
					}

				}
			}
			

		}
		
		//Delete Product to the Database
		private: System::Void inp_prevDelete_Click(System::Object^  sender, System::EventArgs^  e) {
			String^ barcode = inp_editCode->Text;
			if (MessageBox::Show("Are you sure to delete " + barcode + " ?", "Inventory Management System",
				MessageBoxButtons::YesNo, MessageBoxIcon::Question)==System::Windows::Forms::DialogResult::Yes) {
				MySqlConnection ^con = gcnew MySqlConnection(constr);
				MySqlCommand ^cmd = gcnew MySqlCommand("DELETE FROM product_tb WHERE barcode="+ barcode +"", con);
				MySqlDataReader^ dr;
				con->Open();
				dr = cmd->ExecuteReader();

				MessageBox::Show("Product " + barcode + " Information Deleted");
				clearfields();
				loadTable("Default");
				con->Close();
			}
			else {
				MessageBox::Show("Product Deletion Aborted");
			}
		}

		//Read Product from the Databse
		private: System::Void inp_search(System::Object^  sender, System::EventArgs^  e) {
			String^ search = inp_proSearch->Text;
			loadTable(search);
		}

		//Load Products on Data Grid
		void loadTable(String^ query) {
			String^ queryStr;
			String^ column = SearchFilterChecker(cb_category->Text);
			
			if (String::Compare(query, "Default") == 0) {
				queryStr = "select * from product_tb";
			}
			else {
				queryStr = "select * from product_tb WHERE " + column + " LIKE '%" + query + "%'";
			}

			try{
				MySqlConnection^ con = gcnew MySqlConnection(constr);
				MySqlDataAdapter^ sda = gcnew MySqlDataAdapter(queryStr,con);
				DataTable^ dt = gcnew DataTable();
				sda->Fill(dt);
				bindingSource1->DataSource = dt;
				table_prevProduct->DataSource = bindingSource1;

				if (table_prevProduct->RowCount == 1) {
					MessageBox::Show("No product found");
					loadTable("Default");
				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Something wrong in fetching the product to data grid: " + ex);
			}

		}
		
		String ^checkCode, ^checkName, ^checkDesc, ^checkPrice, ^checkStock, ^checkCategory;
		String^ SearchFilterChecker(String^ cb_category) {
			
			String^ code;
			if (String::Compare(cb_category,"Barcode")==0){
				code = "barcode";
			}else if (String::Compare(cb_category, "Product Name") == 0) {
				code = "pro_name";
			}else if (String::Compare(cb_category, "Category") == 0) {
				code = "pro_category";
			}
			return code;
		}

		private: System::Void table_prevProduct_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			
			String^ search = table_prevProduct->Rows[e->RowIndex]->Cells["barcode"]->Value->ToString();
			try
			{
				MySqlConnection^ con = gcnew MySqlConnection(constr);
				MySqlCommand^ cmd = gcnew MySqlCommand("select * from product_tb WHERE barcode='"+search+"'", con);
				MySqlDataReader^ dr;
				con->Open();
				dr = cmd->ExecuteReader();
				clearfields();

				if (dr->Read()) {

					checkCode = dr->GetString(0);
					checkName = dr->GetString(1);
					checkDesc = dr->GetString(2);
					checkPrice = dr->GetString(4);
					checkStock = dr->GetString(5);
					checkCategory = dr->GetString(3);
					lbl_prevCode->Text = checkCode;
					inp_prevName->Text = checkName;
					inp_prevDesc->Text = checkDesc;
					inp_prevCategory->Text = checkCategory;
					inp_prevPrice->Text = checkPrice;
					inp_prevStock->Text = checkStock;
					//Edit Mode
					inp_editCode->Text = checkCode;
					inp_editName->Text = checkName;
					inp_editDesc->Text = checkDesc;
					cb_editCategory->SelectedItem = checkCategory;
					inp_editPrice->Text = checkPrice;
					inp_editStock->Text = checkStock;

				}
				else {
					MessageBox::Show("The cell clicked " + search + " is not existing try to change the filter.");
					clearfields();
				}
				con->Close();

			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Something wrong in searching the product: " + ex);
			}
			
		}
	
		// Utilities
		void clearfields() {
			inp_proName->Text = "";
			inp_proCode->Text = "";
			inp_proDesc->Text = "";
			inp_proPrice->Text = "";
			inp_proStock->Text = "";
			inp_prevStock->Text = "";
			inp_prevPrice->Text = "";
			inp_prevDesc->Text = "";
			lbl_prevCode->Text = "";
			inp_prevName->Text = "";
			cb_proCategory->Text = "";
			inp_prevCategory->Text = "";
			lbl_searchError->Text = "";
			inp_editCode->Text = "";
			inp_editName->Text = "";
			inp_editDesc->Text = "";
			cb_editCategory->SelectedItem = "";
			inp_editPrice->Text = "";
			inp_editStock->Text ="";
			checkName=""; 
			checkDesc=""; 
			checkPrice=""; 
			checkStock=""; 
			checkCategory="";
		}
		
		bool validateFields(String^ toValidate) {
			bool isValidated;
			if (String::Compare(toValidate, "update_sameFields") == 0) {
				isValidated = String::Compare(inp_editName->Text, checkName) == 0
					&& String::Compare(inp_editDesc->Text, checkDesc) == 0 && String::Compare(cb_editCategory->Text, checkCategory) == 0
					&& String::Compare(inp_editPrice->Text, checkPrice) == 0 && String::Compare(inp_editStock->Text, checkStock) == 0 ? true : false;
			}
			else if(String::Compare(toValidate, "update_emptyFields") == 0){
				isValidated = String::Compare(inp_editCode->Text, "") == 0 || String::Compare(inp_editName->Text,"") == 0
					|| String::Compare(inp_editDesc->Text, "") == 0 || String::Compare(cb_editCategory->Text, "") == 0
					|| String::Compare(inp_editPrice->Text, "") == 0 || String::Compare(inp_editStock->Text, "") == 0 ? true : false;
			}
			else if (String::Compare(toValidate, "add_emptyFields") == 0) {
				isValidated = String::Compare(inp_proCode->Text, "") == 0 && String::Compare(inp_proName->Text, "") == 0
					&& String::Compare(inp_proCode->Text, "") == 0 && String::Compare(inp_proDesc->Text, "") == 0
					&& String::Compare(inp_proPrice->Text, "") == 0 && String::Compare(inp_proStock->Text, "") == 0 ? true : false;
			}
			
			return isValidated;
			
		}

		// Button Tab
		private: System::Void btn_dashboard_Click(System::Object^  sender, System::EventArgs^  e) {
			tab_control->SelectTab(1);
		}
		private: System::Void btn_addproduct_Click(System::Object^  sender, System::EventArgs^  e) {
			tab_control->SelectTab(0);
		}
		private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			tab_control->SelectTab(3);
		}
		private: System::Void btn_prevEdit_Click(System::Object^  sender, System::EventArgs^  e) {
			if (String::Compare(lbl_prevCode->Text,"")==0) {
				MessageBox::Show("No product selected.");
			}else {
				tab_control->SelectTab(2);
			}
		}
		private: System::Void btn_editBack_Click(System::Object^  sender, System::EventArgs^  e) {
			tab_control->SelectTab(1);
		}
		private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		obj->Show();
		}

		private: System::Void cb_category_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			if (String::Compare(cb_category->Text, "Category")==0) {
				cb_searchCategory->Visible = true;
				inp_proSearch->Visible = false;
			}
			else if (String::Compare(cb_category->Text, "Default") == 0) {
				loadTable("Default");
			}
			else {
				inp_proSearch->Visible = true;
				cb_searchCategory->Visible = false;
			}
				
		}
		private: System::Void cb_searchCategory_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			loadTable(cb_searchCategory->Text);
		}
};
}

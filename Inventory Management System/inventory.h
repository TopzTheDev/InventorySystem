#pragma once
#include <conio.h>
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <array>
#include <fstream> 
#include <stdio.h>

namespace InventoryManagementSystem {
	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Threading;

	/// <summary>
	/// Summary for inventory
	/// </summary>
	public ref class inventory : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;


	private: System::Windows::Forms::Label^  lbl_searchError;
	private: System::Windows::Forms::ComboBox^  cb_proCategory;
	private: System::Windows::Forms::ComboBox^  cb_searchCategory;
	private: System::Windows::Forms::Button^  btn_accMode;
	private: System::Windows::Forms::NumericUpDown^  inp_proStock;
	private: System::Windows::Forms::NumericUpDown^  inp_proPrice;
	private: System::Windows::Forms::TextBox^  inp_proCode;
	private: System::Windows::Forms::Panel^  pnl_navBar;
	private: System::Windows::Forms::Label^  btn_account;
	private: System::Windows::Forms::Label^  lbl_indicator;

	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  btn_dashboard;
	private: System::Windows::Forms::Label^  btn_addproduct;
	private: System::Windows::Forms::Label^  btn_logout;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::TextBox^  lbl_prevCode;
	private: System::Windows::Forms::Label^  label53;
	private: System::Windows::Forms::Label^  inp_prevStock;
	private: System::Windows::Forms::Label^  inp_prevCategory;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  inp_prevName;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  inp_prevDesc;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  inp_prevPrice;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::Label^  btn_prevDel;
	private: System::Windows::Forms::Label^  btn_prevEdit;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::DataGridView^  table_prevProduct;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  cl_description;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  cl_categories;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::Label^  btn_sales;
	private: System::Windows::Forms::ComboBox^  cb_editCategory;
	private: System::Windows::Forms::NumericUpDown^  inp_editPrice;
	private: System::Windows::Forms::NumericUpDown^  inp_editStock;



	private: System::Windows::Forms::TextBox^  inp_editCode;
	private: System::Windows::Forms::TextBox^  inp_editDesc;

	private: System::Windows::Forms::TextBox^  inp_editName;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  btn_uppAcc;

	private: System::Windows::Forms::Label^  btn_addAcc;

	private: System::Windows::Forms::TextBox^  inp_accUser;


	private: System::Windows::Forms::Label^  label30;



	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::ComboBox^  cb_accLoginas;
private: System::Windows::Forms::TextBox^  inp_accPass;
private: System::Windows::Forms::Label^  btn_delAcc;
private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::DataGridView^  tb_account;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
private: System::Windows::Forms::TabPage^  tab_sales;
private: System::Windows::Forms::Panel^  panel8;


private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::TextBox^  lbl_salesCode;

private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  lbl_salesQuan;


private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::Label^  lbl_salesCust;

private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::Label^  lbl_salesPrice;

private: System::Windows::Forms::Label^  label52;
private: System::Windows::Forms::Label^  lbl_salesDate;



private: System::Windows::Forms::Panel^  panel9;
private: System::Windows::Forms::Panel^  panel10;

private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::Label^  label60;
private: System::Windows::Forms::Label^  label61;
private: System::Windows::Forms::Label^  label62;
private: System::Windows::Forms::DataGridView^  tb_sales;







private: System::Windows::Forms::Label^  label15;





private: System::Windows::Forms::Panel^  panel11;
private: System::Windows::Forms::Label^  lbl_overSale;

private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Panel^  panel12;
private: System::Windows::Forms::Label^  lbl_salesMon;

private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::Panel^  panel13;
private: System::Windows::Forms::Label^  lbl_salesTrans;

private: System::Windows::Forms::Label^  label63;
private: System::Windows::Forms::Panel^  panel14;
private: System::Windows::Forms::Label^  lbl_saleSold;

private: System::Windows::Forms::Label^  label65;
private: System::Windows::Forms::Panel^  panel16;
private: System::Windows::Forms::Label^  lbl_proCounts;
private: System::Windows::Forms::Label^  ss;
private: System::Windows::Forms::Panel^  panel17;
private: System::Windows::Forms::Label^  lbl_overStocks;
private: System::Windows::Forms::Label^  label71;
private: System::Windows::Forms::Panel^  panel18;
private: System::Windows::Forms::Label^  lbl_overPrice;
private: System::Windows::Forms::Label^  label73;
private: System::Windows::Forms::Panel^  panel15;
private: System::Windows::Forms::Label^  lbl_overCrit;

private: System::Windows::Forms::Label^  label67;

private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn11;























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



	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  inp_proSearch;
















	private: System::Windows::Forms::TabPage^  tab_addproduct;

	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Label^  label7;


	private: System::Windows::Forms::TextBox^  inp_proDesc;
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
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TabPage^  tab_accounts;
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
			table_prevProduct->AllowUserToAddRows = false;
			tb_account->AllowUserToAddRows = false;
			loadTable("default");
			loadAccTable("default");
			loadSalesTable();

		}
		void InitializeComponent(void)
		{	
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(inventory::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->tab_dashboard = (gcnew System::Windows::Forms::TabPage());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->lbl_overCrit = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->lbl_proCounts = (gcnew System::Windows::Forms::Label());
			this->ss = (gcnew System::Windows::Forms::Label());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->lbl_overStocks = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->lbl_overPrice = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->btn_prevEdit = (gcnew System::Windows::Forms::Label());
			this->btn_prevDel = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->lbl_prevCode = (gcnew System::Windows::Forms::TextBox());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->inp_prevStock = (gcnew System::Windows::Forms::Label());
			this->inp_prevCategory = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->inp_prevName = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->inp_prevDesc = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->inp_prevPrice = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->table_prevProduct = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cl_description = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cl_categories = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cb_searchCategory = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_searchError = (gcnew System::Windows::Forms::Label());
			this->cb_category = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->inp_proSearch = (gcnew System::Windows::Forms::TextBox());
			this->tab_addproduct = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->inp_proCode = (gcnew System::Windows::Forms::TextBox());
			this->inp_proPrice = (gcnew System::Windows::Forms::NumericUpDown());
			this->inp_proStock = (gcnew System::Windows::Forms::NumericUpDown());
			this->cb_proCategory = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->inp_proDesc = (gcnew System::Windows::Forms::TextBox());
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
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->inp_editCode = (gcnew System::Windows::Forms::TextBox());
			this->inp_editDesc = (gcnew System::Windows::Forms::TextBox());
			this->inp_editName = (gcnew System::Windows::Forms::TextBox());
			this->cb_editCategory = (gcnew System::Windows::Forms::ComboBox());
			this->inp_editPrice = (gcnew System::Windows::Forms::NumericUpDown());
			this->inp_editStock = (gcnew System::Windows::Forms::NumericUpDown());
			this->btn_editBack = (gcnew System::Windows::Forms::Button());
			this->inp_editUpdate = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->tab_accounts = (gcnew System::Windows::Forms::TabPage());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn_delAcc = (gcnew System::Windows::Forms::Label());
			this->cb_accLoginas = (gcnew System::Windows::Forms::ComboBox());
			this->inp_accPass = (gcnew System::Windows::Forms::TextBox());
			this->btn_uppAcc = (gcnew System::Windows::Forms::Label());
			this->btn_addAcc = (gcnew System::Windows::Forms::Label());
			this->btn_accMode = (gcnew System::Windows::Forms::Button());
			this->inp_accUser = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->tb_account = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tab_sales = (gcnew System::Windows::Forms::TabPage());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->lbl_saleSold = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->lbl_salesTrans = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->lbl_salesMon = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->lbl_overSale = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->lbl_salesCode = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->lbl_salesQuan = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->lbl_salesCust = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->lbl_salesPrice = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->lbl_salesDate = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->tb_sales = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pnl_navBar = (gcnew System::Windows::Forms::Panel());
			this->lbl_indicator = (gcnew System::Windows::Forms::Label());
			this->btn_sales = (gcnew System::Windows::Forms::Label());
			this->btn_account = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btn_dashboard = (gcnew System::Windows::Forms::Label());
			this->btn_addproduct = (gcnew System::Windows::Forms::Label());
			this->btn_logout = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->tab_dashboard->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel17->SuspendLayout();
			this->panel18->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table_prevProduct))->BeginInit();
			this->tab_addproduct->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inp_proPrice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inp_proStock))->BeginInit();
			this->tab_control->SuspendLayout();
			this->tab_editproduct->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inp_editPrice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inp_editStock))->BeginInit();
			this->tab_accounts->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tb_account))->BeginInit();
			this->tab_sales->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tb_sales))->BeginInit();
			this->pnl_navBar->SuspendLayout();
			this->SuspendLayout();
			// 
			// tab_dashboard
			// 
			this->tab_dashboard->BackColor = System::Drawing::Color::White;
			this->tab_dashboard->Controls->Add(this->panel15);
			this->tab_dashboard->Controls->Add(this->panel16);
			this->tab_dashboard->Controls->Add(this->panel17);
			this->tab_dashboard->Controls->Add(this->panel18);
			this->tab_dashboard->Controls->Add(this->panel7);
			this->tab_dashboard->Controls->Add(this->panel5);
			this->tab_dashboard->Controls->Add(this->panel6);
			this->tab_dashboard->Controls->Add(this->table_prevProduct);
			this->tab_dashboard->Controls->Add(this->cb_searchCategory);
			this->tab_dashboard->Controls->Add(this->lbl_searchError);
			this->tab_dashboard->Controls->Add(this->cb_category);
			this->tab_dashboard->Controls->Add(this->label14);
			this->tab_dashboard->Controls->Add(this->inp_proSearch);
			this->tab_dashboard->Location = System::Drawing::Point(4, 25);
			this->tab_dashboard->Name = L"tab_dashboard";
			this->tab_dashboard->Padding = System::Windows::Forms::Padding(3);
			this->tab_dashboard->Size = System::Drawing::Size(1200, 557);
			this->tab_dashboard->TabIndex = 1;
			this->tab_dashboard->Text = L"Dashboard";
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->panel15->Controls->Add(this->lbl_overCrit);
			this->panel15->Controls->Add(this->label67);
			this->panel15->Location = System::Drawing::Point(969, 440);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(159, 100);
			this->panel15->TabIndex = 86;
			// 
			// lbl_overCrit
			// 
			this->lbl_overCrit->BackColor = System::Drawing::Color::Transparent;
			this->lbl_overCrit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F));
			this->lbl_overCrit->ForeColor = System::Drawing::Color::White;
			this->lbl_overCrit->Location = System::Drawing::Point(9, 38);
			this->lbl_overCrit->Name = L"lbl_overCrit";
			this->lbl_overCrit->Size = System::Drawing::Size(120, 42);
			this->lbl_overCrit->TabIndex = 77;
			this->lbl_overCrit->Text = L"5";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->BackColor = System::Drawing::Color::Transparent;
			this->label67->Font = (gcnew System::Drawing::Font(L"Roboto Light", 14));
			this->label67->ForeColor = System::Drawing::Color::White;
			this->label67->Location = System::Drawing::Point(12, 11);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(114, 23);
			this->label67->TabIndex = 76;
			this->label67->Text = L"Critical Level";
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel16->Controls->Add(this->lbl_proCounts);
			this->panel16->Controls->Add(this->ss);
			this->panel16->Location = System::Drawing::Point(803, 440);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(159, 100);
			this->panel16->TabIndex = 85;
			// 
			// lbl_proCounts
			// 
			this->lbl_proCounts->BackColor = System::Drawing::Color::Transparent;
			this->lbl_proCounts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F));
			this->lbl_proCounts->ForeColor = System::Drawing::Color::White;
			this->lbl_proCounts->Location = System::Drawing::Point(9, 38);
			this->lbl_proCounts->Name = L"lbl_proCounts";
			this->lbl_proCounts->Size = System::Drawing::Size(120, 42);
			this->lbl_proCounts->TabIndex = 77;
			this->lbl_proCounts->Text = L"500";
			// 
			// ss
			// 
			this->ss->AutoSize = true;
			this->ss->BackColor = System::Drawing::Color::Transparent;
			this->ss->Font = (gcnew System::Drawing::Font(L"Roboto Light", 14));
			this->ss->ForeColor = System::Drawing::Color::White;
			this->ss->Location = System::Drawing::Point(12, 11);
			this->ss->Name = L"ss";
			this->ss->Size = System::Drawing::Size(130, 23);
			this->ss->TabIndex = 76;
			this->ss->Text = L"Product Count";
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(193)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->panel17->Controls->Add(this->lbl_overStocks);
			this->panel17->Controls->Add(this->label71);
			this->panel17->Location = System::Drawing::Point(608, 440);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(188, 100);
			this->panel17->TabIndex = 84;
			// 
			// lbl_overStocks
			// 
			this->lbl_overStocks->BackColor = System::Drawing::Color::Transparent;
			this->lbl_overStocks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F));
			this->lbl_overStocks->ForeColor = System::Drawing::Color::White;
			this->lbl_overStocks->Location = System::Drawing::Point(9, 38);
			this->lbl_overStocks->Name = L"lbl_overStocks";
			this->lbl_overStocks->Size = System::Drawing::Size(159, 42);
			this->lbl_overStocks->TabIndex = 77;
			this->lbl_overStocks->Text = L"1,000.50";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->BackColor = System::Drawing::Color::Transparent;
			this->label71->Font = (gcnew System::Drawing::Font(L"Roboto Light", 14));
			this->label71->ForeColor = System::Drawing::Color::White;
			this->label71->Location = System::Drawing::Point(12, 11);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(67, 23);
			this->label71->TabIndex = 76;
			this->label71->Text = L"Stocks";
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->panel18->Controls->Add(this->lbl_overPrice);
			this->panel18->Controls->Add(this->label73);
			this->panel18->Location = System::Drawing::Point(363, 440);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(235, 100);
			this->panel18->TabIndex = 83;
			// 
			// lbl_overPrice
			// 
			this->lbl_overPrice->BackColor = System::Drawing::Color::Transparent;
			this->lbl_overPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F));
			this->lbl_overPrice->ForeColor = System::Drawing::Color::White;
			this->lbl_overPrice->Location = System::Drawing::Point(9, 38);
			this->lbl_overPrice->Name = L"lbl_overPrice";
			this->lbl_overPrice->Size = System::Drawing::Size(221, 42);
			this->lbl_overPrice->TabIndex = 77;
			this->lbl_overPrice->Text = L"1,000,501.50";
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->BackColor = System::Drawing::Color::Transparent;
			this->label73->Font = (gcnew System::Drawing::Font(L"Roboto Light", 14));
			this->label73->ForeColor = System::Drawing::Color::White;
			this->label73->Location = System::Drawing::Point(12, 11);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(113, 23);
			this->label73->TabIndex = 76;
			this->label73->Text = L"Overall Price";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->panel7->Controls->Add(this->btn_prevEdit);
			this->panel7->Controls->Add(this->btn_prevDel);
			this->panel7->Controls->Add(this->label42);
			this->panel7->Controls->Add(this->lbl_prevCode);
			this->panel7->Controls->Add(this->label53);
			this->panel7->Controls->Add(this->inp_prevStock);
			this->panel7->Controls->Add(this->inp_prevCategory);
			this->panel7->Controls->Add(this->label41);
			this->panel7->Controls->Add(this->label43);
			this->panel7->Controls->Add(this->label44);
			this->panel7->Controls->Add(this->inp_prevName);
			this->panel7->Controls->Add(this->label46);
			this->panel7->Controls->Add(this->inp_prevDesc);
			this->panel7->Controls->Add(this->label48);
			this->panel7->Controls->Add(this->inp_prevPrice);
			this->panel7->Controls->Add(this->label50);
			this->panel7->Controls->Add(this->label51);
			this->panel7->Location = System::Drawing::Point(-1, 0);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(333, 556);
			this->panel7->TabIndex = 71;
			// 
			// btn_prevEdit
			// 
			this->btn_prevEdit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->btn_prevEdit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_prevEdit->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->btn_prevEdit->ForeColor = System::Drawing::Color::White;
			this->btn_prevEdit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_prevEdit.Image")));
			this->btn_prevEdit->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_prevEdit->Location = System::Drawing::Point(28, 473);
			this->btn_prevEdit->Name = L"btn_prevEdit";
			this->btn_prevEdit->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->btn_prevEdit->Size = System::Drawing::Size(134, 45);
			this->btn_prevEdit->TabIndex = 75;
			this->btn_prevEdit->Text = L"Update";
			this->btn_prevEdit->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_prevEdit->Click += gcnew System::EventHandler(this, &inventory::btn_prevEdit_Click);
			// 
			// btn_prevDel
			// 
			this->btn_prevDel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btn_prevDel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_prevDel->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->btn_prevDel->ForeColor = System::Drawing::Color::White;
			this->btn_prevDel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_prevDel.Image")));
			this->btn_prevDel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_prevDel->Location = System::Drawing::Point(179, 473);
			this->btn_prevDel->Name = L"btn_prevDel";
			this->btn_prevDel->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->btn_prevDel->Size = System::Drawing::Size(138, 45);
			this->btn_prevDel->TabIndex = 74;
			this->btn_prevDel->Text = L"Delete ";
			this->btn_prevDel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_prevDel->Click += gcnew System::EventHandler(this, &inventory::btn_prevDelete_Click);
			// 
			// label42
			// 
			this->label42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->label42->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label42->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label42.Image")));
			this->label42->Location = System::Drawing::Point(267, 110);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(41, 36);
			this->label42->TabIndex = 73;
			// 
			// lbl_prevCode
			// 
			this->lbl_prevCode->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->lbl_prevCode->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lbl_prevCode->Font = (gcnew System::Drawing::Font(L"Roboto Light", 21));
			this->lbl_prevCode->ForeColor = System::Drawing::Color::White;
			this->lbl_prevCode->HideSelection = false;
			this->lbl_prevCode->Location = System::Drawing::Point(32, 110);
			this->lbl_prevCode->Multiline = true;
			this->lbl_prevCode->Name = L"lbl_prevCode";
			this->lbl_prevCode->Size = System::Drawing::Size(276, 36);
			this->lbl_prevCode->TabIndex = 72;
			this->lbl_prevCode->WordWrap = false;
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Roboto", 23, System::Drawing::FontStyle::Bold));
			this->label53->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label53->Location = System::Drawing::Point(25, 24);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(245, 37);
			this->label53->TabIndex = 71;
			this->label53->Text = L"Product Preview";
			// 
			// inp_prevStock
			// 
			this->inp_prevStock->BackColor = System::Drawing::Color::Transparent;
			this->inp_prevStock->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->inp_prevStock->ForeColor = System::Drawing::Color::White;
			this->inp_prevStock->Location = System::Drawing::Point(28, 428);
			this->inp_prevStock->Name = L"inp_prevStock";
			this->inp_prevStock->Size = System::Drawing::Size(274, 26);
			this->inp_prevStock->TabIndex = 66;
			// 
			// inp_prevCategory
			// 
			this->inp_prevCategory->BackColor = System::Drawing::Color::Transparent;
			this->inp_prevCategory->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->inp_prevCategory->ForeColor = System::Drawing::Color::White;
			this->inp_prevCategory->Location = System::Drawing::Point(28, 298);
			this->inp_prevCategory->Name = L"inp_prevCategory";
			this->inp_prevCategory->Size = System::Drawing::Size(280, 26);
			this->inp_prevCategory->TabIndex = 65;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::Transparent;
			this->label41->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label41->ForeColor = System::Drawing::Color::White;
			this->label41->Location = System::Drawing::Point(28, 271);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(85, 23);
			this->label41->TabIndex = 64;
			this->label41->Text = L"Category";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->BackColor = System::Drawing::Color::Transparent;
			this->label43->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label43->ForeColor = System::Drawing::Color::White;
			this->label43->Location = System::Drawing::Point(28, 157);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(132, 23);
			this->label43->TabIndex = 54;
			this->label43->Text = L"Product Name";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->BackColor = System::Drawing::Color::Transparent;
			this->label44->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label44->ForeColor = System::Drawing::Color::White;
			this->label44->Location = System::Drawing::Point(28, 80);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(80, 23);
			this->label44->TabIndex = 62;
			this->label44->Text = L"Barcode";
			// 
			// inp_prevName
			// 
			this->inp_prevName->BackColor = System::Drawing::Color::Transparent;
			this->inp_prevName->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->inp_prevName->ForeColor = System::Drawing::Color::White;
			this->inp_prevName->Location = System::Drawing::Point(28, 183);
			this->inp_prevName->Name = L"inp_prevName";
			this->inp_prevName->Size = System::Drawing::Size(280, 26);
			this->inp_prevName->TabIndex = 55;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->BackColor = System::Drawing::Color::Transparent;
			this->label46->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label46->ForeColor = System::Drawing::Color::White;
			this->label46->Location = System::Drawing::Point(28, 212);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(106, 23);
			this->label46->TabIndex = 56;
			this->label46->Text = L"Description";
			// 
			// inp_prevDesc
			// 
			this->inp_prevDesc->BackColor = System::Drawing::Color::Transparent;
			this->inp_prevDesc->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->inp_prevDesc->ForeColor = System::Drawing::Color::White;
			this->inp_prevDesc->Location = System::Drawing::Point(28, 237);
			this->inp_prevDesc->Name = L"inp_prevDesc";
			this->inp_prevDesc->Size = System::Drawing::Size(266, 26);
			this->inp_prevDesc->TabIndex = 57;
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->BackColor = System::Drawing::Color::Transparent;
			this->label48->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label48->ForeColor = System::Drawing::Color::White;
			this->label48->Location = System::Drawing::Point(28, 334);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(53, 23);
			this->label48->TabIndex = 58;
			this->label48->Text = L"Price";
			// 
			// inp_prevPrice
			// 
			this->inp_prevPrice->BackColor = System::Drawing::Color::Transparent;
			this->inp_prevPrice->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->inp_prevPrice->ForeColor = System::Drawing::Color::White;
			this->inp_prevPrice->Location = System::Drawing::Point(28, 361);
			this->inp_prevPrice->Name = L"inp_prevPrice";
			this->inp_prevPrice->Size = System::Drawing::Size(274, 26);
			this->inp_prevPrice->TabIndex = 59;
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->BackColor = System::Drawing::Color::Transparent;
			this->label50->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label50->ForeColor = System::Drawing::Color::White;
			this->label50->Location = System::Drawing::Point(28, 399);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(58, 23);
			this->label50->TabIndex = 60;
			this->label50->Text = L"Stock";
			// 
			// label51
			// 
			this->label51->BackColor = System::Drawing::Color::Transparent;
			this->label51->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label51->ForeColor = System::Drawing::Color::White;
			this->label51->Location = System::Drawing::Point(28, 397);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(280, 26);
			this->label51->TabIndex = 61;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Location = System::Drawing::Point(320, 88);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(43, 455);
			this->panel5->TabIndex = 74;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->panel6->Controls->Add(this->label12);
			this->panel6->Controls->Add(this->label39);
			this->panel6->Controls->Add(this->label8);
			this->panel6->Controls->Add(this->label9);
			this->panel6->Controls->Add(this->label10);
			this->panel6->Controls->Add(this->label11);
			this->panel6->Location = System::Drawing::Point(363, 76);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(805, 36);
			this->panel6->TabIndex = 73;
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(255, 6);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(123, 26);
			this->label12->TabIndex = 65;
			this->label12->Text = L"Description";
			// 
			// label39
			// 
			this->label39->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label39->ForeColor = System::Drawing::Color::White;
			this->label39->Location = System::Drawing::Point(558, 7);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(123, 26);
			this->label39->TabIndex = 64;
			this->label39->Text = L"Stocks";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(2, 7);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(108, 26);
			this->label8->TabIndex = 63;
			this->label8->Text = L"Barcode";
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(685, 6);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(117, 26);
			this->label9->TabIndex = 62;
			this->label9->Text = L"Price";
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(408, 6);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(123, 26);
			this->label10->TabIndex = 61;
			this->label10->Text = L"Category";
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(125, 6);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(128, 26);
			this->label11->TabIndex = 60;
			this->label11->Text = L"Product Name";
			// 
			// table_prevProduct
			// 
			this->table_prevProduct->BackgroundColor = System::Drawing::Color::White;
			this->table_prevProduct->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->table_prevProduct->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->table_prevProduct->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Roboto Light", 10));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->Padding = System::Windows::Forms::Padding(1);
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->table_prevProduct->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->table_prevProduct->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table_prevProduct->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->cl_description, this->cl_categories, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4
			});
			this->table_prevProduct->Cursor = System::Windows::Forms::Cursors::Hand;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->Padding = System::Windows::Forms::Padding(0, 2, 2, 2);
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->table_prevProduct->DefaultCellStyle = dataGridViewCellStyle2;
			this->table_prevProduct->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->table_prevProduct->Location = System::Drawing::Point(322, 88);
			this->table_prevProduct->Name = L"table_prevProduct";
			this->table_prevProduct->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->table_prevProduct->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->table_prevProduct->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->Padding = System::Windows::Forms::Padding(2);
			this->table_prevProduct->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->table_prevProduct->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->table_prevProduct->Size = System::Drawing::Size(846, 335);
			this->table_prevProduct->TabIndex = 72;
			this->table_prevProduct->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &inventory::table_prevProduct_CellClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->dataGridViewTextBoxColumn1->FillWeight = 15;
			this->dataGridViewTextBoxColumn1->HeaderText = L"Barcode";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 120;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Product Name";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 130;
			// 
			// cl_description
			// 
			this->cl_description->HeaderText = L"Description";
			this->cl_description->Name = L"cl_description";
			this->cl_description->Width = 160;
			// 
			// cl_categories
			// 
			this->cl_categories->HeaderText = L"Category";
			this->cl_categories->Name = L"cl_categories";
			this->cl_categories->Width = 150;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Stocks";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 120;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Product Price";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 122;
			// 
			// cb_searchCategory
			// 
			this->cb_searchCategory->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_searchCategory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->cb_searchCategory->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->cb_searchCategory->FormattingEnabled = true;
			this->cb_searchCategory->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"Alcohol", L"Fruit/veg/salads", L"Dairy",
					L"Chilled convenience", L"Bathroom toiletries", L"Household/cleaning", L"Fresh meat", L"Frozen prepared foods", L"Ambient bakery",
					L"Soft drinks", L"Confectionery", L"Fresh Poultry/game", L"Biscuits", L"Canned goods", L"Petcare", L"Savoury home cooking", L"Savouries",
					L"Hot beverages", L"Packet cereal", L"Healthcare", L"Others"
			});
			this->cb_searchCategory->Location = System::Drawing::Point(604, 21);
			this->cb_searchCategory->Name = L"cb_searchCategory";
			this->cb_searchCategory->Size = System::Drawing::Size(290, 28);
			this->cb_searchCategory->TabIndex = 44;
			this->cb_searchCategory->Visible = false;
			this->cb_searchCategory->SelectedIndexChanged += gcnew System::EventHandler(this, &inventory::cb_searchCategory_SelectedIndexChanged);
			// 
			// lbl_searchError
			// 
			this->lbl_searchError->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->lbl_searchError->ForeColor = System::Drawing::Color::Red;
			this->lbl_searchError->Location = System::Drawing::Point(524, 68);
			this->lbl_searchError->Name = L"lbl_searchError";
			this->lbl_searchError->Size = System::Drawing::Size(407, 22);
			this->lbl_searchError->TabIndex = 40;
			// 
			// cb_category
			// 
			this->cb_category->DisplayMember = L"Barcode";
			this->cb_category->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_category->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->cb_category->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->cb_category->FormattingEnabled = true;
			this->cb_category->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Default", L"Barcode", L"Product Name", L"Category" });
			this->cb_category->Location = System::Drawing::Point(449, 21);
			this->cb_category->Name = L"cb_category";
			this->cb_category->Size = System::Drawing::Size(149, 28);
			this->cb_category->TabIndex = 36;
			this->cb_category->SelectedIndexChanged += gcnew System::EventHandler(this, &inventory::cb_category_SelectedIndexChanged);
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label14->Location = System::Drawing::Point(359, 24);
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
			this->inp_proSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->inp_proSearch->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_proSearch->HideSelection = false;
			this->inp_proSearch->Location = System::Drawing::Point(618, 22);
			this->inp_proSearch->Name = L"inp_proSearch";
			this->inp_proSearch->Size = System::Drawing::Size(289, 27);
			this->inp_proSearch->TabIndex = 32;
			this->inp_proSearch->TextChanged += gcnew System::EventHandler(this, &inventory::inp_search);
			// 
			// tab_addproduct
			// 
			this->tab_addproduct->BackColor = System::Drawing::Color::White;
			this->tab_addproduct->Controls->Add(this->pictureBox1);
			this->tab_addproduct->Controls->Add(this->inp_proCode);
			this->tab_addproduct->Controls->Add(this->inp_proPrice);
			this->tab_addproduct->Controls->Add(this->inp_proStock);
			this->tab_addproduct->Controls->Add(this->cb_proCategory);
			this->tab_addproduct->Controls->Add(this->button2);
			this->tab_addproduct->Controls->Add(this->label7);
			this->tab_addproduct->Controls->Add(this->inp_proDesc);
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
			this->tab_addproduct->Size = System::Drawing::Size(1200, 557);
			this->tab_addproduct->TabIndex = 0;
			this->tab_addproduct->Text = L"Add Product";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(46, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(50, 50);
			this->pictureBox1->TabIndex = 45;
			this->pictureBox1->TabStop = false;
			// 
			// inp_proCode
			// 
			this->inp_proCode->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_proCode->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_proCode->Font = (gcnew System::Drawing::Font(L"Roboto Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inp_proCode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_proCode->HideSelection = false;
			this->inp_proCode->Location = System::Drawing::Point(47, 132);
			this->inp_proCode->Multiline = true;
			this->inp_proCode->Name = L"inp_proCode";
			this->inp_proCode->Size = System::Drawing::Size(350, 40);
			this->inp_proCode->TabIndex = 44;
			// 
			// inp_proPrice
			// 
			this->inp_proPrice->DecimalPlaces = 2;
			this->inp_proPrice->Font = (gcnew System::Drawing::Font(L"Roboto Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inp_proPrice->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_proPrice->Location = System::Drawing::Point(434, 227);
			this->inp_proPrice->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->inp_proPrice->Name = L"inp_proPrice";
			this->inp_proPrice->Size = System::Drawing::Size(350, 40);
			this->inp_proPrice->TabIndex = 43;
			// 
			// inp_proStock
			// 
			this->inp_proStock->Font = (gcnew System::Drawing::Font(L"Roboto Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inp_proStock->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_proStock->Location = System::Drawing::Point(434, 323);
			this->inp_proStock->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1410065408, 2, 0, 0 });
			this->inp_proStock->Name = L"inp_proStock";
			this->inp_proStock->Size = System::Drawing::Size(350, 40);
			this->inp_proStock->TabIndex = 42;
			// 
			// cb_proCategory
			// 
			this->cb_proCategory->Font = (gcnew System::Drawing::Font(L"Roboto Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cb_proCategory->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->cb_proCategory->FormattingEnabled = true;
			this->cb_proCategory->ItemHeight = 33;
			this->cb_proCategory->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"Alcohol", L"Fruit/veg/salads", L"Dairy",
					L"Chilled convenience", L"Bathroom toiletries", L"Household/cleaning", L"Fresh meat", L"Frozen prepared foods", L"Ambient bakery",
					L"Soft drinks", L"Confectionery", L"Fresh Poultry/game", L"Biscuits", L"Canned goods", L"Petcare", L"Savoury home cooking", L"Savouries",
					L"Hot beverages", L"Packet cereal", L"Healthcare", L"Others"
			});
			this->cb_proCategory->Location = System::Drawing::Point(432, 132);
			this->cb_proCategory->MaximumSize = System::Drawing::Size(350, 0);
			this->cb_proCategory->MinimumSize = System::Drawing::Size(350, 0);
			this->cb_proCategory->Name = L"cb_proCategory";
			this->cb_proCategory->Size = System::Drawing::Size(350, 41);
			this->cb_proCategory->TabIndex = 40;
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Roboto Light", 14.25F));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->button2->Location = System::Drawing::Point(48, 393);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(160, 35);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label7->Location = System::Drawing::Point(102, 36);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(196, 35);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Add Product";
			// 
			// inp_proDesc
			// 
			this->inp_proDesc->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_proDesc->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_proDesc->Font = (gcnew System::Drawing::Font(L"Roboto Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inp_proDesc->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_proDesc->HideSelection = false;
			this->inp_proDesc->Location = System::Drawing::Point(47, 323);
			this->inp_proDesc->Multiline = true;
			this->inp_proDesc->Name = L"inp_proDesc";
			this->inp_proDesc->Size = System::Drawing::Size(350, 40);
			this->inp_proDesc->TabIndex = 14;
			// 
			// inp_proName
			// 
			this->inp_proName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_proName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_proName->Font = (gcnew System::Drawing::Font(L"Roboto Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inp_proName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_proName->HideSelection = false;
			this->inp_proName->Location = System::Drawing::Point(46, 227);
			this->inp_proName->Multiline = true;
			this->inp_proName->Name = L"inp_proName";
			this->inp_proName->Size = System::Drawing::Size(350, 40);
			this->inp_proName->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label6->Location = System::Drawing::Point(429, 294);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(354, 26);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Stock";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label5->Location = System::Drawing::Point(429, 104);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(354, 26);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Category";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label3->Location = System::Drawing::Point(429, 198);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(354, 26);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Price";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label2->Location = System::Drawing::Point(44, 296);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(354, 26);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Description";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label1->Location = System::Drawing::Point(41, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(354, 26);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Barcode";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label4->Location = System::Drawing::Point(43, 200);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(354, 26);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Product Name";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Roboto Light", 14.25F));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(214, 391);
			this->button1->Margin = System::Windows::Forms::Padding(0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 45);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Add Product";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &inventory::button1_Click);
			// 
			// tab_control
			// 
			this->tab_control->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tab_control->Controls->Add(this->tab_addproduct);
			this->tab_control->Controls->Add(this->tab_dashboard);
			this->tab_control->Controls->Add(this->tab_editproduct);
			this->tab_control->Controls->Add(this->tab_accounts);
			this->tab_control->Controls->Add(this->tab_sales);
			this->tab_control->Location = System::Drawing::Point(67, -26);
			this->tab_control->Name = L"tab_control";
			this->tab_control->SelectedIndex = 1;
			this->tab_control->Size = System::Drawing::Size(1208, 586);
			this->tab_control->TabIndex = 10;
			// 
			// tab_editproduct
			// 
			this->tab_editproduct->BackColor = System::Drawing::Color::White;
			this->tab_editproduct->Controls->Add(this->pictureBox2);
			this->tab_editproduct->Controls->Add(this->label13);
			this->tab_editproduct->Controls->Add(this->inp_editCode);
			this->tab_editproduct->Controls->Add(this->inp_editDesc);
			this->tab_editproduct->Controls->Add(this->inp_editName);
			this->tab_editproduct->Controls->Add(this->cb_editCategory);
			this->tab_editproduct->Controls->Add(this->inp_editPrice);
			this->tab_editproduct->Controls->Add(this->inp_editStock);
			this->tab_editproduct->Controls->Add(this->btn_editBack);
			this->tab_editproduct->Controls->Add(this->inp_editUpdate);
			this->tab_editproduct->Controls->Add(this->label18);
			this->tab_editproduct->Controls->Add(this->label19);
			this->tab_editproduct->Controls->Add(this->label20);
			this->tab_editproduct->Controls->Add(this->label21);
			this->tab_editproduct->Controls->Add(this->label22);
			this->tab_editproduct->Controls->Add(this->label23);
			this->tab_editproduct->Location = System::Drawing::Point(4, 25);
			this->tab_editproduct->Name = L"tab_editproduct";
			this->tab_editproduct->Padding = System::Windows::Forms::Padding(3);
			this->tab_editproduct->Size = System::Drawing::Size(1200, 557);
			this->tab_editproduct->TabIndex = 2;
			this->tab_editproduct->Text = L"Edit Product";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(40, 23);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(50, 50);
			this->pictureBox2->TabIndex = 51;
			this->pictureBox2->TabStop = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23, System::Drawing::FontStyle::Bold));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label13->Location = System::Drawing::Point(96, 32);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(243, 35);
			this->label13->TabIndex = 50;
			this->label13->Text = L"Update Product";
			// 
			// inp_editCode
			// 
			this->inp_editCode->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_editCode->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_editCode->Font = (gcnew System::Drawing::Font(L"Roboto Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inp_editCode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_editCode->HideSelection = false;
			this->inp_editCode->Location = System::Drawing::Point(41, 119);
			this->inp_editCode->Multiline = true;
			this->inp_editCode->Name = L"inp_editCode";
			this->inp_editCode->Size = System::Drawing::Size(350, 40);
			this->inp_editCode->TabIndex = 49;
			// 
			// inp_editDesc
			// 
			this->inp_editDesc->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_editDesc->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_editDesc->Font = (gcnew System::Drawing::Font(L"Roboto Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inp_editDesc->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_editDesc->HideSelection = false;
			this->inp_editDesc->Location = System::Drawing::Point(42, 304);
			this->inp_editDesc->Multiline = true;
			this->inp_editDesc->Name = L"inp_editDesc";
			this->inp_editDesc->Size = System::Drawing::Size(350, 40);
			this->inp_editDesc->TabIndex = 48;
			// 
			// inp_editName
			// 
			this->inp_editName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_editName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_editName->Font = (gcnew System::Drawing::Font(L"Roboto Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inp_editName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_editName->HideSelection = false;
			this->inp_editName->Location = System::Drawing::Point(41, 205);
			this->inp_editName->Multiline = true;
			this->inp_editName->Name = L"inp_editName";
			this->inp_editName->Size = System::Drawing::Size(350, 40);
			this->inp_editName->TabIndex = 47;
			// 
			// cb_editCategory
			// 
			this->cb_editCategory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->cb_editCategory->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->cb_editCategory->FormattingEnabled = true;
			this->cb_editCategory->ItemHeight = 29;
			this->cb_editCategory->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"Alcohol", L"Fruit/veg/salads", L"Dairy",
					L"Chilled convenience", L"Bathroom toiletries", L"Household/cleaning", L"Fresh meat", L"Frozen prepared foods", L"Ambient bakery",
					L"Soft drinks", L"Confectionery", L"Fresh Poultry/game", L"Biscuits", L"Canned goods", L"Petcare", L"Savoury home cooking", L"Savouries",
					L"Hot beverages", L"Packet cereal", L"Healthcare", L"Others"
			});
			this->cb_editCategory->Location = System::Drawing::Point(426, 121);
			this->cb_editCategory->MaximumSize = System::Drawing::Size(350, 0);
			this->cb_editCategory->MinimumSize = System::Drawing::Size(350, 0);
			this->cb_editCategory->Name = L"cb_editCategory";
			this->cb_editCategory->Size = System::Drawing::Size(350, 37);
			this->cb_editCategory->TabIndex = 46;
			// 
			// inp_editPrice
			// 
			this->inp_editPrice->DecimalPlaces = 2;
			this->inp_editPrice->Font = (gcnew System::Drawing::Font(L"Roboto Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inp_editPrice->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_editPrice->Location = System::Drawing::Point(428, 207);
			this->inp_editPrice->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->inp_editPrice->Name = L"inp_editPrice";
			this->inp_editPrice->Size = System::Drawing::Size(350, 36);
			this->inp_editPrice->TabIndex = 45;
			// 
			// inp_editStock
			// 
			this->inp_editStock->Font = (gcnew System::Drawing::Font(L"Roboto Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inp_editStock->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_editStock->Location = System::Drawing::Point(428, 306);
			this->inp_editStock->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1410065408, 2, 0, 0 });
			this->inp_editStock->Name = L"inp_editStock";
			this->inp_editStock->Size = System::Drawing::Size(350, 36);
			this->inp_editStock->TabIndex = 44;
			// 
			// btn_editBack
			// 
			this->btn_editBack->BackColor = System::Drawing::Color::White;
			this->btn_editBack->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_editBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_editBack->Font = (gcnew System::Drawing::Font(L"Roboto Light", 14.25F));
			this->btn_editBack->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->btn_editBack->Location = System::Drawing::Point(40, 384);
			this->btn_editBack->Name = L"btn_editBack";
			this->btn_editBack->Size = System::Drawing::Size(171, 41);
			this->btn_editBack->TabIndex = 39;
			this->btn_editBack->Text = L"Back";
			this->btn_editBack->UseVisualStyleBackColor = false;
			this->btn_editBack->Click += gcnew System::EventHandler(this, &inventory::btn_editBack_Click);
			// 
			// inp_editUpdate
			// 
			this->inp_editUpdate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_editUpdate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->inp_editUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->inp_editUpdate->Font = (gcnew System::Drawing::Font(L"Roboto Light", 14.25F));
			this->inp_editUpdate->ForeColor = System::Drawing::Color::White;
			this->inp_editUpdate->Location = System::Drawing::Point(229, 381);
			this->inp_editUpdate->Name = L"inp_editUpdate";
			this->inp_editUpdate->Size = System::Drawing::Size(189, 50);
			this->inp_editUpdate->TabIndex = 38;
			this->inp_editUpdate->Text = L"Update Product";
			this->inp_editUpdate->UseVisualStyleBackColor = false;
			this->inp_editUpdate->Click += gcnew System::EventHandler(this, &inventory::inp_editUpdate_Click);
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label18->Location = System::Drawing::Point(426, 277);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(354, 26);
			this->label18->TabIndex = 35;
			this->label18->Text = L"Stock";
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label19->Location = System::Drawing::Point(426, 90);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(354, 26);
			this->label19->TabIndex = 32;
			this->label19->Text = L"Category";
			// 
			// label20
			// 
			this->label20->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label20->Location = System::Drawing::Point(426, 178);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(354, 26);
			this->label20->TabIndex = 31;
			this->label20->Text = L"Price";
			// 
			// label21
			// 
			this->label21->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label21->Location = System::Drawing::Point(41, 279);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(354, 26);
			this->label21->TabIndex = 30;
			this->label21->Text = L"Description";
			// 
			// label22
			// 
			this->label22->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label22->Location = System::Drawing::Point(38, 90);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(354, 26);
			this->label22->TabIndex = 28;
			this->label22->Text = L"Barcode";
			// 
			// label23
			// 
			this->label23->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label23->Location = System::Drawing::Point(40, 180);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(354, 26);
			this->label23->TabIndex = 26;
			this->label23->Text = L"Product Name";
			// 
			// tab_accounts
			// 
			this->tab_accounts->BackColor = System::Drawing::Color::White;
			this->tab_accounts->Controls->Add(this->panel1);
			this->tab_accounts->Controls->Add(this->panel3);
			this->tab_accounts->Controls->Add(this->panel4);
			this->tab_accounts->Controls->Add(this->tb_account);
			this->tab_accounts->Location = System::Drawing::Point(4, 25);
			this->tab_accounts->Name = L"tab_accounts";
			this->tab_accounts->Padding = System::Windows::Forms::Padding(3);
			this->tab_accounts->Size = System::Drawing::Size(1200, 557);
			this->tab_accounts->TabIndex = 3;
			this->tab_accounts->Text = L"Accounts";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->panel1->Controls->Add(this->btn_delAcc);
			this->panel1->Controls->Add(this->cb_accLoginas);
			this->panel1->Controls->Add(this->inp_accPass);
			this->panel1->Controls->Add(this->btn_uppAcc);
			this->panel1->Controls->Add(this->btn_addAcc);
			this->panel1->Controls->Add(this->btn_accMode);
			this->panel1->Controls->Add(this->inp_accUser);
			this->panel1->Controls->Add(this->label30);
			this->panel1->Controls->Add(this->label34);
			this->panel1->Controls->Add(this->label35);
			this->panel1->Controls->Add(this->label36);
			this->panel1->Controls->Add(this->label37);
			this->panel1->Controls->Add(this->label38);
			this->panel1->Location = System::Drawing::Point(1, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(394, 556);
			this->panel1->TabIndex = 72;
			// 
			// btn_delAcc
			// 
			this->btn_delAcc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btn_delAcc->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_delAcc->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->btn_delAcc->ForeColor = System::Drawing::Color::White;
			this->btn_delAcc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_delAcc.Image")));
			this->btn_delAcc->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_delAcc->Location = System::Drawing::Point(210, 376);
			this->btn_delAcc->Name = L"btn_delAcc";
			this->btn_delAcc->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->btn_delAcc->Size = System::Drawing::Size(138, 45);
			this->btn_delAcc->TabIndex = 78;
			this->btn_delAcc->Text = L"Delete ";
			this->btn_delAcc->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_delAcc->Visible = false;
			this->btn_delAcc->Click += gcnew System::EventHandler(this, &inventory::btn_delAcc_Click);
			// 
			// cb_accLoginas
			// 
			this->cb_accLoginas->BackColor = System::Drawing::Color::White;
			this->cb_accLoginas->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_accLoginas->Font = (gcnew System::Drawing::Font(L"Roboto Light", 18.25F));
			this->cb_accLoginas->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->cb_accLoginas->FormattingEnabled = true;
			this->cb_accLoginas->ItemHeight = 29;
			this->cb_accLoginas->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Inventory", L"Cashier" });
			this->cb_accLoginas->Location = System::Drawing::Point(32, 307);
			this->cb_accLoginas->Name = L"cb_accLoginas";
			this->cb_accLoginas->Size = System::Drawing::Size(316, 37);
			this->cb_accLoginas->TabIndex = 77;
			// 
			// inp_accPass
			// 
			this->inp_accPass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->inp_accPass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->inp_accPass->Font = (gcnew System::Drawing::Font(L"Roboto Light", 21));
			this->inp_accPass->ForeColor = System::Drawing::Color::White;
			this->inp_accPass->HideSelection = false;
			this->inp_accPass->Location = System::Drawing::Point(32, 201);
			this->inp_accPass->Multiline = true;
			this->inp_accPass->Name = L"inp_accPass";
			this->inp_accPass->PasswordChar = 'o';
			this->inp_accPass->Size = System::Drawing::Size(316, 36);
			this->inp_accPass->TabIndex = 76;
			this->inp_accPass->WordWrap = false;
			// 
			// btn_uppAcc
			// 
			this->btn_uppAcc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->btn_uppAcc->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_uppAcc->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->btn_uppAcc->ForeColor = System::Drawing::Color::White;
			this->btn_uppAcc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_uppAcc.Image")));
			this->btn_uppAcc->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_uppAcc->Location = System::Drawing::Point(28, 376);
			this->btn_uppAcc->Name = L"btn_uppAcc";
			this->btn_uppAcc->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->btn_uppAcc->Size = System::Drawing::Size(134, 45);
			this->btn_uppAcc->TabIndex = 75;
			this->btn_uppAcc->Text = L"Update";
			this->btn_uppAcc->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_uppAcc->Visible = false;
			this->btn_uppAcc->Click += gcnew System::EventHandler(this, &inventory::btn_uppAcc_Click);
			// 
			// btn_addAcc
			// 
			this->btn_addAcc->BackColor = System::Drawing::Color::White;
			this->btn_addAcc->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_addAcc->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->btn_addAcc->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->btn_addAcc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_addAcc.Image")));
			this->btn_addAcc->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_addAcc->Location = System::Drawing::Point(210, 376);
			this->btn_addAcc->Name = L"btn_addAcc";
			this->btn_addAcc->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->btn_addAcc->Size = System::Drawing::Size(138, 45);
			this->btn_addAcc->TabIndex = 74;
			this->btn_addAcc->Text = L"Add";
			this->btn_addAcc->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_addAcc->Click += gcnew System::EventHandler(this, &inventory::btn_addAcc_Click);
			// 
			// btn_accMode
			// 
			this->btn_accMode->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->btn_accMode->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_accMode->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_accMode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->btn_accMode->ForeColor = System::Drawing::Color::White;
			this->btn_accMode->Location = System::Drawing::Point(241, 26);
			this->btn_accMode->Name = L"btn_accMode";
			this->btn_accMode->Size = System::Drawing::Size(107, 35);
			this->btn_accMode->TabIndex = 58;
			this->btn_accMode->Text = L"Add Mode";
			this->btn_accMode->UseVisualStyleBackColor = false;
			this->btn_accMode->Click += gcnew System::EventHandler(this, &inventory::btn_accMode_Click);
			// 
			// inp_accUser
			// 
			this->inp_accUser->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->inp_accUser->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->inp_accUser->Font = (gcnew System::Drawing::Font(L"Roboto Light", 21));
			this->inp_accUser->ForeColor = System::Drawing::Color::White;
			this->inp_accUser->HideSelection = false;
			this->inp_accUser->Location = System::Drawing::Point(32, 110);
			this->inp_accUser->Multiline = true;
			this->inp_accUser->Name = L"inp_accUser";
			this->inp_accUser->Size = System::Drawing::Size(316, 36);
			this->inp_accUser->TabIndex = 72;
			this->inp_accUser->WordWrap = false;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Roboto", 23, System::Drawing::FontStyle::Bold));
			this->label30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label30->Location = System::Drawing::Point(25, 24);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(132, 37);
			this->label30->TabIndex = 71;
			this->label30->Text = L"Account";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::Color::Transparent;
			this->label34->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label34->ForeColor = System::Drawing::Color::White;
			this->label34->Location = System::Drawing::Point(28, 167);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(94, 23);
			this->label34->TabIndex = 54;
			this->label34->Text = L"Password";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::Transparent;
			this->label35->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label35->ForeColor = System::Drawing::Color::White;
			this->label35->Location = System::Drawing::Point(28, 80);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(95, 23);
			this->label35->TabIndex = 62;
			this->label35->Text = L"Username";
			// 
			// label36
			// 
			this->label36->BackColor = System::Drawing::Color::Transparent;
			this->label36->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label36->ForeColor = System::Drawing::Color::White;
			this->label36->Location = System::Drawing::Point(28, 183);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(280, 26);
			this->label36->TabIndex = 55;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::Transparent;
			this->label37->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label37->ForeColor = System::Drawing::Color::White;
			this->label37->Location = System::Drawing::Point(28, 272);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(84, 23);
			this->label37->TabIndex = 56;
			this->label37->Text = L"Login As";
			// 
			// label38
			// 
			this->label38->BackColor = System::Drawing::Color::Transparent;
			this->label38->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label38->ForeColor = System::Drawing::Color::White;
			this->label38->Location = System::Drawing::Point(28, 237);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(266, 26);
			this->label38->TabIndex = 57;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(364, 38);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(43, 455);
			this->panel3->TabIndex = 75;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->panel4->Controls->Add(this->label16);
			this->panel4->Controls->Add(this->label17);
			this->panel4->Location = System::Drawing::Point(407, 25);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(501, 36);
			this->panel4->TabIndex = 74;
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(2, 7);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(148, 26);
			this->label16->TabIndex = 63;
			this->label16->Text = L"Username";
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(251, 6);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(117, 26);
			this->label17->TabIndex = 62;
			this->label17->Text = L"Staff Role";
			// 
			// tb_account
			// 
			this->tb_account->BackgroundColor = System::Drawing::Color::White;
			this->tb_account->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_account->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->tb_account->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Roboto Light", 10));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->Padding = System::Windows::Forms::Padding(1);
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tb_account->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->tb_account->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tb_account->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6
			});
			this->tb_account->Cursor = System::Windows::Forms::Cursors::Hand;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle6->Padding = System::Windows::Forms::Padding(0, 2, 2, 2);
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->tb_account->DefaultCellStyle = dataGridViewCellStyle6;
			this->tb_account->Enabled = false;
			this->tb_account->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->tb_account->Location = System::Drawing::Point(366, 38);
			this->tb_account->Name = L"tb_account";
			this->tb_account->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tb_account->RowHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->tb_account->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle8->Padding = System::Windows::Forms::Padding(2);
			this->tb_account->RowsDefaultCellStyle = dataGridViewCellStyle8;
			this->tb_account->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->tb_account->Size = System::Drawing::Size(542, 430);
			this->tb_account->TabIndex = 73;
			this->tb_account->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &inventory::tb_account_CellClick);
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->dataGridViewTextBoxColumn5->FillWeight = 15;
			this->dataGridViewTextBoxColumn5->HeaderText = L"Username";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Width = 250;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Staff Role";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Width = 250;
			// 
			// tab_sales
			// 
			this->tab_sales->BackColor = System::Drawing::Color::White;
			this->tab_sales->Controls->Add(this->panel14);
			this->tab_sales->Controls->Add(this->panel13);
			this->tab_sales->Controls->Add(this->panel12);
			this->tab_sales->Controls->Add(this->panel11);
			this->tab_sales->Controls->Add(this->panel8);
			this->tab_sales->Controls->Add(this->panel9);
			this->tab_sales->Controls->Add(this->panel10);
			this->tab_sales->Controls->Add(this->tb_sales);
			this->tab_sales->Location = System::Drawing::Point(4, 25);
			this->tab_sales->Name = L"tab_sales";
			this->tab_sales->Padding = System::Windows::Forms::Padding(3);
			this->tab_sales->Size = System::Drawing::Size(1200, 557);
			this->tab_sales->TabIndex = 4;
			this->tab_sales->Text = L"tabPage1";
			this->tab_sales->Click += gcnew System::EventHandler(this, &inventory::tab_sales_Click);
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->panel14->Controls->Add(this->lbl_saleSold);
			this->panel14->Controls->Add(this->label65);
			this->panel14->Location = System::Drawing::Point(1001, 24);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(153, 100);
			this->panel14->TabIndex = 82;
			// 
			// lbl_saleSold
			// 
			this->lbl_saleSold->BackColor = System::Drawing::Color::Transparent;
			this->lbl_saleSold->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F));
			this->lbl_saleSold->ForeColor = System::Drawing::Color::White;
			this->lbl_saleSold->Location = System::Drawing::Point(9, 38);
			this->lbl_saleSold->Name = L"lbl_saleSold";
			this->lbl_saleSold->Size = System::Drawing::Size(121, 42);
			this->lbl_saleSold->TabIndex = 77;
			this->lbl_saleSold->Text = L"1200";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->BackColor = System::Drawing::Color::Transparent;
			this->label65->Font = (gcnew System::Drawing::Font(L"Roboto Light", 14));
			this->label65->ForeColor = System::Drawing::Color::White;
			this->label65->Location = System::Drawing::Point(12, 11);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(118, 23);
			this->label65->TabIndex = 76;
			this->label65->Text = L"Product Sold";
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel13->Controls->Add(this->lbl_salesTrans);
			this->panel13->Controls->Add(this->label63);
			this->panel13->Location = System::Drawing::Point(853, 24);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(138, 100);
			this->panel13->TabIndex = 81;
			// 
			// lbl_salesTrans
			// 
			this->lbl_salesTrans->BackColor = System::Drawing::Color::Transparent;
			this->lbl_salesTrans->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F));
			this->lbl_salesTrans->ForeColor = System::Drawing::Color::White;
			this->lbl_salesTrans->Location = System::Drawing::Point(9, 38);
			this->lbl_salesTrans->Name = L"lbl_salesTrans";
			this->lbl_salesTrans->Size = System::Drawing::Size(120, 42);
			this->lbl_salesTrans->TabIndex = 77;
			this->lbl_salesTrans->Text = L"500";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->BackColor = System::Drawing::Color::Transparent;
			this->label63->Font = (gcnew System::Drawing::Font(L"Roboto Light", 14));
			this->label63->ForeColor = System::Drawing::Color::White;
			this->label63->Location = System::Drawing::Point(12, 11);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(117, 23);
			this->label63->TabIndex = 76;
			this->label63->Text = L"Transactions";
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(193)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->panel12->Controls->Add(this->lbl_salesMon);
			this->panel12->Controls->Add(this->label56);
			this->panel12->Location = System::Drawing::Point(612, 24);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(232, 100);
			this->panel12->TabIndex = 80;
			// 
			// lbl_salesMon
			// 
			this->lbl_salesMon->BackColor = System::Drawing::Color::Transparent;
			this->lbl_salesMon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F));
			this->lbl_salesMon->ForeColor = System::Drawing::Color::White;
			this->lbl_salesMon->Location = System::Drawing::Point(9, 38);
			this->lbl_salesMon->Name = L"lbl_salesMon";
			this->lbl_salesMon->Size = System::Drawing::Size(207, 42);
			this->lbl_salesMon->TabIndex = 77;
			this->lbl_salesMon->Text = L"1,000,501.50";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->BackColor = System::Drawing::Color::Transparent;
			this->label56->Font = (gcnew System::Drawing::Font(L"Roboto Light", 14));
			this->label56->ForeColor = System::Drawing::Color::White;
			this->label56->Location = System::Drawing::Point(12, 11);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(116, 23);
			this->label56->TabIndex = 76;
			this->label56->Text = L"Monthly Sale";
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->panel11->Controls->Add(this->lbl_overSale);
			this->panel11->Controls->Add(this->label24);
			this->panel11->Location = System::Drawing::Point(367, 24);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(235, 100);
			this->panel11->TabIndex = 79;
			// 
			// lbl_overSale
			// 
			this->lbl_overSale->BackColor = System::Drawing::Color::Transparent;
			this->lbl_overSale->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F));
			this->lbl_overSale->ForeColor = System::Drawing::Color::White;
			this->lbl_overSale->Location = System::Drawing::Point(9, 38);
			this->lbl_overSale->Name = L"lbl_overSale";
			this->lbl_overSale->Size = System::Drawing::Size(221, 42);
			this->lbl_overSale->TabIndex = 77;
			this->lbl_overSale->Text = L"1,000,501.50";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Font = (gcnew System::Drawing::Font(L"Roboto Light", 14));
			this->label24->ForeColor = System::Drawing::Color::White;
			this->label24->Location = System::Drawing::Point(12, 11);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(106, 23);
			this->label24->TabIndex = 76;
			this->label24->Text = L"Overall Sale";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->panel8->Controls->Add(this->label15);
			this->panel8->Controls->Add(this->label25);
			this->panel8->Controls->Add(this->lbl_salesCode);
			this->panel8->Controls->Add(this->label27);
			this->panel8->Controls->Add(this->lbl_salesQuan);
			this->panel8->Controls->Add(this->label32);
			this->panel8->Controls->Add(this->label33);
			this->panel8->Controls->Add(this->label40);
			this->panel8->Controls->Add(this->lbl_salesCust);
			this->panel8->Controls->Add(this->label47);
			this->panel8->Controls->Add(this->lbl_salesPrice);
			this->panel8->Controls->Add(this->label52);
			this->panel8->Controls->Add(this->lbl_salesDate);
			this->panel8->Location = System::Drawing::Point(0, 0);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(333, 556);
			this->panel8->TabIndex = 75;
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::Color::White;
			this->label15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label15->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label15.Image")));
			this->label15->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label15->Location = System::Drawing::Point(194, 479);
			this->label15->Name = L"label15";
			this->label15->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->label15->Size = System::Drawing::Size(114, 45);
			this->label15->TabIndex = 75;
			this->label15->Text = L"View";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label25
			// 
			this->label25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->label25->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label25.Image")));
			this->label25->Location = System::Drawing::Point(267, 110);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(41, 36);
			this->label25->TabIndex = 73;
			// 
			// lbl_salesCode
			// 
			this->lbl_salesCode->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->lbl_salesCode->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lbl_salesCode->Font = (gcnew System::Drawing::Font(L"Roboto Light", 21));
			this->lbl_salesCode->ForeColor = System::Drawing::Color::White;
			this->lbl_salesCode->HideSelection = false;
			this->lbl_salesCode->Location = System::Drawing::Point(32, 110);
			this->lbl_salesCode->Multiline = true;
			this->lbl_salesCode->Name = L"lbl_salesCode";
			this->lbl_salesCode->Size = System::Drawing::Size(276, 36);
			this->lbl_salesCode->TabIndex = 72;
			this->lbl_salesCode->WordWrap = false;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Roboto", 23, System::Drawing::FontStyle::Bold));
			this->label27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label27->Location = System::Drawing::Point(25, 24);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(196, 37);
			this->label27->TabIndex = 71;
			this->label27->Text = L"Sales Report";
			// 
			// lbl_salesQuan
			// 
			this->lbl_salesQuan->BackColor = System::Drawing::Color::Transparent;
			this->lbl_salesQuan->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->lbl_salesQuan->ForeColor = System::Drawing::Color::White;
			this->lbl_salesQuan->Location = System::Drawing::Point(28, 298);
			this->lbl_salesQuan->Name = L"lbl_salesQuan";
			this->lbl_salesQuan->Size = System::Drawing::Size(280, 26);
			this->lbl_salesQuan->TabIndex = 65;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::Transparent;
			this->label32->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label32->ForeColor = System::Drawing::Color::White;
			this->label32->Location = System::Drawing::Point(28, 271);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(126, 23);
			this->label32->TabIndex = 64;
			this->label32->Text = L"Total Quantity";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::Transparent;
			this->label33->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label33->ForeColor = System::Drawing::Color::White;
			this->label33->Location = System::Drawing::Point(28, 157);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(148, 23);
			this->label33->TabIndex = 54;
			this->label33->Text = L"Customer Name";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::Color::Transparent;
			this->label40->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label40->ForeColor = System::Drawing::Color::White;
			this->label40->Location = System::Drawing::Point(28, 80);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(157, 23);
			this->label40->TabIndex = 62;
			this->label40->Text = L"Transaction Code";
			// 
			// lbl_salesCust
			// 
			this->lbl_salesCust->BackColor = System::Drawing::Color::Transparent;
			this->lbl_salesCust->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->lbl_salesCust->ForeColor = System::Drawing::Color::White;
			this->lbl_salesCust->Location = System::Drawing::Point(28, 183);
			this->lbl_salesCust->Name = L"lbl_salesCust";
			this->lbl_salesCust->Size = System::Drawing::Size(280, 26);
			this->lbl_salesCust->TabIndex = 55;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->BackColor = System::Drawing::Color::Transparent;
			this->label47->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label47->ForeColor = System::Drawing::Color::White;
			this->label47->Location = System::Drawing::Point(28, 212);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(100, 23);
			this->label47->TabIndex = 56;
			this->label47->Text = L"Total Price";
			// 
			// lbl_salesPrice
			// 
			this->lbl_salesPrice->BackColor = System::Drawing::Color::Transparent;
			this->lbl_salesPrice->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->lbl_salesPrice->ForeColor = System::Drawing::Color::White;
			this->lbl_salesPrice->Location = System::Drawing::Point(28, 237);
			this->lbl_salesPrice->Name = L"lbl_salesPrice";
			this->lbl_salesPrice->Size = System::Drawing::Size(266, 26);
			this->lbl_salesPrice->TabIndex = 57;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->BackColor = System::Drawing::Color::Transparent;
			this->label52->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label52->ForeColor = System::Drawing::Color::White;
			this->label52->Location = System::Drawing::Point(28, 334);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(48, 23);
			this->label52->TabIndex = 58;
			this->label52->Text = L"Date";
			// 
			// lbl_salesDate
			// 
			this->lbl_salesDate->BackColor = System::Drawing::Color::Transparent;
			this->lbl_salesDate->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->lbl_salesDate->ForeColor = System::Drawing::Color::White;
			this->lbl_salesDate->Location = System::Drawing::Point(28, 361);
			this->lbl_salesDate->Name = L"lbl_salesDate";
			this->lbl_salesDate->Size = System::Drawing::Size(274, 26);
			this->lbl_salesDate->TabIndex = 59;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::White;
			this->panel9->Location = System::Drawing::Point(324, 61);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(43, 531);
			this->panel9->TabIndex = 78;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->panel10->Controls->Add(this->label58);
			this->panel10->Controls->Add(this->label59);
			this->panel10->Controls->Add(this->label60);
			this->panel10->Controls->Add(this->label61);
			this->panel10->Controls->Add(this->label62);
			this->panel10->Location = System::Drawing::Point(367, 142);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(787, 36);
			this->panel10->TabIndex = 77;
			// 
			// label58
			// 
			this->label58->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label58->ForeColor = System::Drawing::Color::White;
			this->label58->Location = System::Drawing::Point(513, 10);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(123, 26);
			this->label58->TabIndex = 64;
			this->label58->Text = L"Total Quantity";
			// 
			// label59
			// 
			this->label59->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label59->ForeColor = System::Drawing::Color::White;
			this->label59->Location = System::Drawing::Point(3, 10);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(151, 26);
			this->label59->TabIndex = 63;
			this->label59->Text = L"Transaction Code";
			// 
			// label60
			// 
			this->label60->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label60->ForeColor = System::Drawing::Color::White;
			this->label60->Location = System::Drawing::Point(658, 10);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(117, 26);
			this->label60->TabIndex = 62;
			this->label60->Text = L"Date";
			// 
			// label61
			// 
			this->label61->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label61->ForeColor = System::Drawing::Color::White;
			this->label61->Location = System::Drawing::Point(354, 10);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(123, 26);
			this->label61->TabIndex = 61;
			this->label61->Text = L"Total Price";
			// 
			// label62
			// 
			this->label62->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label62->ForeColor = System::Drawing::Color::White;
			this->label62->Location = System::Drawing::Point(150, 10);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(151, 26);
			this->label62->TabIndex = 60;
			this->label62->Text = L"Customer Name";
			// 
			// tb_sales
			// 
			this->tb_sales->BackgroundColor = System::Drawing::Color::White;
			this->tb_sales->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_sales->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->tb_sales->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle9->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Roboto Light", 10));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle9->Padding = System::Windows::Forms::Padding(1);
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tb_sales->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->tb_sales->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tb_sales->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn7,
					this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11
			});
			this->tb_sales->Cursor = System::Windows::Forms::Cursors::Hand;
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle10->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			dataGridViewCellStyle10->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle10->Padding = System::Windows::Forms::Padding(0, 2, 2, 2);
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->tb_sales->DefaultCellStyle = dataGridViewCellStyle10;
			this->tb_sales->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->tb_sales->Location = System::Drawing::Point(324, 157);
			this->tb_sales->Name = L"tb_sales";
			this->tb_sales->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle11->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle11->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tb_sales->RowHeadersDefaultCellStyle = dataGridViewCellStyle11;
			this->tb_sales->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle12->Padding = System::Windows::Forms::Padding(2);
			this->tb_sales->RowsDefaultCellStyle = dataGridViewCellStyle12;
			this->tb_sales->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->tb_sales->Size = System::Drawing::Size(830, 350);
			this->tb_sales->TabIndex = 76;
			this->tb_sales->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &inventory::tb_salesCellClick);
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->dataGridViewTextBoxColumn7->FillWeight = 15;
			this->dataGridViewTextBoxColumn7->HeaderText = L"Transaction Code";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->Width = 150;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Customer Name";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			this->dataGridViewTextBoxColumn8->Width = 200;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Total Price";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->Width = 160;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"Total Quantity";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->Width = 150;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"Date";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->ReadOnly = true;
			this->dataGridViewTextBoxColumn11->Width = 120;
			// 
			// pnl_navBar
			// 
			this->pnl_navBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->pnl_navBar->Controls->Add(this->lbl_indicator);
			this->pnl_navBar->Controls->Add(this->btn_sales);
			this->pnl_navBar->Controls->Add(this->btn_account);
			this->pnl_navBar->Controls->Add(this->panel2);
			this->pnl_navBar->Controls->Add(this->btn_dashboard);
			this->pnl_navBar->Controls->Add(this->btn_addproduct);
			this->pnl_navBar->Controls->Add(this->btn_logout);
			this->pnl_navBar->Controls->Add(this->label26);
			this->pnl_navBar->Location = System::Drawing::Point(0, 0);
			this->pnl_navBar->Name = L"pnl_navBar";
			this->pnl_navBar->Size = System::Drawing::Size(72, 556);
			this->pnl_navBar->TabIndex = 28;
			// 
			// lbl_indicator
			// 
			this->lbl_indicator->BackColor = System::Drawing::Color::White;
			this->lbl_indicator->Font = (gcnew System::Drawing::Font(L"Roboto", 1));
			this->lbl_indicator->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->lbl_indicator->Location = System::Drawing::Point(0, 130);
			this->lbl_indicator->Name = L"lbl_indicator";
			this->lbl_indicator->Size = System::Drawing::Size(5, 56);
			this->lbl_indicator->TabIndex = 65;
			// 
			// btn_sales
			// 
			this->btn_sales->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_sales->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_sales.Image")));
			this->btn_sales->Location = System::Drawing::Point(3, 260);
			this->btn_sales->Name = L"btn_sales";
			this->btn_sales->Size = System::Drawing::Size(66, 56);
			this->btn_sales->TabIndex = 67;
			this->btn_sales->Click += gcnew System::EventHandler(this, &inventory::btn_sales_Click);
			// 
			// btn_account
			// 
			this->btn_account->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_account->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_account.Image")));
			this->btn_account->Location = System::Drawing::Point(3, 322);
			this->btn_account->Name = L"btn_account";
			this->btn_account->Size = System::Drawing::Size(66, 56);
			this->btn_account->TabIndex = 66;
			this->btn_account->Click += gcnew System::EventHandler(this, &inventory::btn_account_Click);
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(71, 137);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 100);
			this->panel2->TabIndex = 58;
			// 
			// btn_dashboard
			// 
			this->btn_dashboard->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_dashboard->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_dashboard.Image")));
			this->btn_dashboard->Location = System::Drawing::Point(3, 130);
			this->btn_dashboard->Name = L"btn_dashboard";
			this->btn_dashboard->Size = System::Drawing::Size(66, 56);
			this->btn_dashboard->TabIndex = 30;
			this->btn_dashboard->Click += gcnew System::EventHandler(this, &inventory::btn_dashboard_Click_1);
			// 
			// btn_addproduct
			// 
			this->btn_addproduct->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_addproduct->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_addproduct.Image")));
			this->btn_addproduct->Location = System::Drawing::Point(3, 198);
			this->btn_addproduct->Name = L"btn_addproduct";
			this->btn_addproduct->Size = System::Drawing::Size(66, 56);
			this->btn_addproduct->TabIndex = 29;
			this->btn_addproduct->Click += gcnew System::EventHandler(this, &inventory::btn_addproduct_Click_1);
			// 
			// btn_logout
			// 
			this->btn_logout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_logout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_logout.Image")));
			this->btn_logout->Location = System::Drawing::Point(0, 465);
			this->btn_logout->Name = L"btn_logout";
			this->btn_logout->Size = System::Drawing::Size(69, 58);
			this->btn_logout->TabIndex = 28;
			this->btn_logout->Click += gcnew System::EventHandler(this, &inventory::btn_logout_Click);
			// 
			// label26
			// 
			this->label26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label26.Image")));
			this->label26->Location = System::Drawing::Point(3, 11);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(66, 50);
			this->label26->TabIndex = 27;
			// 
			// inventory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1262, 552);
			this->Controls->Add(this->pnl_navBar);
			this->Controls->Add(this->tab_control);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"inventory";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"inventory";
			this->tab_dashboard->ResumeLayout(false);
			this->tab_dashboard->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table_prevProduct))->EndInit();
			this->tab_addproduct->ResumeLayout(false);
			this->tab_addproduct->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inp_proPrice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inp_proStock))->EndInit();
			this->tab_control->ResumeLayout(false);
			this->tab_editproduct->ResumeLayout(false);
			this->tab_editproduct->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inp_editPrice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inp_editStock))->EndInit();
			this->tab_accounts->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tb_account))->EndInit();
			this->tab_sales->ResumeLayout(false);
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel10->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tb_sales))->EndInit();
			this->pnl_navBar->ResumeLayout(false);
			this->ResumeLayout(false);

		}

#pragma endregion
		public: value struct Product {
			String^ barcode;
			String^ name;
			String^ description;
			String^ category;
			int stock;
			float price;
		};
		int productCount;

		array<Product>^ pro = gcnew array< Product >(1000);
		array<Product>^ proTable = gcnew array<Product>(1000);

		public: void loadProductFromFile() {
			String^ fileName = "product_tb.txt";
			try
			{
				StreamReader^ din = File::OpenText(fileName);

				productCount = Int32::Parse(din->ReadLine());
				if (productCount > 0) {
					for (int i = 0; i < productCount; i++) {
						pro[i].barcode = din->ReadLine();
						pro[i].name = din->ReadLine();
						pro[i].description = din->ReadLine();
						pro[i].category = din->ReadLine();
						pro[i].stock = Int32::Parse(din->ReadLine());
						pro[i].price = float::Parse(din->ReadLine());
					}
				}
				else {
					MessageBox::Show("The database is empty");
				}
				
				din->Close();
				
			}
			catch (const std::exception&)
			{

			}
		}
		
		public: void loadTable(String^ query) {
			int i;
			String^ search = inp_proSearch->Text;
			String^ searchCb = cb_searchCategory->Text;
			if (String::Compare(query, "default") == 0) {
				proTable = pro;
			}
			else if (String::Compare(query, "Barcode") == 0) {
				for (i = 0; i < productCount; i++) {
					
					if (String::Compare(pro[i].barcode, search) == 0) {
						proTable[i] = pro[i];
					}

				}
			}
			else if (String::Compare(query, "Product Name") == 0) {
				for (i = 0; i < productCount; i++) {

					if (String::Compare(pro[i].name, search) == 0) {
						proTable[i] = pro[i];
						
					}
				}
			}
			else if (String::Compare(query, "Category") == 0) {
				for (i = 0; i < productCount; i++) {

					if (String::Compare(pro[i].name, searchCb) == 0) {
						proTable[proTable->Length] = pro[i];
					}
				}
			}
			Double overPrice = 0.0;
			int overStocks = 0, overCrit = 0;
			table_prevProduct->Rows->Clear();
			table_prevProduct->Refresh();
			loadProductFromFile();
			inp_prevStock->Text = productCount.ToString();
			for (i = 0; i < productCount; i++) {
				int index = table_prevProduct->Rows->Add();
				table_prevProduct->Rows[index]->Cells[0]->Value = proTable[i].barcode;
				table_prevProduct->Rows[index]->Cells[1]->Value = proTable[i].name;
				table_prevProduct->Rows[index]->Cells[2]->Value = proTable[i].description;
				table_prevProduct->Rows[index]->Cells[3]->Value = proTable[i].category;
				table_prevProduct->Rows[index]->Cells[4]->Value = proTable[i].stock;
				table_prevProduct->Rows[index]->Cells[5]->Value = proTable[i].price;
				overPrice += pro[i].price;
				overStocks += pro[i].stock;
				
				if (pro[i].stock <= 5) {
					overCrit++;
				}
			}
			lbl_overPrice->Text = overPrice + "";
			lbl_overStocks->Text = overStocks + "";
			lbl_proCounts->Text = productCount + "";
			lbl_overCrit->Text = overCrit + "";
			table_prevProduct->ClearSelection();
		}

		public: void saveToDatabase() {
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

		public: value struct searchProduct {
			String^ barcode;
			String^ name;
			String^ description;
			String^ category;
			int stock;
			Double price;
			int idx;
		};
		
		public: searchProduct *proSearch(String^ bcode) {
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
					 return searched;
					 free(searched);
				 }

			 }

			
		}

		public: bool checkBarcode(String^ barcode) {
			bool toReturn;
			for (int i = 0; i < productCount; i++) {
				MessageBox::Show(productCount+" "+barcode+" "+ pro[i].barcode);
				if (String::Compare(pro[i].barcode, barcode) == 0) { toReturn =  true;  break; }
				else { toReturn = false; }
			}
			return toReturn;
		}

		//Add product to database
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			/*Double priceVat = double::Parse(inp_proPrice->Text);
			priceVat = priceVat * .12;
			priceVat = priceVat + double::Parse(inp_proPrice->Text);*/
			if (validateFields("add_emptyFields")) {
				MessageBox::Show("Empty fields, Adding Product is not applied");
			}
			else {
				if (!checkBarcode(inp_proCode->Text)) {
					pro[productCount].barcode = inp_proCode->Text;
					pro[productCount].name = inp_proName->Text;
					pro[productCount].description = inp_proDesc->Text;
					pro[productCount].category = cb_proCategory->Text;
					pro[productCount].price = double::Parse(inp_proPrice->Text);
					pro[productCount].stock = Int32::Parse(inp_proStock->Text);
					clearfields();
					MessageBox::Show("The product " + pro[productCount].name + " with barcode of " + pro[productCount].barcode + " added");
					productCount++;
					saveToDatabase();
					loadTable("default");
					tab_control->SelectTab(1);
				}
				else {
					MessageBox::Show("The product that you want to add is already exisiting.");
				}
				
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
						searchProduct *product, *toUpdate = (value struct searchProduct*) malloc(sizeof(value struct searchProduct));

						toUpdate->barcode = inp_editCode->Text;
						toUpdate->name = inp_editName->Text;
						toUpdate->description = inp_editDesc->Text;
						toUpdate->category = cb_editCategory->Text;
						toUpdate->stock = Int32::Parse(inp_editStock->Text);
						toUpdate->price = double::Parse(inp_editPrice->Text);
						
						product = proSearch(toUpdate->barcode);

						pro[product->idx].barcode = toUpdate->barcode;
						pro[product->idx].name = toUpdate->name;
						pro[product->idx].description = toUpdate->description;
						pro[product->idx].category = toUpdate->category;
						pro[product->idx].stock = toUpdate->stock;
						pro[product->idx].price = toUpdate->price;
						

						MessageBox::Show("The product " + pro[product->idx].name + " with barcode of " + pro[product->idx].barcode + " updated");
						saveToDatabase();
						loadTable("default");
						tab_control->SelectTab(1);
						free(product);
						free(toUpdate);
					}
					catch (Exception^ ex)
					{
						MessageBox::Show("Something wrong in updating the product: " + ex);
					}

				}
			}
			

		}
		
		//Delete Product to the Database
		private: System::Void btn_prevDelete_Click(System::Object^  sender, System::EventArgs^  e) {
			String^ barcode = inp_editCode->Text;
			if (MessageBox::Show("Are you sure to delete " + barcode + " ?", "Inventory Management System",
				MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

				searchProduct *product = (value struct searchProduct*) malloc(sizeof(value struct searchProduct));
				product = proSearch(barcode);

				for (int i = product->idx; i < productCount; i++) {

					pro[i].barcode = pro[i + 1].barcode;
					pro[i].name = pro[i + 1].name;
					pro[i].description = pro[i + 1].description;
					pro[i].category = pro[i + 1].category;
					pro[i].stock = pro[i + 1].stock;
					pro[i].price = pro[i + 1].price;
				}

				productCount--;
				saveToDatabase();
				loadTable("default");
				clearfields();
				free(product);
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

		//Field validation for product
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

		//By clicking table the data from database fetch and store into fields
		private: System::Void table_prevProduct_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			
			String^ search = table_prevProduct->Rows[e->RowIndex]->Cells[0]->Value->ToString();
			try
			{
				searchProduct *product = (value struct searchProduct*) malloc(sizeof(value struct searchProduct));
				product = proSearch(search);
				if (!product==NULL) {
					checkCode = product->barcode;
					checkName = product->name;
					checkDesc = product->description;
					checkPrice = product->price.ToString();
					checkStock = product->stock.ToString();
					checkCategory = product->category;
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
					cb_editCategory->Text = checkCategory;
					inp_editPrice->Text = checkPrice;
					inp_editStock->Text = checkStock;
					free(product);
					
				}
				else {
					MessageBox::Show("Cannot find what you want to search");
				}

			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Something wrong in searching the product: " + ex);
			}
			
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
		private: System::Void cb_category_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			if (String::Compare(cb_category->Text, "Category")==0) {
				cb_searchCategory->Visible = true;
				inp_proSearch->Visible = false;
			}
			else if (String::Compare(cb_category->Text, "Default") == 0) {
				loadTable("default");
			}
			else {
				inp_proSearch->Visible = true;
				cb_searchCategory->Visible = false;
			}
				
		}
		private: System::Void cb_searchCategory_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			loadTable(cb_searchCategory->Text);
		}
		
		// ACCOUNT SECTION ===================================================================

		//For account array
		public: value struct Account {
			String^ username;
			String^ password;
			String^ loginAs;
		};
		array<Account>^ acc = gcnew array<Account>(1000);

		int accountCount;

		void loadAccountFromFile() {
			String^ fileName = "account_tb.txt";
			try
			{
				StreamReader^ din = File::OpenText(fileName);

				accountCount = Int32::Parse(din->ReadLine());
				if (accountCount > 0) {
					for (int i = 0; i < accountCount; i++) {
						acc[i].username = din->ReadLine();
						acc[i].password = din->ReadLine();
						acc[i].loginAs = din->ReadLine();
					}
				}
				else {
					MessageBox::Show("The account  database is empty");
				}

				din->Close();

			}
			catch (const std::exception&)
			{

			}
		}

		void loadAccTable(String^ query) {
			int i;
			tb_account->Rows->Clear();
			tb_account->Refresh();
			loadAccountFromFile();
			inp_accPass->Text = accountCount.ToString();
			for (i = 0; i < accountCount; i++) {
				int index = tb_account->Rows->Add();
				tb_account->Rows[index]->Cells[0]->Value = acc[i].username;
				tb_account->Rows[index]->Cells[1]->Value = acc[i].loginAs;
			}

			if (tb_account->RowCount < 0) {
				MessageBox::Show("No Accounts found");
			}

		}

		void saveAccToDatabase() {
			String^ fileName = "account_tb.txt";

			StreamWriter^ sw = gcnew StreamWriter(fileName);
			sw->WriteLine(accountCount);
			for (int i = 0; i < accountCount; i++) {
				sw->WriteLine(acc[i].username);
				sw->WriteLine(acc[i].password);
				sw->WriteLine(acc[i].loginAs);
			}

			sw->Close();

		}

		public: bool checkUsername(String^ username) {
			bool toReturn;
			for (int i = 0; i < accountCount; i++) {
				MessageBox::Show(accountCount + " " + username + " " + acc[i].username);
				if (String::Compare(acc[i].username, username) == 0) { toReturn = true;  break; }
				else { toReturn = false; }
			}
			return toReturn;
		}

		public: value struct searchAccount {
			String^ username;
			String^ password;
			String^ loginAs;
			int idx;
		};
		
		//Search Account on database
		public: searchAccount *accSearch(String^ username) {
			searchAccount *searched = (value struct searchAccount*) malloc(sizeof(value struct searchAccount));

			for (int i = 0; i < accountCount; i++) {

				if (String::Compare(acc[i].username, username) == 0) {
					searched->username = acc[i].username;
					searched->password = acc[i].password;
					searched->loginAs = acc[i].loginAs;
					searched->idx = i;
					return searched;
					free(searched);
				}

			}
		}

		//Add Account
		private: System::Void btn_addAcc_Click(System::Object^  sender, System::EventArgs^  e) {
		
			if (validateFields("add_accEmptyFields")) {
				MessageBox::Show("Some fields is empty, Adding Account is not applied");
			}
			else {
				if (!checkUsername(inp_accUser->Text)) {
					String^ username = inp_accUser->Text;
					String^ password = inp_accPass->Text;
					String^ loginAs = cb_accLoginas->Text;

					acc[accountCount].username = username;
					acc[accountCount].password = password;
					acc[accountCount].loginAs = loginAs;
					clearfields();
					accountCount++;
					MessageBox::Show("The account " + acc[accountCount].username + " added");
					saveAccToDatabase();
					loadAccTable("default");
				}
				else {
					MessageBox::Show("The account that you want to add is already exisiting.");
				}
			}
		}
		
		//Update Account 
		private: System::Void btn_uppAcc_Click(System::Object^  sender, System::EventArgs^  e) {
			if (validateFields("add_accEmptyFields")) {
				MessageBox::Show("Some fields is empty, Updating Account is not applied");
			}
			else {

				if (!validateFields("update_sameAccFields")) {
					
					searchAccount *account, *toUpdate = (value struct searchAccount*) malloc(sizeof(value struct searchAccount));

					toUpdate->username = inp_accUser->Text;
					toUpdate->password = inp_accPass->Text;
					toUpdate->loginAs = cb_accLoginas->Text;

					account = accSearch(toUpdate->username);

					acc[account->idx].username = toUpdate->username;
					acc[account->idx].password = toUpdate->password;
					acc[account->idx].loginAs = toUpdate->loginAs;


					MessageBox::Show("The product " + acc[account->idx].username + " updated");
					saveAccToDatabase();
					loadAccTable("default");
					free(account);
					free(toUpdate);
				}
				else {
					MessageBox::Show("Nothing to update here");
				}
				

			}
		
		}

		//Delete Account
		private: System::Void btn_delAcc_Click(System::Object^  sender, System::EventArgs^  e) {
			if (validateFields("add_accEmptyFields")) {
				MessageBox::Show("Some fields is empty, Deleting Account is not applied");
			}
			else {
				String^ username = inp_accUser->Text;
				if (MessageBox::Show("Are you sure to delete " + username + " ?", "Inventory Management System",
					MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
					
					searchAccount *account = (value struct searchAccount*) malloc(sizeof(value struct searchAccount));
					account = accSearch(username);

					for (int i = account->idx; i < accountCount; i++) {

						acc[i].username = acc[i + 1].username;
						acc[i].password = acc[i + 1].password;
						acc[i].loginAs = acc[i + 1].loginAs;
					}

					accountCount--;
					saveAccToDatabase();
					loadAccTable("default");
					clearfields();
					free(account);

				}
				else {
					MessageBox::Show("Deleting Account Aborted");
				}
				
			}
		}
		
		//Load field by click
		String^ Username; String^ Pass; String^ LoginAs;
		private: System::Void tb_account_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			String^ search = tb_account->Rows[e->RowIndex]->Cells[0]->Value->ToString();
			
			searchAccount *account = (value struct searchAccount*) malloc(sizeof(value struct searchAccount));
			account = accSearch(search);
			if (!search == NULL) {
				Username = account->username;
				Pass = account->password;
				LoginAs = account->loginAs;
				inp_accUser->Text = Username;
				inp_accPass->Text = Pass;
				cb_accLoginas->Text = LoginAs;
			}
			else {
				MessageBox::Show("Error on loading fields account");
			}
					
		}

	    //Creating Report
		public: value struct salesReport {
			int transCode;
			String^ customer;
			float totalPrice;
			int totalQuantity;
			String^ date;
		};
		int saleReportCount;

		array<salesReport>^ sales = gcnew array< salesReport >(1000);

		public: void loadSalesFromFile() {
			String^ fileName = "sales_tb.txt";
			try
			{
				StreamReader^ din = File::OpenText(fileName);

				saleReportCount = Int32::Parse(din->ReadLine());
				if (saleReportCount > 0) {
					for (int i = 0; i < saleReportCount; i++) {
						sales[i].transCode = Int32::Parse(din->ReadLine());
						sales[i].customer = din->ReadLine();
						sales[i].totalPrice = float::Parse(din->ReadLine());
						sales[i].totalQuantity = Int32::Parse(din->ReadLine());
						sales[i].date = din->ReadLine();
					}
				}
				else {
					MessageBox::Show("The database is empty");
				}
				din->Close();

			}
			catch (const std::exception&)
			{

			}
		}

		public: void loadSalesTable() {
			double overSale = 0.0, monSale = 0.0;
			int tolTrans = 0, proSold = 0 ;

			tb_sales->Rows->Clear();
			tb_sales->Refresh();
			loadSalesFromFile();
			for (int i = 0; i < saleReportCount; i++) {
				int index = tb_sales->Rows->Add();
				tb_sales->Rows[index]->Cells[0]->Value = sales[i].transCode;
				tb_sales->Rows[index]->Cells[1]->Value = sales[i].customer;
				tb_sales->Rows[index]->Cells[2]->Value = sales[i].totalPrice;
				tb_sales->Rows[index]->Cells[3]->Value = sales[i].totalQuantity;
				tb_sales->Rows[index]->Cells[4]->Value = sales[i].date;
				overSale += sales[i].totalPrice;
				monSale += sales[i].totalPrice;
				proSold += sales[i].totalQuantity;

			}
			lbl_overSale->Text = "" + overSale;
			lbl_salesMon->Text = "" + monSale;
			lbl_salesTrans->Text = "" + saleReportCount;
			lbl_saleSold->Text = "" + proSold;
			tb_sales->ClearSelection();
		}

		public: value struct searchReport {
			int transCode;
			String^ customer;
			double totalPrice;
			int totalQuantity;
			String^ date;
			int idx;
		};

		//Search Salse Report on database
		public: searchReport *repSearch(String^ transCode) {
			searchReport *searched = (value struct searchReport*) malloc(sizeof(value struct searchReport));
			
			for (int i = 0; i < saleReportCount; i++) {

				if (String::Compare((""+sales[i].transCode), transCode) == 0) {
					searched->transCode = sales[i].transCode;
					searched->customer = sales[i].customer;
					searched->totalPrice = sales[i].totalPrice;
					searched->totalQuantity = sales[i].totalQuantity;
					searched->date = sales[i].date;
					searched->idx = i;
					return searched;
					free(searched);
				}

			}
			
		}
	

		private: System::Void tb_salesCellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			String^ search = tb_sales->Rows[e->RowIndex]->Cells[0]->Value->ToString();

			searchReport *repSale = (value struct searchReport*) malloc(sizeof(value struct searchReport));
			repSale = repSearch(search);
			if (!(repSale->transCode <= -1)) {
				lbl_salesCode -> Text =""+ repSale->transCode ;
				lbl_salesCust->Text = repSale->customer;
				lbl_salesPrice->Text = ""+ repSale->totalPrice;
				lbl_salesQuan->Text = "" + repSale->totalQuantity;
				lbl_salesDate->Text = repSale->date;
			}
			else {
				MessageBox::Show("Error on loading fields account");
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
			inp_editStock->Text = "";
			checkName = "";
			checkDesc = "";
			checkPrice = "";
			checkStock = "";
			checkCategory = "";
			inp_accUser->Text="";
			inp_accPass->Text="";
			cb_accLoginas->SelectedItem ="";
		}

		bool validateFields(String^ toValidate) {
			bool isValidated;
			if (String::Compare(toValidate, "update_sameFields") == 0) {
				isValidated = String::Compare(inp_editName->Text, checkName) == 0
					&& String::Compare(inp_editDesc->Text, checkDesc) == 0 && String::Compare(cb_editCategory->Text, checkCategory) == 0
					&& String::Compare(inp_editPrice->Text, checkPrice) == 0 && String::Compare(inp_editStock->Text, checkStock) == 0 ? true : false;
			}
			if (String::Compare(toValidate, "update_emptyFields") == 0) {
				isValidated = String::Compare(inp_editCode->Text, "") == 0 || String::Compare(inp_editName->Text, "") == 0
					|| String::Compare(inp_editDesc->Text, "") == 0 || String::Compare(cb_editCategory->Text, "") == 0
					|| String::Compare(inp_editPrice->Text, "") == 0 || String::Compare(inp_editStock->Text, "") == 0 ? true : false;
			}
			if (String::Compare(toValidate, "add_emptyFields") == 0) {
				isValidated = String::Compare(inp_proCode->Text, "") == 0 || String::Compare(inp_proName->Text, "") == 0
					|| String::Compare(inp_proCode->Text, "") == 0 || String::Compare(inp_proDesc->Text, "") == 0
					|| String::Compare(inp_proPrice->Text, "") == 0 || String::Compare(inp_proStock->Text, "") == 0 ? true : false;
			}
			if (String::Compare(toValidate, "add_accEmptyFields") == 0) {
				isValidated = String::Compare(inp_accUser->Text, "") == 0 || String::Compare(inp_accPass->Text, "") == 0
					|| String::Compare(cb_accLoginas->Text, "") == 0 ? true : false;
			}
			if (String::Compare(toValidate, "update_sameAccFields") == 0) {
				isValidated = String::Compare(inp_accUser->Text, Username) == 0
					&& String::Compare(inp_accPass->Text, Pass) == 0 && String::Compare(cb_accLoginas->Text, LoginAs) == 0 ? true : false;
			}
			
			return isValidated;

		}

		int toggle = 0;
		private: System::Void btn_accMode_Click(System::Object^  sender, System::EventArgs^  e) {

			if (toggle == 0) {
				btn_accMode->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
					static_cast<System::Int32>(static_cast<System::Byte>(60)));
				btn_accMode->Text = "Edit Mode";
				toggleAccMode(false);
				toggle++;
			}
			else {
				btn_accMode->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
					static_cast<System::Int32>(static_cast<System::Byte>(113)));
				btn_accMode->Text = "Add Mode";
				toggleAccMode(true);
				clearfields();
				toggle--;
			}

		}


		void toggleAccMode(bool isAddMode) {
			inp_accUser->Enabled = isAddMode;
			btn_delAcc->Visible = !isAddMode;
			btn_uppAcc->Visible = !isAddMode;
			btn_addAcc->Visible = isAddMode;
			tb_account->Enabled = !isAddMode;
		}

		private: System::Void btn_dashboard_Click_1(System::Object^  sender, System::EventArgs^  e) {
			tab_control->SelectTab(1);
			int x = btn_dashboard->Location.Y;
			int y = lbl_indicator->Location.Y;
			lbl_indicator->Location = btn_dashboard->Location;

				

		}
		private: System::Void btn_addproduct_Click_1(System::Object^  sender, System::EventArgs^  e) {
			tab_control->SelectTab(0);
			int x = btn_addproduct->Location.Y;
			int y = lbl_indicator->Location.Y;
			lbl_indicator->Location = btn_addproduct->Location;


		}
		private: System::Void btn_account_Click(System::Object^  sender, System::EventArgs^  e) {
			tab_control->SelectTab(3);
			lbl_indicator->Location = btn_account->Location;
			int x = btn_account->Location.Y;
			int y = lbl_indicator->Location.Y;

		}
		private: System::Void btn_logout_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Hide();
			obj->Show();
		}
		private: System::Void tab_sales_Click(System::Object^  sender, System::EventArgs^  e) {
		}
		private: System::Void btn_sales_Click(System::Object^  sender, System::EventArgs^  e) {
			tab_control->SelectTab(4);
			lbl_indicator->Location = btn_sales->Location;
			int x = btn_sales->Location.Y;
			int y = lbl_indicator->Location.Y;

		}
};
}

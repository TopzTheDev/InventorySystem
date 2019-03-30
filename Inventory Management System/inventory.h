#pragma once
#include <iostream>

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

	private: System::Windows::Forms::Button^  btn_accMode;
	private: System::Windows::Forms::NumericUpDown^  inp_proMinStock;

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
private: System::Windows::Forms::Label^  btn_salesView;













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
private: System::Windows::Forms::TabPage^  tab_transaction;

private: System::Windows::Forms::Panel^  panel19;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::DataGridView^  tb_tranProduct;

private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn13;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn14;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn15;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn16;
private: System::Windows::Forms::Panel^  panel20;
private: System::Windows::Forms::Panel^  panel21;



private: System::Windows::Forms::Label^  label55;
private: System::Windows::Forms::Label^  lbl_tranQuan;

private: System::Windows::Forms::Label^  label64;
private: System::Windows::Forms::Label^  label66;
private: System::Windows::Forms::Label^  label68;
private: System::Windows::Forms::Label^  lbl_tranName;

private: System::Windows::Forms::Label^  label70;
private: System::Windows::Forms::Label^  lbl_tranPrice;


private: System::Windows::Forms::Label^  label74;
private: System::Windows::Forms::Label^  lbl_tranDate;
private: System::Windows::Forms::Button^  btn_tranBack;
private: System::Windows::Forms::Label^  btn_tranDel;




private: System::Windows::Forms::Label^  lbl_tranCode;
private: System::Windows::Forms::ComboBox^  cb_searchType;

private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::TextBox^  inp_searchPro;
private: System::Windows::Forms::ComboBox^  cb_searchCategory;
private: System::Windows::Forms::NumericUpDown^  inp_proStock;

private: System::Windows::Forms::Label^  label54;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::NumericUpDown^  inp_editMinStock;

private: System::Windows::Forms::Label^  label57;
private: System::Windows::Forms::ComboBox^  cb_editCategory;
private: System::Windows::Forms::Label^  label69;
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  lbl_salesSubtotal;

private: System::Windows::Forms::Label^  lbl_salesVat;

private: System::Windows::Forms::Label^  label76;
private: System::Windows::Forms::Label^  lbl_tranVat;

private: System::Windows::Forms::Label^  label75;
private: System::Windows::Forms::Label^  label77;
private: System::Windows::Forms::Label^  lbl_tranSubtot;











private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn11;























	public:

	public:
		//Connection to database

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

	protected:

	protected:



	private: System::Windows::Forms::Label^  label14;

















	private: System::Windows::Forms::TabPage^  tab_addproduct;



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
			tb_sales->AllowUserToAddRows = true;
			tb_account->AllowUserToAddRows = false;
			loadTable("Default");
			loadAccTable("default");
			loadSalesTable();

		}
		void InitializeComponent(void)
		{	
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(inventory::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle33 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle34 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle35 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle36 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle41 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle42 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle43 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle44 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle45 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle46 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle47 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle48 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle37 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle38 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle39 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle40 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->tab_dashboard = (gcnew System::Windows::Forms::TabPage());
			this->cb_searchCategory = (gcnew System::Windows::Forms::ComboBox());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->inp_searchPro = (gcnew System::Windows::Forms::TextBox());
			this->cb_searchType = (gcnew System::Windows::Forms::ComboBox());
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
			this->lbl_searchError = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tab_addproduct = (gcnew System::Windows::Forms::TabPage());
			this->inp_proStock = (gcnew System::Windows::Forms::NumericUpDown());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->inp_proCode = (gcnew System::Windows::Forms::TextBox());
			this->inp_proPrice = (gcnew System::Windows::Forms::NumericUpDown());
			this->inp_proMinStock = (gcnew System::Windows::Forms::NumericUpDown());
			this->cb_proCategory = (gcnew System::Windows::Forms::ComboBox());
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tab_control = (gcnew System::Windows::Forms::TabControl());
			this->tab_editproduct = (gcnew System::Windows::Forms::TabPage());
			this->cb_editCategory = (gcnew System::Windows::Forms::ComboBox());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->inp_editMinStock = (gcnew System::Windows::Forms::NumericUpDown());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->inp_editCode = (gcnew System::Windows::Forms::TextBox());
			this->inp_editDesc = (gcnew System::Windows::Forms::TextBox());
			this->inp_editName = (gcnew System::Windows::Forms::TextBox());
			this->inp_editPrice = (gcnew System::Windows::Forms::NumericUpDown());
			this->inp_editStock = (gcnew System::Windows::Forms::NumericUpDown());
			this->btn_editBack = (gcnew System::Windows::Forms::Button());
			this->inp_editUpdate = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
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
			this->lbl_salesVat = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->lbl_salesSubtotal = (gcnew System::Windows::Forms::Label());
			this->btn_salesView = (gcnew System::Windows::Forms::Label());
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
			this->tab_transaction = (gcnew System::Windows::Forms::TabPage());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->lbl_tranVat = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->lbl_tranSubtot = (gcnew System::Windows::Forms::Label());
			this->lbl_tranCode = (gcnew System::Windows::Forms::Label());
			this->btn_tranDel = (gcnew System::Windows::Forms::Label());
			this->btn_tranBack = (gcnew System::Windows::Forms::Button());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->lbl_tranQuan = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->lbl_tranName = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->lbl_tranPrice = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->lbl_tranDate = (gcnew System::Windows::Forms::Label());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->tb_tranProduct = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inp_proStock))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inp_proPrice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inp_proMinStock))->BeginInit();
			this->tab_control->SuspendLayout();
			this->tab_editproduct->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inp_editMinStock))->BeginInit();
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
			this->tab_transaction->SuspendLayout();
			this->panel21->SuspendLayout();
			this->panel19->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tb_tranProduct))->BeginInit();
			this->pnl_navBar->SuspendLayout();
			this->SuspendLayout();
			// 
			// tab_dashboard
			// 
			this->tab_dashboard->BackColor = System::Drawing::Color::White;
			this->tab_dashboard->Controls->Add(this->cb_searchCategory);
			this->tab_dashboard->Controls->Add(this->label49);
			this->tab_dashboard->Controls->Add(this->inp_searchPro);
			this->tab_dashboard->Controls->Add(this->cb_searchType);
			this->tab_dashboard->Controls->Add(this->panel15);
			this->tab_dashboard->Controls->Add(this->panel16);
			this->tab_dashboard->Controls->Add(this->panel17);
			this->tab_dashboard->Controls->Add(this->panel18);
			this->tab_dashboard->Controls->Add(this->panel7);
			this->tab_dashboard->Controls->Add(this->panel5);
			this->tab_dashboard->Controls->Add(this->panel6);
			this->tab_dashboard->Controls->Add(this->table_prevProduct);
			this->tab_dashboard->Controls->Add(this->lbl_searchError);
			this->tab_dashboard->Controls->Add(this->label14);
			this->tab_dashboard->Location = System::Drawing::Point(4, 28);
			this->tab_dashboard->Margin = System::Windows::Forms::Padding(4);
			this->tab_dashboard->Name = L"tab_dashboard";
			this->tab_dashboard->Padding = System::Windows::Forms::Padding(4);
			this->tab_dashboard->Size = System::Drawing::Size(1603, 689);
			this->tab_dashboard->TabIndex = 1;
			this->tab_dashboard->Text = L"Dashboard";
			// 
			// cb_searchCategory
			// 
			this->cb_searchCategory->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->cb_searchCategory->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_searchCategory->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cb_searchCategory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->cb_searchCategory->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->cb_searchCategory->FormattingEnabled = true;
			this->cb_searchCategory->ItemHeight = 39;
			this->cb_searchCategory->Location = System::Drawing::Point(956, 25);
			this->cb_searchCategory->Margin = System::Windows::Forms::Padding(4);
			this->cb_searchCategory->Name = L"cb_searchCategory";
			this->cb_searchCategory->Size = System::Drawing::Size(441, 47);
			this->cb_searchCategory->TabIndex = 90;
			this->cb_searchCategory->Visible = false;
			this->cb_searchCategory->SelectedIndexChanged += gcnew System::EventHandler(this, &inventory::cb_searchCategory_SelectedIndexChanged);
			// 
			// label49
			// 
			this->label49->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label49->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label49->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label49.Image")));
			this->label49->Location = System::Drawing::Point(1344, 25);
			this->label49->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(55, 47);
			this->label49->TabIndex = 89;
			// 
			// inp_searchPro
			// 
			this->inp_searchPro->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->inp_searchPro->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->inp_searchPro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21));
			this->inp_searchPro->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_searchPro->HideSelection = false;
			this->inp_searchPro->Location = System::Drawing::Point(953, 25);
			this->inp_searchPro->Margin = System::Windows::Forms::Padding(4);
			this->inp_searchPro->Multiline = true;
			this->inp_searchPro->Name = L"inp_searchPro";
			this->inp_searchPro->Size = System::Drawing::Size(439, 47);
			this->inp_searchPro->TabIndex = 88;
			this->inp_searchPro->WordWrap = false;
			this->inp_searchPro->TextChanged += gcnew System::EventHandler(this, &inventory::inp_searchPro_TextChanged);
			// 
			// cb_searchType
			// 
			this->cb_searchType->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->cb_searchType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_searchType->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cb_searchType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->cb_searchType->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->cb_searchType->FormattingEnabled = true;
			this->cb_searchType->ItemHeight = 39;
			this->cb_searchType->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Default", L"Barcode", L"Product Name", L"Category" });
			this->cb_searchType->Location = System::Drawing::Point(623, 27);
			this->cb_searchType->Margin = System::Windows::Forms::Padding(4);
			this->cb_searchType->Name = L"cb_searchType";
			this->cb_searchType->Size = System::Drawing::Size(292, 47);
			this->cb_searchType->TabIndex = 87;
			this->cb_searchType->SelectedIndexChanged += gcnew System::EventHandler(this, &inventory::cb_searchType_SelectedIndexChanged);
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->panel15->Controls->Add(this->lbl_overCrit);
			this->panel15->Controls->Add(this->label67);
			this->panel15->Location = System::Drawing::Point(1336, 542);
			this->panel15->Margin = System::Windows::Forms::Padding(4);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(217, 123);
			this->panel15->TabIndex = 86;
			// 
			// lbl_overCrit
			// 
			this->lbl_overCrit->BackColor = System::Drawing::Color::Transparent;
			this->lbl_overCrit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F));
			this->lbl_overCrit->ForeColor = System::Drawing::Color::White;
			this->lbl_overCrit->Location = System::Drawing::Point(12, 47);
			this->lbl_overCrit->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_overCrit->Name = L"lbl_overCrit";
			this->lbl_overCrit->Size = System::Drawing::Size(160, 52);
			this->lbl_overCrit->TabIndex = 77;
			this->lbl_overCrit->Text = L"5";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->BackColor = System::Drawing::Color::Transparent;
			this->label67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label67->ForeColor = System::Drawing::Color::White;
			this->label67->Location = System::Drawing::Point(16, 14);
			this->label67->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(151, 29);
			this->label67->TabIndex = 76;
			this->label67->Text = L"Critical Level";
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel16->Controls->Add(this->lbl_proCounts);
			this->panel16->Controls->Add(this->ss);
			this->panel16->Location = System::Drawing::Point(1079, 542);
			this->panel16->Margin = System::Windows::Forms::Padding(4);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(247, 123);
			this->panel16->TabIndex = 85;
			// 
			// lbl_proCounts
			// 
			this->lbl_proCounts->BackColor = System::Drawing::Color::Transparent;
			this->lbl_proCounts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F));
			this->lbl_proCounts->ForeColor = System::Drawing::Color::White;
			this->lbl_proCounts->Location = System::Drawing::Point(12, 47);
			this->lbl_proCounts->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_proCounts->Name = L"lbl_proCounts";
			this->lbl_proCounts->Size = System::Drawing::Size(160, 52);
			this->lbl_proCounts->TabIndex = 77;
			this->lbl_proCounts->Text = L"500";
			// 
			// ss
			// 
			this->ss->AutoSize = true;
			this->ss->BackColor = System::Drawing::Color::Transparent;
			this->ss->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->ss->ForeColor = System::Drawing::Color::White;
			this->ss->Location = System::Drawing::Point(16, 14);
			this->ss->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ss->Name = L"ss";
			this->ss->Size = System::Drawing::Size(165, 29);
			this->ss->TabIndex = 76;
			this->ss->Text = L"Product Count";
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(193)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->panel17->Controls->Add(this->lbl_overStocks);
			this->panel17->Controls->Add(this->label71);
			this->panel17->Location = System::Drawing::Point(811, 542);
			this->panel17->Margin = System::Windows::Forms::Padding(4);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(260, 123);
			this->panel17->TabIndex = 84;
			// 
			// lbl_overStocks
			// 
			this->lbl_overStocks->BackColor = System::Drawing::Color::Transparent;
			this->lbl_overStocks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F));
			this->lbl_overStocks->ForeColor = System::Drawing::Color::White;
			this->lbl_overStocks->Location = System::Drawing::Point(12, 47);
			this->lbl_overStocks->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_overStocks->Name = L"lbl_overStocks";
			this->lbl_overStocks->Size = System::Drawing::Size(212, 52);
			this->lbl_overStocks->TabIndex = 77;
			this->lbl_overStocks->Text = L"1,000.50";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->BackColor = System::Drawing::Color::Transparent;
			this->label71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label71->ForeColor = System::Drawing::Color::White;
			this->label71->Location = System::Drawing::Point(16, 14);
			this->label71->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(85, 29);
			this->label71->TabIndex = 76;
			this->label71->Text = L"Stocks";
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->panel18->Controls->Add(this->lbl_overPrice);
			this->panel18->Controls->Add(this->label73);
			this->panel18->Location = System::Drawing::Point(484, 542);
			this->panel18->Margin = System::Windows::Forms::Padding(4);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(313, 123);
			this->panel18->TabIndex = 83;
			// 
			// lbl_overPrice
			// 
			this->lbl_overPrice->BackColor = System::Drawing::Color::Transparent;
			this->lbl_overPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F));
			this->lbl_overPrice->ForeColor = System::Drawing::Color::White;
			this->lbl_overPrice->Location = System::Drawing::Point(12, 47);
			this->lbl_overPrice->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_overPrice->Name = L"lbl_overPrice";
			this->lbl_overPrice->Size = System::Drawing::Size(295, 52);
			this->lbl_overPrice->TabIndex = 77;
			this->lbl_overPrice->Text = L"1,000,501.50";
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->BackColor = System::Drawing::Color::Transparent;
			this->label73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label73->ForeColor = System::Drawing::Color::White;
			this->label73->Location = System::Drawing::Point(16, 14);
			this->label73->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(152, 29);
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
			this->panel7->Margin = System::Windows::Forms::Padding(4);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(444, 684);
			this->panel7->TabIndex = 71;
			// 
			// btn_prevEdit
			// 
			this->btn_prevEdit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->btn_prevEdit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_prevEdit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->btn_prevEdit->ForeColor = System::Drawing::Color::White;
			this->btn_prevEdit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_prevEdit.Image")));
			this->btn_prevEdit->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_prevEdit->Location = System::Drawing::Point(37, 582);
			this->btn_prevEdit->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->btn_prevEdit->Name = L"btn_prevEdit";
			this->btn_prevEdit->Padding = System::Windows::Forms::Padding(13, 0, 13, 0);
			this->btn_prevEdit->Size = System::Drawing::Size(179, 55);
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
			this->btn_prevDel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->btn_prevDel->ForeColor = System::Drawing::Color::White;
			this->btn_prevDel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_prevDel.Image")));
			this->btn_prevDel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_prevDel->Location = System::Drawing::Point(239, 582);
			this->btn_prevDel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->btn_prevDel->Name = L"btn_prevDel";
			this->btn_prevDel->Padding = System::Windows::Forms::Padding(13, 0, 13, 0);
			this->btn_prevDel->Size = System::Drawing::Size(184, 55);
			this->btn_prevDel->TabIndex = 74;
			this->btn_prevDel->Text = L"Delete ";
			this->btn_prevDel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_prevDel->Click += gcnew System::EventHandler(this, &inventory::btn_prevDelete_Click);
			// 
			// label42
			// 
			this->label42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label42->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label42.Image")));
			this->label42->Location = System::Drawing::Point(356, 135);
			this->label42->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(55, 44);
			this->label42->TabIndex = 73;
			// 
			// lbl_prevCode
			// 
			this->lbl_prevCode->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->lbl_prevCode->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lbl_prevCode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21));
			this->lbl_prevCode->ForeColor = System::Drawing::Color::White;
			this->lbl_prevCode->HideSelection = false;
			this->lbl_prevCode->Location = System::Drawing::Point(43, 135);
			this->lbl_prevCode->Margin = System::Windows::Forms::Padding(4);
			this->lbl_prevCode->Multiline = true;
			this->lbl_prevCode->Name = L"lbl_prevCode";
			this->lbl_prevCode->Size = System::Drawing::Size(368, 44);
			this->lbl_prevCode->TabIndex = 72;
			this->lbl_prevCode->WordWrap = false;
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23, System::Drawing::FontStyle::Bold));
			this->label53->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label53->Location = System::Drawing::Point(33, 30);
			this->label53->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(321, 44);
			this->label53->TabIndex = 71;
			this->label53->Text = L"Product Preview";
			// 
			// inp_prevStock
			// 
			this->inp_prevStock->BackColor = System::Drawing::Color::Transparent;
			this->inp_prevStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->inp_prevStock->ForeColor = System::Drawing::Color::White;
			this->inp_prevStock->Location = System::Drawing::Point(37, 527);
			this->inp_prevStock->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->inp_prevStock->Name = L"inp_prevStock";
			this->inp_prevStock->Size = System::Drawing::Size(365, 32);
			this->inp_prevStock->TabIndex = 66;
			// 
			// inp_prevCategory
			// 
			this->inp_prevCategory->BackColor = System::Drawing::Color::Transparent;
			this->inp_prevCategory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->inp_prevCategory->ForeColor = System::Drawing::Color::White;
			this->inp_prevCategory->Location = System::Drawing::Point(37, 367);
			this->inp_prevCategory->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->inp_prevCategory->Name = L"inp_prevCategory";
			this->inp_prevCategory->Size = System::Drawing::Size(373, 32);
			this->inp_prevCategory->TabIndex = 65;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::Transparent;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label41->ForeColor = System::Drawing::Color::White;
			this->label41->Location = System::Drawing::Point(37, 334);
			this->label41->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(110, 29);
			this->label41->TabIndex = 64;
			this->label41->Text = L"Category";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->BackColor = System::Drawing::Color::Transparent;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label43->ForeColor = System::Drawing::Color::White;
			this->label43->Location = System::Drawing::Point(37, 193);
			this->label43->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(167, 29);
			this->label43->TabIndex = 54;
			this->label43->Text = L"Product Name";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->BackColor = System::Drawing::Color::Transparent;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label44->ForeColor = System::Drawing::Color::White;
			this->label44->Location = System::Drawing::Point(37, 98);
			this->label44->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(104, 29);
			this->label44->TabIndex = 62;
			this->label44->Text = L"Barcode";
			// 
			// inp_prevName
			// 
			this->inp_prevName->BackColor = System::Drawing::Color::Transparent;
			this->inp_prevName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->inp_prevName->ForeColor = System::Drawing::Color::White;
			this->inp_prevName->Location = System::Drawing::Point(37, 225);
			this->inp_prevName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->inp_prevName->Name = L"inp_prevName";
			this->inp_prevName->Size = System::Drawing::Size(373, 32);
			this->inp_prevName->TabIndex = 55;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->BackColor = System::Drawing::Color::Transparent;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label46->ForeColor = System::Drawing::Color::White;
			this->label46->Location = System::Drawing::Point(37, 261);
			this->label46->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(135, 29);
			this->label46->TabIndex = 56;
			this->label46->Text = L"Description";
			// 
			// inp_prevDesc
			// 
			this->inp_prevDesc->BackColor = System::Drawing::Color::Transparent;
			this->inp_prevDesc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->inp_prevDesc->ForeColor = System::Drawing::Color::White;
			this->inp_prevDesc->Location = System::Drawing::Point(37, 292);
			this->inp_prevDesc->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->inp_prevDesc->Name = L"inp_prevDesc";
			this->inp_prevDesc->Size = System::Drawing::Size(355, 32);
			this->inp_prevDesc->TabIndex = 57;
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->BackColor = System::Drawing::Color::Transparent;
			this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label48->ForeColor = System::Drawing::Color::White;
			this->label48->Location = System::Drawing::Point(37, 411);
			this->label48->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(69, 29);
			this->label48->TabIndex = 58;
			this->label48->Text = L"Price";
			// 
			// inp_prevPrice
			// 
			this->inp_prevPrice->BackColor = System::Drawing::Color::Transparent;
			this->inp_prevPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->inp_prevPrice->ForeColor = System::Drawing::Color::White;
			this->inp_prevPrice->Location = System::Drawing::Point(37, 444);
			this->inp_prevPrice->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->inp_prevPrice->Name = L"inp_prevPrice";
			this->inp_prevPrice->Size = System::Drawing::Size(365, 32);
			this->inp_prevPrice->TabIndex = 59;
			this->inp_prevPrice->Click += gcnew System::EventHandler(this, &inventory::inp_prevPrice_Click);
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->BackColor = System::Drawing::Color::Transparent;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label50->ForeColor = System::Drawing::Color::White;
			this->label50->Location = System::Drawing::Point(37, 491);
			this->label50->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(73, 29);
			this->label50->TabIndex = 60;
			this->label50->Text = L"Stock";
			// 
			// label51
			// 
			this->label51->BackColor = System::Drawing::Color::Transparent;
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label51->ForeColor = System::Drawing::Color::White;
			this->label51->Location = System::Drawing::Point(37, 489);
			this->label51->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(373, 32);
			this->label51->TabIndex = 61;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Location = System::Drawing::Point(427, 108);
			this->panel5->Margin = System::Windows::Forms::Padding(4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(57, 560);
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
			this->panel6->Location = System::Drawing::Point(484, 98);
			this->panel6->Margin = System::Windows::Forms::Padding(4);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1073, 44);
			this->panel6->TabIndex = 73;
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(340, 7);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(164, 32);
			this->label12->TabIndex = 65;
			this->label12->Text = L"Description";
			// 
			// label39
			// 
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label39->ForeColor = System::Drawing::Color::White;
			this->label39->Location = System::Drawing::Point(744, 9);
			this->label39->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(164, 32);
			this->label39->TabIndex = 64;
			this->label39->Text = L"Stocks";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(3, 9);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(144, 32);
			this->label8->TabIndex = 63;
			this->label8->Text = L"Barcode";
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(913, 7);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(156, 32);
			this->label9->TabIndex = 62;
			this->label9->Text = L"Price";
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(544, 7);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(164, 32);
			this->label10->TabIndex = 61;
			this->label10->Text = L"Category";
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(167, 7);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(171, 32);
			this->label11->TabIndex = 60;
			this->label11->Text = L"Product Name";
			// 
			// table_prevProduct
			// 
			this->table_prevProduct->BackgroundColor = System::Drawing::Color::White;
			this->table_prevProduct->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->table_prevProduct->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->table_prevProduct->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle33->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle33->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			dataGridViewCellStyle33->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle33->Padding = System::Windows::Forms::Padding(1);
			dataGridViewCellStyle33->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			dataGridViewCellStyle33->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle33->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->table_prevProduct->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle33;
			this->table_prevProduct->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table_prevProduct->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->cl_description, this->cl_categories, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4
			});
			this->table_prevProduct->Cursor = System::Windows::Forms::Cursors::Hand;
			dataGridViewCellStyle34->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle34->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			dataGridViewCellStyle34->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle34->Padding = System::Windows::Forms::Padding(0, 2, 2, 2);
			dataGridViewCellStyle34->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			dataGridViewCellStyle34->SelectionForeColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle34->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->table_prevProduct->DefaultCellStyle = dataGridViewCellStyle34;
			this->table_prevProduct->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->table_prevProduct->Location = System::Drawing::Point(429, 108);
			this->table_prevProduct->Margin = System::Windows::Forms::Padding(4);
			this->table_prevProduct->Name = L"table_prevProduct";
			this->table_prevProduct->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			dataGridViewCellStyle35->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle35->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle35->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle35->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle35->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle35->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->table_prevProduct->RowHeadersDefaultCellStyle = dataGridViewCellStyle35;
			this->table_prevProduct->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle36->Padding = System::Windows::Forms::Padding(2);
			this->table_prevProduct->RowsDefaultCellStyle = dataGridViewCellStyle36;
			this->table_prevProduct->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->table_prevProduct->Size = System::Drawing::Size(1128, 412);
			this->table_prevProduct->TabIndex = 72;
			this->table_prevProduct->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &inventory::table_prevProduct_CellClick);
			this->table_prevProduct->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &inventory::table_prevProduct_CellContentClick);
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
			// lbl_searchError
			// 
			this->lbl_searchError->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->lbl_searchError->ForeColor = System::Drawing::Color::Red;
			this->lbl_searchError->Location = System::Drawing::Point(699, 84);
			this->lbl_searchError->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_searchError->Name = L"lbl_searchError";
			this->lbl_searchError->Size = System::Drawing::Size(543, 27);
			this->lbl_searchError->TabIndex = 40;
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label14->Location = System::Drawing::Point(479, 38);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(112, 32);
			this->label14->TabIndex = 33;
			this->label14->Text = L"Search by";
			// 
			// tab_addproduct
			// 
			this->tab_addproduct->BackColor = System::Drawing::Color::White;
			this->tab_addproduct->Controls->Add(this->inp_proStock);
			this->tab_addproduct->Controls->Add(this->label54);
			this->tab_addproduct->Controls->Add(this->pictureBox1);
			this->tab_addproduct->Controls->Add(this->inp_proCode);
			this->tab_addproduct->Controls->Add(this->inp_proPrice);
			this->tab_addproduct->Controls->Add(this->inp_proMinStock);
			this->tab_addproduct->Controls->Add(this->cb_proCategory);
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
			this->tab_addproduct->Controls->Add(this->textBox1);
			this->tab_addproduct->Location = System::Drawing::Point(4, 28);
			this->tab_addproduct->Margin = System::Windows::Forms::Padding(4);
			this->tab_addproduct->Name = L"tab_addproduct";
			this->tab_addproduct->Padding = System::Windows::Forms::Padding(4);
			this->tab_addproduct->Size = System::Drawing::Size(1603, 689);
			this->tab_addproduct->TabIndex = 0;
			this->tab_addproduct->Text = L"Add Product";
			// 
			// inp_proStock
			// 
			this->inp_proStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inp_proStock->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_proStock->Location = System::Drawing::Point(581, 281);
			this->inp_proStock->Margin = System::Windows::Forms::Padding(4);
			this->inp_proStock->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1410065408, 2, 0, 0 });
			this->inp_proStock->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->inp_proStock->Name = L"inp_proStock";
			this->inp_proStock->Size = System::Drawing::Size(467, 46);
			this->inp_proStock->TabIndex = 47;
			this->inp_proStock->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label54
			// 
			this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label54->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label54->Location = System::Drawing::Point(575, 245);
			this->label54->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(472, 32);
			this->label54->TabIndex = 46;
			this->label54->Text = L"Stock";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(61, 33);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(67, 62);
			this->pictureBox1->TabIndex = 45;
			this->pictureBox1->TabStop = false;
			// 
			// inp_proCode
			// 
			this->inp_proCode->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_proCode->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_proCode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inp_proCode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_proCode->HideSelection = false;
			this->inp_proCode->Location = System::Drawing::Point(63, 162);
			this->inp_proCode->Margin = System::Windows::Forms::Padding(4);
			this->inp_proCode->Name = L"inp_proCode";
			this->inp_proCode->Size = System::Drawing::Size(466, 46);
			this->inp_proCode->TabIndex = 44;
			// 
			// inp_proPrice
			// 
			this->inp_proPrice->DecimalPlaces = 2;
			this->inp_proPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inp_proPrice->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_proPrice->Location = System::Drawing::Point(581, 398);
			this->inp_proPrice->Margin = System::Windows::Forms::Padding(4);
			this->inp_proPrice->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1215752191, 23, 0, 0 });
			this->inp_proPrice->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->inp_proPrice->Name = L"inp_proPrice";
			this->inp_proPrice->Size = System::Drawing::Size(467, 46);
			this->inp_proPrice->TabIndex = 43;
			this->inp_proPrice->ThousandsSeparator = true;
			this->inp_proPrice->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// inp_proMinStock
			// 
			this->inp_proMinStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->inp_proMinStock->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_proMinStock->Location = System::Drawing::Point(580, 162);
			this->inp_proMinStock->Margin = System::Windows::Forms::Padding(4);
			this->inp_proMinStock->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999999, 0, 0, 0 });
			this->inp_proMinStock->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->inp_proMinStock->Name = L"inp_proMinStock";
			this->inp_proMinStock->Size = System::Drawing::Size(467, 46);
			this->inp_proMinStock->TabIndex = 42;
			this->inp_proMinStock->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->inp_proMinStock->ValueChanged += gcnew System::EventHandler(this, &inventory::inp_proMinStock_ValueChanged);
			// 
			// cb_proCategory
			// 
			this->cb_proCategory->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_proCategory->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cb_proCategory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->cb_proCategory->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->cb_proCategory->FormattingEnabled = true;
			this->cb_proCategory->ItemHeight = 36;
			this->cb_proCategory->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"Alcohol", L"Fruit/veg/salads", L"Dairy",
					L"Chilled convenience", L"Bathroom toiletries", L"Household/cleaning", L"Fresh meat", L"Frozen prepared foods", L"Ambient bakery",
					L"Soft drinks", L"Confectionery", L"Fresh Poultry/game", L"Biscuits", L"Canned goods", L"Petcare", L"Savoury home cooking", L"Savouries",
					L"Hot beverages", L"Packet cereal", L"Healthcare", L"Others"
			});
			this->cb_proCategory->Location = System::Drawing::Point(63, 514);
			this->cb_proCategory->Margin = System::Windows::Forms::Padding(4);
			this->cb_proCategory->Name = L"cb_proCategory";
			this->cb_proCategory->Size = System::Drawing::Size(460, 44);
			this->cb_proCategory->TabIndex = 40;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label7->Location = System::Drawing::Point(136, 44);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(247, 44);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Add Product";
			// 
			// inp_proDesc
			// 
			this->inp_proDesc->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_proDesc->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_proDesc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inp_proDesc->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_proDesc->HideSelection = false;
			this->inp_proDesc->Location = System::Drawing::Point(63, 398);
			this->inp_proDesc->Margin = System::Windows::Forms::Padding(4);
			this->inp_proDesc->Name = L"inp_proDesc";
			this->inp_proDesc->Size = System::Drawing::Size(466, 46);
			this->inp_proDesc->TabIndex = 14;
			// 
			// inp_proName
			// 
			this->inp_proName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_proName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_proName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inp_proName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_proName->HideSelection = false;
			this->inp_proName->Location = System::Drawing::Point(61, 279);
			this->inp_proName->Margin = System::Windows::Forms::Padding(4);
			this->inp_proName->Name = L"inp_proName";
			this->inp_proName->Size = System::Drawing::Size(466, 46);
			this->inp_proName->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label6->Location = System::Drawing::Point(573, 127);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(472, 32);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Minimum Stock";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label5->Location = System::Drawing::Point(52, 479);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(472, 32);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Category";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label3->Location = System::Drawing::Point(575, 362);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(472, 32);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Price";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label2->Location = System::Drawing::Point(59, 364);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(472, 32);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Description";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label1->Location = System::Drawing::Point(55, 130);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(472, 32);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Barcode";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label4->Location = System::Drawing::Point(57, 246);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(472, 32);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Product Name";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(1311, 590);
			this->button1->Margin = System::Windows::Forms::Padding(0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(241, 55);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Add Product";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &inventory::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->textBox1->HideSelection = false;
			this->textBox1->Location = System::Drawing::Point(59, 512);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(466, 49);
			this->textBox1->TabIndex = 48;
			// 
			// tab_control
			// 
			this->tab_control->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tab_control->Controls->Add(this->tab_addproduct);
			this->tab_control->Controls->Add(this->tab_dashboard);
			this->tab_control->Controls->Add(this->tab_editproduct);
			this->tab_control->Controls->Add(this->tab_accounts);
			this->tab_control->Controls->Add(this->tab_sales);
			this->tab_control->Controls->Add(this->tab_transaction);
			this->tab_control->Location = System::Drawing::Point(89, -32);
			this->tab_control->Margin = System::Windows::Forms::Padding(4);
			this->tab_control->MaximumSize = System::Drawing::Size(1611, 721);
			this->tab_control->MinimumSize = System::Drawing::Size(1611, 721);
			this->tab_control->Name = L"tab_control";
			this->tab_control->SelectedIndex = 1;
			this->tab_control->Size = System::Drawing::Size(1611, 721);
			this->tab_control->TabIndex = 10;
			// 
			// tab_editproduct
			// 
			this->tab_editproduct->BackColor = System::Drawing::Color::White;
			this->tab_editproduct->Controls->Add(this->cb_editCategory);
			this->tab_editproduct->Controls->Add(this->label69);
			this->tab_editproduct->Controls->Add(this->textBox2);
			this->tab_editproduct->Controls->Add(this->inp_editMinStock);
			this->tab_editproduct->Controls->Add(this->label57);
			this->tab_editproduct->Controls->Add(this->pictureBox2);
			this->tab_editproduct->Controls->Add(this->label13);
			this->tab_editproduct->Controls->Add(this->inp_editCode);
			this->tab_editproduct->Controls->Add(this->inp_editDesc);
			this->tab_editproduct->Controls->Add(this->inp_editName);
			this->tab_editproduct->Controls->Add(this->inp_editPrice);
			this->tab_editproduct->Controls->Add(this->inp_editStock);
			this->tab_editproduct->Controls->Add(this->btn_editBack);
			this->tab_editproduct->Controls->Add(this->inp_editUpdate);
			this->tab_editproduct->Controls->Add(this->label18);
			this->tab_editproduct->Controls->Add(this->label20);
			this->tab_editproduct->Controls->Add(this->label21);
			this->tab_editproduct->Controls->Add(this->label22);
			this->tab_editproduct->Controls->Add(this->label23);
			this->tab_editproduct->Location = System::Drawing::Point(4, 28);
			this->tab_editproduct->Margin = System::Windows::Forms::Padding(4);
			this->tab_editproduct->Name = L"tab_editproduct";
			this->tab_editproduct->Padding = System::Windows::Forms::Padding(4);
			this->tab_editproduct->Size = System::Drawing::Size(1603, 689);
			this->tab_editproduct->TabIndex = 2;
			this->tab_editproduct->Text = L"Edit Product";
			// 
			// cb_editCategory
			// 
			this->cb_editCategory->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_editCategory->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cb_editCategory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->cb_editCategory->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->cb_editCategory->FormattingEnabled = true;
			this->cb_editCategory->ItemHeight = 36;
			this->cb_editCategory->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"Alcohol", L"Fruit/veg/salads", L"Dairy",
					L"Chilled convenience", L"Bathroom toiletries", L"Household/cleaning", L"Fresh meat", L"Frozen prepared foods", L"Ambient bakery",
					L"Soft drinks", L"Confectionery", L"Fresh Poultry/game", L"Biscuits", L"Canned goods", L"Petcare", L"Savoury home cooking", L"Savouries",
					L"Hot beverages", L"Packet cereal", L"Healthcare", L"Others"
			});
			this->cb_editCategory->Location = System::Drawing::Point(55, 485);
			this->cb_editCategory->Margin = System::Windows::Forms::Padding(4);
			this->cb_editCategory->Name = L"cb_editCategory";
			this->cb_editCategory->Size = System::Drawing::Size(460, 44);
			this->cb_editCategory->TabIndex = 55;
			// 
			// label69
			// 
			this->label69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label69->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label69->Location = System::Drawing::Point(44, 444);
			this->label69->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(472, 32);
			this->label69->TabIndex = 54;
			this->label69->Text = L"Category";
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->textBox2->HideSelection = false;
			this->textBox2->Location = System::Drawing::Point(51, 484);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(466, 49);
			this->textBox2->TabIndex = 56;
			// 
			// inp_editMinStock
			// 
			this->inp_editMinStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->inp_editMinStock->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_editMinStock->Location = System::Drawing::Point(573, 146);
			this->inp_editMinStock->Margin = System::Windows::Forms::Padding(4);
			this->inp_editMinStock->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1410065408, 2, 0, 0 });
			this->inp_editMinStock->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->inp_editMinStock->Name = L"inp_editMinStock";
			this->inp_editMinStock->Size = System::Drawing::Size(467, 46);
			this->inp_editMinStock->TabIndex = 53;
			this->inp_editMinStock->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->inp_editMinStock->ValueChanged += gcnew System::EventHandler(this, &inventory::inp_editMinStock_ValueChanged);
			// 
			// label57
			// 
			this->label57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label57->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label57->Location = System::Drawing::Point(567, 111);
			this->label57->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(472, 32);
			this->label57->TabIndex = 52;
			this->label57->Text = L"Minimum Stock";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(53, 28);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(67, 62);
			this->pictureBox2->TabIndex = 51;
			this->pictureBox2->TabStop = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23, System::Drawing::FontStyle::Bold));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label13->Location = System::Drawing::Point(128, 39);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(307, 44);
			this->label13->TabIndex = 50;
			this->label13->Text = L"Update Product";
			// 
			// inp_editCode
			// 
			this->inp_editCode->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_editCode->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_editCode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inp_editCode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_editCode->HideSelection = false;
			this->inp_editCode->Location = System::Drawing::Point(55, 146);
			this->inp_editCode->Margin = System::Windows::Forms::Padding(4);
			this->inp_editCode->Multiline = true;
			this->inp_editCode->Name = L"inp_editCode";
			this->inp_editCode->ReadOnly = true;
			this->inp_editCode->Size = System::Drawing::Size(466, 49);
			this->inp_editCode->TabIndex = 49;
			// 
			// inp_editDesc
			// 
			this->inp_editDesc->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_editDesc->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_editDesc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inp_editDesc->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_editDesc->HideSelection = false;
			this->inp_editDesc->Location = System::Drawing::Point(56, 374);
			this->inp_editDesc->Margin = System::Windows::Forms::Padding(4);
			this->inp_editDesc->Multiline = true;
			this->inp_editDesc->Name = L"inp_editDesc";
			this->inp_editDesc->Size = System::Drawing::Size(466, 49);
			this->inp_editDesc->TabIndex = 48;
			// 
			// inp_editName
			// 
			this->inp_editName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_editName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_editName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inp_editName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_editName->HideSelection = false;
			this->inp_editName->Location = System::Drawing::Point(55, 252);
			this->inp_editName->Margin = System::Windows::Forms::Padding(4);
			this->inp_editName->Multiline = true;
			this->inp_editName->Name = L"inp_editName";
			this->inp_editName->Size = System::Drawing::Size(466, 49);
			this->inp_editName->TabIndex = 47;
			// 
			// inp_editPrice
			// 
			this->inp_editPrice->DecimalPlaces = 2;
			this->inp_editPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inp_editPrice->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_editPrice->Location = System::Drawing::Point(573, 380);
			this->inp_editPrice->Margin = System::Windows::Forms::Padding(4);
			this->inp_editPrice->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->inp_editPrice->Name = L"inp_editPrice";
			this->inp_editPrice->Size = System::Drawing::Size(467, 41);
			this->inp_editPrice->TabIndex = 45;
			// 
			// inp_editStock
			// 
			this->inp_editStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inp_editStock->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_editStock->Location = System::Drawing::Point(572, 257);
			this->inp_editStock->Margin = System::Windows::Forms::Padding(4);
			this->inp_editStock->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1410065408, 2, 0, 0 });
			this->inp_editStock->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->inp_editStock->Name = L"inp_editStock";
			this->inp_editStock->Size = System::Drawing::Size(467, 41);
			this->inp_editStock->TabIndex = 44;
			this->inp_editStock->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// btn_editBack
			// 
			this->btn_editBack->BackColor = System::Drawing::Color::White;
			this->btn_editBack->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_editBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_editBack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->btn_editBack->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->btn_editBack->Location = System::Drawing::Point(1052, 587);
			this->btn_editBack->Margin = System::Windows::Forms::Padding(4);
			this->btn_editBack->Name = L"btn_editBack";
			this->btn_editBack->Size = System::Drawing::Size(228, 50);
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
			this->inp_editUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->inp_editUpdate->ForeColor = System::Drawing::Color::White;
			this->inp_editUpdate->Location = System::Drawing::Point(1304, 583);
			this->inp_editUpdate->Margin = System::Windows::Forms::Padding(4);
			this->inp_editUpdate->Name = L"inp_editUpdate";
			this->inp_editUpdate->Size = System::Drawing::Size(252, 62);
			this->inp_editUpdate->TabIndex = 38;
			this->inp_editUpdate->Text = L"Update Product";
			this->inp_editUpdate->UseVisualStyleBackColor = false;
			this->inp_editUpdate->Click += gcnew System::EventHandler(this, &inventory::inp_editUpdate_Click);
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label18->Location = System::Drawing::Point(569, 222);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(472, 32);
			this->label18->TabIndex = 35;
			this->label18->Text = L"Stock";
			// 
			// label20
			// 
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label20->Location = System::Drawing::Point(571, 345);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(472, 32);
			this->label20->TabIndex = 31;
			this->label20->Text = L"Price";
			// 
			// label21
			// 
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label21->Location = System::Drawing::Point(52, 340);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(472, 32);
			this->label21->TabIndex = 30;
			this->label21->Text = L"Description";
			// 
			// label22
			// 
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label22->Location = System::Drawing::Point(51, 112);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(472, 32);
			this->label22->TabIndex = 28;
			this->label22->Text = L"Barcode";
			// 
			// label23
			// 
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label23->Location = System::Drawing::Point(51, 218);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(472, 32);
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
			this->tab_accounts->Location = System::Drawing::Point(4, 28);
			this->tab_accounts->Margin = System::Windows::Forms::Padding(4);
			this->tab_accounts->Name = L"tab_accounts";
			this->tab_accounts->Padding = System::Windows::Forms::Padding(4);
			this->tab_accounts->Size = System::Drawing::Size(1603, 689);
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
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(525, 684);
			this->panel1->TabIndex = 72;
			// 
			// btn_delAcc
			// 
			this->btn_delAcc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btn_delAcc->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_delAcc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->btn_delAcc->ForeColor = System::Drawing::Color::White;
			this->btn_delAcc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_delAcc.Image")));
			this->btn_delAcc->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_delAcc->Location = System::Drawing::Point(280, 463);
			this->btn_delAcc->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->btn_delAcc->Name = L"btn_delAcc";
			this->btn_delAcc->Padding = System::Windows::Forms::Padding(13, 0, 13, 0);
			this->btn_delAcc->Size = System::Drawing::Size(184, 55);
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
			this->cb_accLoginas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->cb_accLoginas->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->cb_accLoginas->FormattingEnabled = true;
			this->cb_accLoginas->ItemHeight = 36;
			this->cb_accLoginas->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Inventory", L"Cashier" });
			this->cb_accLoginas->Location = System::Drawing::Point(43, 378);
			this->cb_accLoginas->Margin = System::Windows::Forms::Padding(4);
			this->cb_accLoginas->Name = L"cb_accLoginas";
			this->cb_accLoginas->Size = System::Drawing::Size(420, 44);
			this->cb_accLoginas->TabIndex = 77;
			// 
			// inp_accPass
			// 
			this->inp_accPass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->inp_accPass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->inp_accPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21));
			this->inp_accPass->ForeColor = System::Drawing::Color::White;
			this->inp_accPass->HideSelection = false;
			this->inp_accPass->Location = System::Drawing::Point(43, 247);
			this->inp_accPass->Margin = System::Windows::Forms::Padding(4);
			this->inp_accPass->Multiline = true;
			this->inp_accPass->Name = L"inp_accPass";
			this->inp_accPass->PasswordChar = '*';
			this->inp_accPass->Size = System::Drawing::Size(421, 44);
			this->inp_accPass->TabIndex = 76;
			this->inp_accPass->WordWrap = false;
			this->inp_accPass->TextChanged += gcnew System::EventHandler(this, &inventory::inp_accPass_TextChanged);
			// 
			// btn_uppAcc
			// 
			this->btn_uppAcc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->btn_uppAcc->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_uppAcc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->btn_uppAcc->ForeColor = System::Drawing::Color::White;
			this->btn_uppAcc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_uppAcc.Image")));
			this->btn_uppAcc->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_uppAcc->Location = System::Drawing::Point(37, 463);
			this->btn_uppAcc->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->btn_uppAcc->Name = L"btn_uppAcc";
			this->btn_uppAcc->Padding = System::Windows::Forms::Padding(13, 0, 13, 0);
			this->btn_uppAcc->Size = System::Drawing::Size(179, 55);
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
			this->btn_addAcc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->btn_addAcc->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->btn_addAcc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_addAcc.Image")));
			this->btn_addAcc->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_addAcc->Location = System::Drawing::Point(280, 463);
			this->btn_addAcc->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->btn_addAcc->Name = L"btn_addAcc";
			this->btn_addAcc->Padding = System::Windows::Forms::Padding(13, 0, 13, 0);
			this->btn_addAcc->Size = System::Drawing::Size(184, 55);
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
			this->btn_accMode->Location = System::Drawing::Point(321, 32);
			this->btn_accMode->Margin = System::Windows::Forms::Padding(4);
			this->btn_accMode->Name = L"btn_accMode";
			this->btn_accMode->Size = System::Drawing::Size(143, 43);
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
			this->inp_accUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21));
			this->inp_accUser->ForeColor = System::Drawing::Color::White;
			this->inp_accUser->HideSelection = false;
			this->inp_accUser->Location = System::Drawing::Point(43, 135);
			this->inp_accUser->Margin = System::Windows::Forms::Padding(4);
			this->inp_accUser->Multiline = true;
			this->inp_accUser->Name = L"inp_accUser";
			this->inp_accUser->Size = System::Drawing::Size(421, 44);
			this->inp_accUser->TabIndex = 72;
			this->inp_accUser->WordWrap = false;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23, System::Drawing::FontStyle::Bold));
			this->label30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label30->Location = System::Drawing::Point(33, 30);
			this->label30->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(170, 44);
			this->label30->TabIndex = 71;
			this->label30->Text = L"Account";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::Color::Transparent;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label34->ForeColor = System::Drawing::Color::White;
			this->label34->Location = System::Drawing::Point(37, 206);
			this->label34->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(120, 29);
			this->label34->TabIndex = 54;
			this->label34->Text = L"Password";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::Transparent;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label35->ForeColor = System::Drawing::Color::White;
			this->label35->Location = System::Drawing::Point(37, 98);
			this->label35->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(124, 29);
			this->label35->TabIndex = 62;
			this->label35->Text = L"Username";
			// 
			// label36
			// 
			this->label36->BackColor = System::Drawing::Color::Transparent;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label36->ForeColor = System::Drawing::Color::White;
			this->label36->Location = System::Drawing::Point(37, 225);
			this->label36->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(373, 32);
			this->label36->TabIndex = 55;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::Transparent;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label37->ForeColor = System::Drawing::Color::White;
			this->label37->Location = System::Drawing::Point(37, 335);
			this->label37->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(106, 29);
			this->label37->TabIndex = 56;
			this->label37->Text = L"Login As";
			// 
			// label38
			// 
			this->label38->BackColor = System::Drawing::Color::Transparent;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label38->ForeColor = System::Drawing::Color::White;
			this->label38->Location = System::Drawing::Point(37, 292);
			this->label38->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(355, 32);
			this->label38->TabIndex = 57;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(485, 47);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(57, 560);
			this->panel3->TabIndex = 75;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->panel4->Controls->Add(this->label16);
			this->panel4->Controls->Add(this->label17);
			this->panel4->Location = System::Drawing::Point(543, 31);
			this->panel4->Margin = System::Windows::Forms::Padding(4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(668, 44);
			this->panel4->TabIndex = 74;
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(3, 9);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(197, 32);
			this->label16->TabIndex = 63;
			this->label16->Text = L"Username";
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(335, 7);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(156, 32);
			this->label17->TabIndex = 62;
			this->label17->Text = L"Staff Role";
			// 
			// tb_account
			// 
			this->tb_account->BackgroundColor = System::Drawing::Color::White;
			this->tb_account->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_account->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->tb_account->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle41->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle41->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			dataGridViewCellStyle41->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle41->Padding = System::Windows::Forms::Padding(1);
			dataGridViewCellStyle41->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			dataGridViewCellStyle41->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle41->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tb_account->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle41;
			this->tb_account->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tb_account->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6
			});
			this->tb_account->Cursor = System::Windows::Forms::Cursors::Hand;
			dataGridViewCellStyle42->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle42->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			dataGridViewCellStyle42->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle42->Padding = System::Windows::Forms::Padding(0, 2, 2, 2);
			dataGridViewCellStyle42->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			dataGridViewCellStyle42->SelectionForeColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle42->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->tb_account->DefaultCellStyle = dataGridViewCellStyle42;
			this->tb_account->Enabled = false;
			this->tb_account->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->tb_account->Location = System::Drawing::Point(488, 47);
			this->tb_account->Margin = System::Windows::Forms::Padding(4);
			this->tb_account->Name = L"tb_account";
			this->tb_account->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			dataGridViewCellStyle43->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle43->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle43->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle43->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle43->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle43->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tb_account->RowHeadersDefaultCellStyle = dataGridViewCellStyle43;
			this->tb_account->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle44->Padding = System::Windows::Forms::Padding(2);
			this->tb_account->RowsDefaultCellStyle = dataGridViewCellStyle44;
			this->tb_account->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->tb_account->Size = System::Drawing::Size(723, 529);
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
			this->tab_sales->Location = System::Drawing::Point(4, 28);
			this->tab_sales->Margin = System::Windows::Forms::Padding(4);
			this->tab_sales->Name = L"tab_sales";
			this->tab_sales->Padding = System::Windows::Forms::Padding(4);
			this->tab_sales->Size = System::Drawing::Size(1603, 689);
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
			this->panel14->Location = System::Drawing::Point(1335, 30);
			this->panel14->Margin = System::Windows::Forms::Padding(4);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(204, 123);
			this->panel14->TabIndex = 82;
			// 
			// lbl_saleSold
			// 
			this->lbl_saleSold->BackColor = System::Drawing::Color::Transparent;
			this->lbl_saleSold->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F));
			this->lbl_saleSold->ForeColor = System::Drawing::Color::White;
			this->lbl_saleSold->Location = System::Drawing::Point(12, 47);
			this->lbl_saleSold->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_saleSold->Name = L"lbl_saleSold";
			this->lbl_saleSold->Size = System::Drawing::Size(161, 52);
			this->lbl_saleSold->TabIndex = 77;
			this->lbl_saleSold->Text = L"0";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->BackColor = System::Drawing::Color::Transparent;
			this->label65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label65->ForeColor = System::Drawing::Color::White;
			this->label65->Location = System::Drawing::Point(16, 14);
			this->label65->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(152, 29);
			this->label65->TabIndex = 76;
			this->label65->Text = L"Product Sold";
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->panel13->Controls->Add(this->lbl_salesTrans);
			this->panel13->Controls->Add(this->label63);
			this->panel13->Location = System::Drawing::Point(1137, 30);
			this->panel13->Margin = System::Windows::Forms::Padding(4);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(184, 123);
			this->panel13->TabIndex = 81;
			// 
			// lbl_salesTrans
			// 
			this->lbl_salesTrans->BackColor = System::Drawing::Color::Transparent;
			this->lbl_salesTrans->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F));
			this->lbl_salesTrans->ForeColor = System::Drawing::Color::White;
			this->lbl_salesTrans->Location = System::Drawing::Point(12, 47);
			this->lbl_salesTrans->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_salesTrans->Name = L"lbl_salesTrans";
			this->lbl_salesTrans->Size = System::Drawing::Size(160, 52);
			this->lbl_salesTrans->TabIndex = 77;
			this->lbl_salesTrans->Text = L"0";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->BackColor = System::Drawing::Color::Transparent;
			this->label63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label63->ForeColor = System::Drawing::Color::White;
			this->label63->Location = System::Drawing::Point(16, 14);
			this->label63->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(151, 29);
			this->label63->TabIndex = 76;
			this->label63->Text = L"Transactions";
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(193)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->panel12->Controls->Add(this->lbl_salesMon);
			this->panel12->Controls->Add(this->label56);
			this->panel12->Location = System::Drawing::Point(816, 30);
			this->panel12->Margin = System::Windows::Forms::Padding(4);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(309, 123);
			this->panel12->TabIndex = 80;
			// 
			// lbl_salesMon
			// 
			this->lbl_salesMon->BackColor = System::Drawing::Color::Transparent;
			this->lbl_salesMon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F));
			this->lbl_salesMon->ForeColor = System::Drawing::Color::White;
			this->lbl_salesMon->Location = System::Drawing::Point(12, 47);
			this->lbl_salesMon->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_salesMon->Name = L"lbl_salesMon";
			this->lbl_salesMon->Size = System::Drawing::Size(276, 52);
			this->lbl_salesMon->TabIndex = 77;
			this->lbl_salesMon->Text = L"0.00";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->BackColor = System::Drawing::Color::Transparent;
			this->label56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label56->ForeColor = System::Drawing::Color::White;
			this->label56->Location = System::Drawing::Point(16, 14);
			this->label56->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(151, 29);
			this->label56->TabIndex = 76;
			this->label56->Text = L"Monthly Sale";
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->panel11->Controls->Add(this->lbl_overSale);
			this->panel11->Controls->Add(this->label24);
			this->panel11->Location = System::Drawing::Point(489, 30);
			this->panel11->Margin = System::Windows::Forms::Padding(4);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(313, 123);
			this->panel11->TabIndex = 79;
			// 
			// lbl_overSale
			// 
			this->lbl_overSale->BackColor = System::Drawing::Color::Transparent;
			this->lbl_overSale->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F));
			this->lbl_overSale->ForeColor = System::Drawing::Color::White;
			this->lbl_overSale->Location = System::Drawing::Point(12, 47);
			this->lbl_overSale->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_overSale->Name = L"lbl_overSale";
			this->lbl_overSale->Size = System::Drawing::Size(295, 52);
			this->lbl_overSale->TabIndex = 77;
			this->lbl_overSale->Text = L"0.00";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label24->ForeColor = System::Drawing::Color::White;
			this->label24->Location = System::Drawing::Point(16, 14);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(145, 29);
			this->label24->TabIndex = 76;
			this->label24->Text = L"Overall Sale";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->panel8->Controls->Add(this->lbl_salesVat);
			this->panel8->Controls->Add(this->label76);
			this->panel8->Controls->Add(this->label19);
			this->panel8->Controls->Add(this->lbl_salesSubtotal);
			this->panel8->Controls->Add(this->btn_salesView);
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
			this->panel8->Margin = System::Windows::Forms::Padding(4);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(444, 684);
			this->panel8->TabIndex = 75;
			// 
			// lbl_salesVat
			// 
			this->lbl_salesVat->BackColor = System::Drawing::Color::Transparent;
			this->lbl_salesVat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->lbl_salesVat->ForeColor = System::Drawing::Color::White;
			this->lbl_salesVat->Location = System::Drawing::Point(38, 423);
			this->lbl_salesVat->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_salesVat->Name = L"lbl_salesVat";
			this->lbl_salesVat->Size = System::Drawing::Size(373, 32);
			this->lbl_salesVat->TabIndex = 79;
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->BackColor = System::Drawing::Color::Transparent;
			this->label76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label76->ForeColor = System::Drawing::Color::White;
			this->label76->Location = System::Drawing::Point(38, 390);
			this->label76->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(47, 29);
			this->label76->TabIndex = 78;
			this->label76->Text = L"Vat";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(38, 317);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(101, 29);
			this->label19->TabIndex = 76;
			this->label19->Text = L"Subtotal";
			this->label19->Click += gcnew System::EventHandler(this, &inventory::label19_Click);
			// 
			// lbl_salesSubtotal
			// 
			this->lbl_salesSubtotal->BackColor = System::Drawing::Color::Transparent;
			this->lbl_salesSubtotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->lbl_salesSubtotal->ForeColor = System::Drawing::Color::White;
			this->lbl_salesSubtotal->Location = System::Drawing::Point(38, 350);
			this->lbl_salesSubtotal->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_salesSubtotal->Name = L"lbl_salesSubtotal";
			this->lbl_salesSubtotal->Size = System::Drawing::Size(365, 32);
			this->lbl_salesSubtotal->TabIndex = 77;
			// 
			// btn_salesView
			// 
			this->btn_salesView->BackColor = System::Drawing::Color::White;
			this->btn_salesView->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_salesView->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->btn_salesView->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->btn_salesView->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_salesView.Image")));
			this->btn_salesView->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_salesView->Location = System::Drawing::Point(272, 596);
			this->btn_salesView->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->btn_salesView->Name = L"btn_salesView";
			this->btn_salesView->Padding = System::Windows::Forms::Padding(13, 0, 13, 0);
			this->btn_salesView->Size = System::Drawing::Size(152, 55);
			this->btn_salesView->TabIndex = 75;
			this->btn_salesView->Text = L"View";
			this->btn_salesView->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_salesView->Click += gcnew System::EventHandler(this, &inventory::btn_salesView_Click);
			// 
			// label25
			// 
			this->label25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label25.Image")));
			this->label25->Location = System::Drawing::Point(357, 121);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(55, 44);
			this->label25->TabIndex = 73;
			// 
			// lbl_salesCode
			// 
			this->lbl_salesCode->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->lbl_salesCode->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lbl_salesCode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21));
			this->lbl_salesCode->ForeColor = System::Drawing::Color::White;
			this->lbl_salesCode->HideSelection = false;
			this->lbl_salesCode->Location = System::Drawing::Point(43, 121);
			this->lbl_salesCode->Margin = System::Windows::Forms::Padding(4);
			this->lbl_salesCode->Multiline = true;
			this->lbl_salesCode->Name = L"lbl_salesCode";
			this->lbl_salesCode->Size = System::Drawing::Size(368, 44);
			this->lbl_salesCode->TabIndex = 72;
			this->lbl_salesCode->WordWrap = false;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23, System::Drawing::FontStyle::Bold));
			this->label27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label27->Location = System::Drawing::Point(33, 26);
			this->label27->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(259, 44);
			this->label27->TabIndex = 71;
			this->label27->Text = L"Sales Report";
			// 
			// lbl_salesQuan
			// 
			this->lbl_salesQuan->BackColor = System::Drawing::Color::Transparent;
			this->lbl_salesQuan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->lbl_salesQuan->ForeColor = System::Drawing::Color::White;
			this->lbl_salesQuan->Location = System::Drawing::Point(39, 493);
			this->lbl_salesQuan->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_salesQuan->Name = L"lbl_salesQuan";
			this->lbl_salesQuan->Size = System::Drawing::Size(373, 32);
			this->lbl_salesQuan->TabIndex = 65;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::Transparent;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label32->ForeColor = System::Drawing::Color::White;
			this->label32->Location = System::Drawing::Point(39, 460);
			this->label32->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(161, 29);
			this->label32->TabIndex = 64;
			this->label32->Text = L"Total Quantity";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::Transparent;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label33->ForeColor = System::Drawing::Color::White;
			this->label33->Location = System::Drawing::Point(37, 179);
			this->label33->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(188, 29);
			this->label33->TabIndex = 54;
			this->label33->Text = L"Customer Name";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::Color::Transparent;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label40->ForeColor = System::Drawing::Color::White;
			this->label40->Location = System::Drawing::Point(37, 84);
			this->label40->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(204, 29);
			this->label40->TabIndex = 62;
			this->label40->Text = L"Transaction Code";
			// 
			// lbl_salesCust
			// 
			this->lbl_salesCust->BackColor = System::Drawing::Color::Transparent;
			this->lbl_salesCust->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->lbl_salesCust->ForeColor = System::Drawing::Color::White;
			this->lbl_salesCust->Location = System::Drawing::Point(37, 211);
			this->lbl_salesCust->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_salesCust->Name = L"lbl_salesCust";
			this->lbl_salesCust->Size = System::Drawing::Size(373, 32);
			this->lbl_salesCust->TabIndex = 55;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->BackColor = System::Drawing::Color::Transparent;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label47->ForeColor = System::Drawing::Color::White;
			this->label47->Location = System::Drawing::Point(37, 247);
			this->label47->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(130, 29);
			this->label47->TabIndex = 56;
			this->label47->Text = L"Total Price";
			// 
			// lbl_salesPrice
			// 
			this->lbl_salesPrice->BackColor = System::Drawing::Color::Transparent;
			this->lbl_salesPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->lbl_salesPrice->ForeColor = System::Drawing::Color::White;
			this->lbl_salesPrice->Location = System::Drawing::Point(37, 278);
			this->lbl_salesPrice->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_salesPrice->Name = L"lbl_salesPrice";
			this->lbl_salesPrice->Size = System::Drawing::Size(355, 32);
			this->lbl_salesPrice->TabIndex = 57;
			this->lbl_salesPrice->Click += gcnew System::EventHandler(this, &inventory::lbl_salesPrice_Click);
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->BackColor = System::Drawing::Color::Transparent;
			this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label52->ForeColor = System::Drawing::Color::White;
			this->label52->Location = System::Drawing::Point(41, 524);
			this->label52->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(63, 29);
			this->label52->TabIndex = 58;
			this->label52->Text = L"Date";
			// 
			// lbl_salesDate
			// 
			this->lbl_salesDate->BackColor = System::Drawing::Color::Transparent;
			this->lbl_salesDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->lbl_salesDate->ForeColor = System::Drawing::Color::White;
			this->lbl_salesDate->Location = System::Drawing::Point(45, 557);
			this->lbl_salesDate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_salesDate->Name = L"lbl_salesDate";
			this->lbl_salesDate->Size = System::Drawing::Size(365, 32);
			this->lbl_salesDate->TabIndex = 59;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::White;
			this->panel9->Location = System::Drawing::Point(432, 75);
			this->panel9->Margin = System::Windows::Forms::Padding(4);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(57, 654);
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
			this->panel10->Location = System::Drawing::Point(489, 175);
			this->panel10->Margin = System::Windows::Forms::Padding(4);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(1049, 44);
			this->panel10->TabIndex = 77;
			// 
			// label58
			// 
			this->label58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label58->ForeColor = System::Drawing::Color::White;
			this->label58->Location = System::Drawing::Point(684, 12);
			this->label58->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(164, 32);
			this->label58->TabIndex = 64;
			this->label58->Text = L"Total Quantity";
			// 
			// label59
			// 
			this->label59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label59->ForeColor = System::Drawing::Color::White;
			this->label59->Location = System::Drawing::Point(4, 12);
			this->label59->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(201, 32);
			this->label59->TabIndex = 63;
			this->label59->Text = L"Transaction Code";
			// 
			// label60
			// 
			this->label60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label60->ForeColor = System::Drawing::Color::White;
			this->label60->Location = System::Drawing::Point(877, 12);
			this->label60->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(156, 32);
			this->label60->TabIndex = 62;
			this->label60->Text = L"Date";
			// 
			// label61
			// 
			this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label61->ForeColor = System::Drawing::Color::White;
			this->label61->Location = System::Drawing::Point(472, 12);
			this->label61->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(164, 32);
			this->label61->TabIndex = 61;
			this->label61->Text = L"Total Price";
			// 
			// label62
			// 
			this->label62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label62->ForeColor = System::Drawing::Color::White;
			this->label62->Location = System::Drawing::Point(200, 12);
			this->label62->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(201, 32);
			this->label62->TabIndex = 60;
			this->label62->Text = L"Customer Name";
			// 
			// tb_sales
			// 
			this->tb_sales->BackgroundColor = System::Drawing::Color::White;
			this->tb_sales->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_sales->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->tb_sales->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle45->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle45->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			dataGridViewCellStyle45->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle45->Padding = System::Windows::Forms::Padding(1);
			dataGridViewCellStyle45->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			dataGridViewCellStyle45->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle45->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tb_sales->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle45;
			this->tb_sales->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tb_sales->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn7,
					this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11
			});
			this->tb_sales->Cursor = System::Windows::Forms::Cursors::Hand;
			dataGridViewCellStyle46->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle46->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			dataGridViewCellStyle46->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle46->Padding = System::Windows::Forms::Padding(0, 2, 2, 2);
			dataGridViewCellStyle46->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			dataGridViewCellStyle46->SelectionForeColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle46->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->tb_sales->DefaultCellStyle = dataGridViewCellStyle46;
			this->tb_sales->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->tb_sales->Location = System::Drawing::Point(432, 189);
			this->tb_sales->Margin = System::Windows::Forms::Padding(4);
			this->tb_sales->Name = L"tb_sales";
			this->tb_sales->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			dataGridViewCellStyle47->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle47->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle47->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle47->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle47->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle47->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tb_sales->RowHeadersDefaultCellStyle = dataGridViewCellStyle47;
			this->tb_sales->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle48->Padding = System::Windows::Forms::Padding(2);
			this->tb_sales->RowsDefaultCellStyle = dataGridViewCellStyle48;
			this->tb_sales->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->tb_sales->Size = System::Drawing::Size(1107, 431);
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
			// tab_transaction
			// 
			this->tab_transaction->BackColor = System::Drawing::Color::White;
			this->tab_transaction->Controls->Add(this->panel21);
			this->tab_transaction->Controls->Add(this->panel19);
			this->tab_transaction->Controls->Add(this->panel20);
			this->tab_transaction->Controls->Add(this->tb_tranProduct);
			this->tab_transaction->Location = System::Drawing::Point(4, 28);
			this->tab_transaction->Margin = System::Windows::Forms::Padding(4);
			this->tab_transaction->Name = L"tab_transaction";
			this->tab_transaction->Padding = System::Windows::Forms::Padding(4);
			this->tab_transaction->Size = System::Drawing::Size(1603, 689);
			this->tab_transaction->TabIndex = 5;
			this->tab_transaction->Text = L"tabPage1";
			// 
			// panel21
			// 
			this->panel21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->panel21->Controls->Add(this->lbl_tranVat);
			this->panel21->Controls->Add(this->label75);
			this->panel21->Controls->Add(this->label77);
			this->panel21->Controls->Add(this->lbl_tranSubtot);
			this->panel21->Controls->Add(this->lbl_tranCode);
			this->panel21->Controls->Add(this->btn_tranDel);
			this->panel21->Controls->Add(this->btn_tranBack);
			this->panel21->Controls->Add(this->label55);
			this->panel21->Controls->Add(this->lbl_tranQuan);
			this->panel21->Controls->Add(this->label64);
			this->panel21->Controls->Add(this->label66);
			this->panel21->Controls->Add(this->label68);
			this->panel21->Controls->Add(this->lbl_tranName);
			this->panel21->Controls->Add(this->label70);
			this->panel21->Controls->Add(this->lbl_tranPrice);
			this->panel21->Controls->Add(this->label74);
			this->panel21->Controls->Add(this->lbl_tranDate);
			this->panel21->Location = System::Drawing::Point(1, 1);
			this->panel21->Margin = System::Windows::Forms::Padding(4);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(444, 684);
			this->panel21->TabIndex = 76;
			// 
			// lbl_tranVat
			// 
			this->lbl_tranVat->BackColor = System::Drawing::Color::Transparent;
			this->lbl_tranVat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->lbl_tranVat->ForeColor = System::Drawing::Color::White;
			this->lbl_tranVat->Location = System::Drawing::Point(44, 421);
			this->lbl_tranVat->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_tranVat->Name = L"lbl_tranVat";
			this->lbl_tranVat->Size = System::Drawing::Size(373, 32);
			this->lbl_tranVat->TabIndex = 83;
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->BackColor = System::Drawing::Color::Transparent;
			this->label75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label75->ForeColor = System::Drawing::Color::White;
			this->label75->Location = System::Drawing::Point(42, 386);
			this->label75->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(47, 29);
			this->label75->TabIndex = 82;
			this->label75->Text = L"Vat";
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->BackColor = System::Drawing::Color::Transparent;
			this->label77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label77->ForeColor = System::Drawing::Color::White;
			this->label77->Location = System::Drawing::Point(40, 313);
			this->label77->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(101, 29);
			this->label77->TabIndex = 80;
			this->label77->Text = L"Subtotal";
			// 
			// lbl_tranSubtot
			// 
			this->lbl_tranSubtot->BackColor = System::Drawing::Color::Transparent;
			this->lbl_tranSubtot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->lbl_tranSubtot->ForeColor = System::Drawing::Color::White;
			this->lbl_tranSubtot->Location = System::Drawing::Point(42, 347);
			this->lbl_tranSubtot->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_tranSubtot->Name = L"lbl_tranSubtot";
			this->lbl_tranSubtot->Size = System::Drawing::Size(365, 32);
			this->lbl_tranSubtot->TabIndex = 81;
			// 
			// lbl_tranCode
			// 
			this->lbl_tranCode->BackColor = System::Drawing::Color::Transparent;
			this->lbl_tranCode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->lbl_tranCode->ForeColor = System::Drawing::Color::White;
			this->lbl_tranCode->Location = System::Drawing::Point(47, 133);
			this->lbl_tranCode->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_tranCode->Name = L"lbl_tranCode";
			this->lbl_tranCode->Size = System::Drawing::Size(373, 32);
			this->lbl_tranCode->TabIndex = 77;
			// 
			// btn_tranDel
			// 
			this->btn_tranDel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btn_tranDel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_tranDel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->btn_tranDel->ForeColor = System::Drawing::Color::White;
			this->btn_tranDel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_tranDel.Image")));
			this->btn_tranDel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_tranDel->Location = System::Drawing::Point(236, 603);
			this->btn_tranDel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->btn_tranDel->Name = L"btn_tranDel";
			this->btn_tranDel->Padding = System::Windows::Forms::Padding(13, 0, 13, 0);
			this->btn_tranDel->Size = System::Drawing::Size(184, 55);
			this->btn_tranDel->TabIndex = 76;
			this->btn_tranDel->Text = L"Delete ";
			this->btn_tranDel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btn_tranBack
			// 
			this->btn_tranBack->BackColor = System::Drawing::Color::White;
			this->btn_tranBack->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_tranBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_tranBack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->btn_tranBack->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->btn_tranBack->Location = System::Drawing::Point(35, 603);
			this->btn_tranBack->Margin = System::Windows::Forms::Padding(4);
			this->btn_tranBack->Name = L"btn_tranBack";
			this->btn_tranBack->Size = System::Drawing::Size(171, 55);
			this->btn_tranBack->TabIndex = 75;
			this->btn_tranBack->Text = L"Back";
			this->btn_tranBack->UseVisualStyleBackColor = false;
			this->btn_tranBack->Click += gcnew System::EventHandler(this, &inventory::btn_tranBack_Click);
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23, System::Drawing::FontStyle::Bold));
			this->label55->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label55->Location = System::Drawing::Point(31, 30);
			this->label55->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(259, 44);
			this->label55->TabIndex = 71;
			this->label55->Text = L"Transactions";
			// 
			// lbl_tranQuan
			// 
			this->lbl_tranQuan->BackColor = System::Drawing::Color::Transparent;
			this->lbl_tranQuan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->lbl_tranQuan->ForeColor = System::Drawing::Color::White;
			this->lbl_tranQuan->Location = System::Drawing::Point(39, 489);
			this->lbl_tranQuan->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_tranQuan->Name = L"lbl_tranQuan";
			this->lbl_tranQuan->Size = System::Drawing::Size(373, 32);
			this->lbl_tranQuan->TabIndex = 65;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->BackColor = System::Drawing::Color::Transparent;
			this->label64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label64->ForeColor = System::Drawing::Color::White;
			this->label64->Location = System::Drawing::Point(39, 457);
			this->label64->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(161, 29);
			this->label64->TabIndex = 64;
			this->label64->Text = L"Total Quantity";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->BackColor = System::Drawing::Color::Transparent;
			this->label66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label66->ForeColor = System::Drawing::Color::White;
			this->label66->Location = System::Drawing::Point(37, 167);
			this->label66->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(188, 29);
			this->label66->TabIndex = 54;
			this->label66->Text = L"Customer Name";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->BackColor = System::Drawing::Color::Transparent;
			this->label68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label68->ForeColor = System::Drawing::Color::White;
			this->label68->Location = System::Drawing::Point(37, 98);
			this->label68->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(204, 29);
			this->label68->TabIndex = 62;
			this->label68->Text = L"Transaction Code";
			// 
			// lbl_tranName
			// 
			this->lbl_tranName->BackColor = System::Drawing::Color::Transparent;
			this->lbl_tranName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->lbl_tranName->ForeColor = System::Drawing::Color::White;
			this->lbl_tranName->Location = System::Drawing::Point(37, 202);
			this->lbl_tranName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_tranName->Name = L"lbl_tranName";
			this->lbl_tranName->Size = System::Drawing::Size(373, 32);
			this->lbl_tranName->TabIndex = 55;
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->BackColor = System::Drawing::Color::Transparent;
			this->label70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label70->ForeColor = System::Drawing::Color::White;
			this->label70->Location = System::Drawing::Point(37, 239);
			this->label70->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(130, 29);
			this->label70->TabIndex = 56;
			this->label70->Text = L"Total Price";
			// 
			// lbl_tranPrice
			// 
			this->lbl_tranPrice->BackColor = System::Drawing::Color::Transparent;
			this->lbl_tranPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->lbl_tranPrice->ForeColor = System::Drawing::Color::White;
			this->lbl_tranPrice->Location = System::Drawing::Point(37, 278);
			this->lbl_tranPrice->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_tranPrice->Name = L"lbl_tranPrice";
			this->lbl_tranPrice->Size = System::Drawing::Size(355, 32);
			this->lbl_tranPrice->TabIndex = 57;
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->BackColor = System::Drawing::Color::Transparent;
			this->label74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label74->ForeColor = System::Drawing::Color::White;
			this->label74->Location = System::Drawing::Point(41, 530);
			this->label74->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(63, 29);
			this->label74->TabIndex = 58;
			this->label74->Text = L"Date";
			// 
			// lbl_tranDate
			// 
			this->lbl_tranDate->BackColor = System::Drawing::Color::Transparent;
			this->lbl_tranDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->lbl_tranDate->ForeColor = System::Drawing::Color::White;
			this->lbl_tranDate->Location = System::Drawing::Point(40, 560);
			this->lbl_tranDate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_tranDate->Name = L"lbl_tranDate";
			this->lbl_tranDate->Size = System::Drawing::Size(365, 32);
			this->lbl_tranDate->TabIndex = 59;
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->panel19->Controls->Add(this->label15);
			this->panel19->Controls->Add(this->label28);
			this->panel19->Controls->Add(this->label29);
			this->panel19->Controls->Add(this->label31);
			this->panel19->Controls->Add(this->label45);
			this->panel19->Location = System::Drawing::Point(487, 22);
			this->panel19->Margin = System::Windows::Forms::Padding(4);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(1081, 44);
			this->panel19->TabIndex = 70;
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(697, 9);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(147, 32);
			this->label15->TabIndex = 64;
			this->label15->Text = L"Total Price";
			// 
			// label28
			// 
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label28->ForeColor = System::Drawing::Color::White;
			this->label28->Location = System::Drawing::Point(3, 9);
			this->label28->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(197, 32);
			this->label28->TabIndex = 63;
			this->label28->Text = L"Barcode";
			// 
			// label29
			// 
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label29->ForeColor = System::Drawing::Color::White;
			this->label29->Location = System::Drawing::Point(865, 9);
			this->label29->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(156, 32);
			this->label29->TabIndex = 62;
			this->label29->Text = L"Quantity";
			// 
			// label31
			// 
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label31->ForeColor = System::Drawing::Color::White;
			this->label31->Location = System::Drawing::Point(497, 9);
			this->label31->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(164, 32);
			this->label31->TabIndex = 61;
			this->label31->Text = L"Product Price";
			// 
			// label45
			// 
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label45->ForeColor = System::Drawing::Color::White;
			this->label45->Location = System::Drawing::Point(229, 9);
			this->label45->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(235, 32);
			this->label45->TabIndex = 60;
			this->label45->Text = L"Product Name";
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::Color::White;
			this->panel20->Location = System::Drawing::Point(429, 66);
			this->panel20->Margin = System::Windows::Forms::Padding(4);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(57, 560);
			this->panel20->TabIndex = 71;
			// 
			// tb_tranProduct
			// 
			this->tb_tranProduct->BackgroundColor = System::Drawing::Color::White;
			this->tb_tranProduct->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_tranProduct->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->tb_tranProduct->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle37->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle37->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			dataGridViewCellStyle37->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle37->Padding = System::Windows::Forms::Padding(1);
			dataGridViewCellStyle37->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			dataGridViewCellStyle37->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle37->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tb_tranProduct->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle37;
			this->tb_tranProduct->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tb_tranProduct->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn12,
					this->dataGridViewTextBoxColumn13, this->dataGridViewTextBoxColumn14, this->dataGridViewTextBoxColumn15, this->dataGridViewTextBoxColumn16
			});
			this->tb_tranProduct->Cursor = System::Windows::Forms::Cursors::Hand;
			dataGridViewCellStyle38->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle38->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			dataGridViewCellStyle38->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle38->Padding = System::Windows::Forms::Padding(0, 2, 2, 2);
			dataGridViewCellStyle38->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			dataGridViewCellStyle38->SelectionForeColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle38->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->tb_tranProduct->DefaultCellStyle = dataGridViewCellStyle38;
			this->tb_tranProduct->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->tb_tranProduct->Location = System::Drawing::Point(433, 38);
			this->tb_tranProduct->Margin = System::Windows::Forms::Padding(4);
			this->tb_tranProduct->Name = L"tb_tranProduct";
			this->tb_tranProduct->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			dataGridViewCellStyle39->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle39->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle39->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle39->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle39->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle39->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tb_tranProduct->RowHeadersDefaultCellStyle = dataGridViewCellStyle39;
			this->tb_tranProduct->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle40->Padding = System::Windows::Forms::Padding(2);
			this->tb_tranProduct->RowsDefaultCellStyle = dataGridViewCellStyle40;
			this->tb_tranProduct->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->tb_tranProduct->Size = System::Drawing::Size(1116, 588);
			this->tb_tranProduct->TabIndex = 69;
			this->tb_tranProduct->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &inventory::tb_viewPro_CellContentClick);
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->dataGridViewTextBoxColumn12->FillWeight = 15;
			this->dataGridViewTextBoxColumn12->HeaderText = L"Barcode";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->Width = 170;
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"Product Name";
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			this->dataGridViewTextBoxColumn13->ReadOnly = true;
			this->dataGridViewTextBoxColumn13->Width = 200;
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"Product Price";
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			this->dataGridViewTextBoxColumn14->Width = 150;
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->HeaderText = L"Quantity";
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			this->dataGridViewTextBoxColumn15->ReadOnly = true;
			this->dataGridViewTextBoxColumn15->Width = 120;
			// 
			// dataGridViewTextBoxColumn16
			// 
			this->dataGridViewTextBoxColumn16->HeaderText = L"Total Price";
			this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
			this->dataGridViewTextBoxColumn16->ReadOnly = true;
			this->dataGridViewTextBoxColumn16->Width = 150;
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
			this->pnl_navBar->Margin = System::Windows::Forms::Padding(4);
			this->pnl_navBar->Name = L"pnl_navBar";
			this->pnl_navBar->Size = System::Drawing::Size(96, 684);
			this->pnl_navBar->TabIndex = 28;
			// 
			// lbl_indicator
			// 
			this->lbl_indicator->BackColor = System::Drawing::Color::White;
			this->lbl_indicator->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 1));
			this->lbl_indicator->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->lbl_indicator->Location = System::Drawing::Point(0, 160);
			this->lbl_indicator->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_indicator->Name = L"lbl_indicator";
			this->lbl_indicator->Size = System::Drawing::Size(7, 69);
			this->lbl_indicator->TabIndex = 65;
			// 
			// btn_sales
			// 
			this->btn_sales->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_sales->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_sales.Image")));
			this->btn_sales->Location = System::Drawing::Point(0, 320);
			this->btn_sales->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->btn_sales->Name = L"btn_sales";
			this->btn_sales->Size = System::Drawing::Size(96, 69);
			this->btn_sales->TabIndex = 67;
			this->btn_sales->Click += gcnew System::EventHandler(this, &inventory::btn_sales_Click);
			// 
			// btn_account
			// 
			this->btn_account->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_account->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_account.Image")));
			this->btn_account->Location = System::Drawing::Point(0, 396);
			this->btn_account->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->btn_account->Name = L"btn_account";
			this->btn_account->Size = System::Drawing::Size(96, 69);
			this->btn_account->TabIndex = 66;
			this->btn_account->Click += gcnew System::EventHandler(this, &inventory::btn_account_Click);
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(95, 169);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(267, 123);
			this->panel2->TabIndex = 58;
			// 
			// btn_dashboard
			// 
			this->btn_dashboard->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_dashboard->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_dashboard.Image")));
			this->btn_dashboard->Location = System::Drawing::Point(0, 160);
			this->btn_dashboard->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->btn_dashboard->Name = L"btn_dashboard";
			this->btn_dashboard->Size = System::Drawing::Size(96, 69);
			this->btn_dashboard->TabIndex = 30;
			this->btn_dashboard->Click += gcnew System::EventHandler(this, &inventory::btn_dashboard_Click_1);
			// 
			// btn_addproduct
			// 
			this->btn_addproduct->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_addproduct->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_addproduct.Image")));
			this->btn_addproduct->Location = System::Drawing::Point(0, 244);
			this->btn_addproduct->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->btn_addproduct->Name = L"btn_addproduct";
			this->btn_addproduct->Size = System::Drawing::Size(96, 69);
			this->btn_addproduct->TabIndex = 29;
			this->btn_addproduct->Click += gcnew System::EventHandler(this, &inventory::btn_addproduct_Click_1);
			// 
			// btn_logout
			// 
			this->btn_logout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_logout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_logout.Image")));
			this->btn_logout->Location = System::Drawing::Point(0, 572);
			this->btn_logout->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->btn_logout->Name = L"btn_logout";
			this->btn_logout->Size = System::Drawing::Size(92, 71);
			this->btn_logout->TabIndex = 28;
			this->btn_logout->Click += gcnew System::EventHandler(this, &inventory::btn_logout_Click);
			// 
			// label26
			// 
			this->label26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label26.Image")));
			this->label26->Location = System::Drawing::Point(0, 14);
			this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(96, 62);
			this->label26->TabIndex = 27;
			// 
			// inventory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1683, 679);
			this->Controls->Add(this->pnl_navBar);
			this->Controls->Add(this->tab_control);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(1683, 679);
			this->MinimumSize = System::Drawing::Size(1683, 679);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inp_proStock))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inp_proPrice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inp_proMinStock))->EndInit();
			this->tab_control->ResumeLayout(false);
			this->tab_editproduct->ResumeLayout(false);
			this->tab_editproduct->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inp_editMinStock))->EndInit();
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
			this->tab_transaction->ResumeLayout(false);
			this->panel21->ResumeLayout(false);
			this->panel21->PerformLayout();
			this->panel19->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tb_tranProduct))->EndInit();
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
			int minStock;
			Double price;
		};
		int productCount;
		
		array<Product>^ pro = gcnew array< Product >(1000);
		array<Product>^ proTable = gcnew array<Product>(1000);

		public: void loadProductFromFile() {
			String^ fileName = "product_tb.txt";
			StreamReader^ din = File::OpenText(fileName);

			productCount = Int32::Parse(din->ReadLine());
			if (productCount > 0) {
				for (int i = 0; i < productCount; i++) {
					pro[i].barcode = din->ReadLine();
					pro[i].name = din->ReadLine();
					pro[i].description = din->ReadLine();
					pro[i].category = din->ReadLine();
					pro[i].minStock = Int32::Parse(din->ReadLine());
					pro[i].stock = Int32::Parse(din->ReadLine());
					pro[i].price = float::Parse(din->ReadLine());
				}
			}
			else {
				MessageBox::Show("The database is empty");
			}

			loadSortCbBox();
			din->Close();

		}
		
		public: void loadTable(String^ query) {
			int i, overStocks = 0, overCrit = 0, proTableCount = 0;
			Double overPrice = 0.0;

			loadProductFromFile();

			String^ findBy = cb_searchType->Text;
			
			if (String::Compare(query, "Default")==0 || String::Compare(findBy, "Default")==0) {
				proTableCount = productCount;
				proTable = pro;
			}
			else if (String::Compare(findBy, "Barcode") == 0) {

				for (i = 0; i < productCount; i++) {

					if (pro[i].barcode->Contains(query)) {
						proTable[proTableCount] = pro[i];
						proTableCount++;
					}

				}

			}
			else if (String::Compare(findBy, "Product Name") == 0) {

				for (i = 0; i < productCount; i++) {

					if (pro[i].name->Contains(query)) {
						proTable[proTableCount] = pro[i];
						proTableCount++;
					}

				}

			}
			else if (String::Compare(findBy, "Category") == 0) {

				for (i = 0; i < productCount; i++) {

					if (pro[i].category->Contains(query)) {
						proTable[proTableCount] = pro[i];
						proTableCount++;
					}

				}

			}

			table_prevProduct->Rows->Clear();
			table_prevProduct->Refresh();

			for (i = 0; i < proTableCount; i++) {
				int index = table_prevProduct->Rows->Add();
				table_prevProduct->Rows[index]->Cells[0]->Value = proTable[i].barcode;
				table_prevProduct->Rows[index]->Cells[1]->Value = proTable[i].name;
				table_prevProduct->Rows[index]->Cells[2]->Value = proTable[i].description;
				table_prevProduct->Rows[index]->Cells[3]->Value = proTable[i].category;
				table_prevProduct->Rows[index]->Cells[4]->Value = proTable[i].stock;
				table_prevProduct->Rows[index]->Cells[5]->Value = proTable[i].price;
				overPrice += proTable[i].price;
				overStocks += proTable[i].stock;
				if (proTable[i].stock <= proTable[i].minStock) {

					table_prevProduct->Rows[index]->DefaultCellStyle->BackColor = ColorTranslator::FromHtml("#ff7979");
					table_prevProduct->Rows[index]->DefaultCellStyle->ForeColor = Color::White;
					overCrit++;
				}
			}
			
			lbl_overPrice->Text = overPrice + "";
			lbl_overStocks->Text = overStocks + "";
			lbl_proCounts->Text = proTableCount + "";
			lbl_overCrit->Text = overCrit + "";
			table_prevProduct->ClearSelection();
		}

		public: void loadSortCbBox() {
			for (int i = 0; i < productCount ; i++) {
				if (!cb_searchCategory->Items->Contains(pro[i].category)) {
					cb_searchCategory->Items->Add(pro[i].category);
				}
			}
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
				sw->WriteLine(pro[i].minStock);
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
			int minStock;
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
					 searched->minStock = pro[i].minStock;
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

			for (int i = 0; i <= productCount; i++) {
				if (String::Compare(pro[i].barcode, barcode) == 0) { toReturn =  true;  break; }
				else { toReturn = false; }
			}
			return toReturn;
		}

		//Add product to database
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			

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
					pro[productCount].minStock = Int32::Parse(inp_proMinStock->Text);
					pro[productCount].stock = Int32::Parse(inp_proStock->Text);
					clearfields();
					MessageBox::Show("The product " + pro[productCount].name + " with barcode of " + pro[productCount].barcode + " added");
					productCount++;
					saveToDatabase();
					lbl_indicator->Location = btn_dashboard->Location;
					loadTable("Default");
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
						searchProduct *product= (value struct searchProduct*) malloc(sizeof(value struct searchProduct));
						product = proSearch(inp_editCode->Text);

						pro[product->idx].name = inp_editName->Text;
						pro[product->idx].description = inp_editDesc->Text;
						pro[product->idx].category = cb_editCategory->Text;
						pro[product->idx].stock = Int32::Parse(inp_editStock->Text);
						pro[product->idx].minStock = Int32::Parse(inp_editMinStock->Text);
						pro[product->idx].price = double::Parse(inp_editPrice->Text);
						

						MessageBox::Show("The product " + pro[product->idx].name + " with barcode of " + pro[product->idx].barcode + " updated");
						saveToDatabase();
						loadTable("Default");
						tab_control->SelectTab(1);
						free(product);
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

					pro[i] = pro[i + 1];
				}

				productCount--;
				saveToDatabase();
				loadTable("Default");
				clearfields();
				free(product);
			}
			else {
				MessageBox::Show("Product Deletion Aborted");
			}
		}

		//Field validation for product
		String ^checkCode, ^checkName, ^checkDesc, ^checkPrice, ^checkStock, ^checkCategory, ^checkMinStock;

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
					checkMinStock = product->minStock.ToString();
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
					inp_editMinStock->Text = checkMinStock;
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

						acc[i] = acc[i + 1];
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
			double totalPrice;
			double subtotal;
			double vat;
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
						sales[i].totalPrice = double::Parse(din->ReadLine());
						sales[i].subtotal = double::Parse(din->ReadLine());
						sales[i].vat = double::Parse(din->ReadLine());
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
			lbl_overSale->Text = overSale.ToString("N2");
			lbl_salesMon->Text = monSale.ToString("N2");
			lbl_salesTrans->Text = saleReportCount.ToString();
			lbl_saleSold->Text = proSold.ToString();
			tb_sales->ClearSelection();
		}

		public: value struct searchReport {
			int transCode;
			String^ customer;
			double totalPrice;
			double subtotal;
			double vat;
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
					searched->subtotal = sales[i].subtotal;
					searched->vat = sales[i].vat;
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
				lbl_salesCode -> Text = repSale->transCode.ToString();
				lbl_salesCust->Text = repSale->customer;
				lbl_salesPrice->Text =repSale->totalPrice.ToString();
				lbl_salesQuan->Text = repSale->totalQuantity.ToString();
				lbl_salesDate->Text = repSale->date;
				lbl_salesSubtotal->Text = repSale->subtotal.ToString();
				lbl_salesVat->Text = repSale->vat.ToString();
				lbl_tranCode->Text = repSale->transCode.ToString();
				lbl_tranName->Text = repSale->customer;
				lbl_tranSubtot->Text = repSale->subtotal.ToString();
				lbl_tranVat->Text = repSale->vat.ToString();
				lbl_tranPrice->Text = repSale->totalPrice.ToString();
				lbl_tranQuan->Text = repSale->totalQuantity.ToString();
				lbl_tranDate->Text = repSale->date;

				cartLoadTable(repSale->transCode.ToString());
				free(repSale);
			}
			else {
				MessageBox::Show("Error on loading fields account");
			}
		}

		
		//Current in cart
		public: value struct cartProduct {
			String^ barcode;
			String^ name;
			int quantity;
			double price;
			double totalPrice;
		};
		int cartCount = 0;

		array<cartProduct>^ cart = gcnew array< cartProduct >(1000);

		public: void cartLoadTable(String^ transCode) {

			tb_tranProduct->Rows->Clear();
			tb_tranProduct->Refresh();
			readCartTextfile(transCode);
			for (int i = 0; i < cartCount; i++) {
				int index = tb_tranProduct->Rows->Add();
				tb_tranProduct->Rows[index]->Cells[0]->Value = cart[i].barcode;
				tb_tranProduct->Rows[index]->Cells[1]->Value = cart[i].name;
				tb_tranProduct->Rows[index]->Cells[2]->Value = cart[i].quantity;
				tb_tranProduct->Rows[index]->Cells[3]->Value = cart[i].price;
				tb_tranProduct->Rows[index]->Cells[4]->Value = cart[i].totalPrice;

			}
			tb_sales->ClearSelection();
		}

		public: void readCartTextfile(String^ transCode) {
			String^ fileName = "salesReport\\" + transCode + ".txt";
			StreamReader^ din = File::OpenText(fileName);

			cartCount = Int32::Parse(din->ReadLine());
			if (cartCount > 0) {
				for (int i = 0; i < cartCount; i++) {
					cart[i].barcode = din->ReadLine();
					cart[i].name = din->ReadLine();
					cart[i].quantity = int::Parse(din->ReadLine());
					cart[i].price = double::Parse(din->ReadLine());
					cart[i].totalPrice = double::Parse(din->ReadLine());
				}
			}
			din->Close();

		}

		// Utilities
		void clearfields() {
			inp_proName->Text = "";
			inp_proCode->Text = "";
			inp_proDesc->Text = "";
			inp_proPrice->Text = "";
			inp_proMinStock->Value = 1;
			inp_proStock->Minimum = inp_proMinStock->Value;
			inp_proStock->Value = 1;
			inp_prevStock->Text = "";
			inp_prevPrice->Text = "";
			inp_prevDesc->Text = "";
			lbl_prevCode->Text = "";
			inp_prevName->Text = "";
			cb_proCategory->SelectedIndex = 0;
			inp_prevCategory->Text = "";
			lbl_searchError->Text = "";
			inp_editCode->Text = "";
			inp_editName->Text = "";
			inp_editDesc->Text = "";
			cb_editCategory->SelectedText = "";
			inp_editPrice->Value = 1;
			inp_editMinStock->Value = 1;
			inp_editStock->Minimum = inp_editMinStock->Value;
			inp_editStock->Value = 1;
			inp_accUser->Text = "";
			inp_accPass->Text = "";
			cb_accLoginas->Text = "";
			checkName = "";
			checkDesc = "";
			checkPrice = "";
			checkStock = "";
			checkCategory = "";
			
		}

		bool validateFields(String^ toValidate) {
			bool isValidated;
			if (String::Compare(toValidate, "update_sameFields") == 0) {
				isValidated = String::Compare(inp_editName->Text, checkName) == 0
					&& String::Compare(inp_editDesc->Text, checkDesc) == 0 && String::Compare(cb_editCategory->Text, checkCategory) == 0
					&& String::Compare(inp_editPrice->Text, checkPrice) == 0 && String::Compare(inp_editStock->Text, checkStock) == 0 
					&& String::Compare(inp_editMinStock->Text, checkMinStock) == 0 ? true : false;
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
			lbl_indicator->Location = btn_dashboard->Location;
		}
		private: System::Void btn_addproduct_Click_1(System::Object^  sender, System::EventArgs^  e) {
			tab_control->SelectTab(0);
			lbl_indicator->Location = btn_addproduct->Location;
		}
		private: System::Void btn_account_Click(System::Object^  sender, System::EventArgs^  e) {
			tab_control->SelectTab(3);
			lbl_indicator->Location = btn_account->Location;
		}
		private: System::Void btn_sales_Click(System::Object^  sender, System::EventArgs^  e) {
			tab_control->SelectTab(4);
			lbl_indicator->Location = btn_sales->Location;
		}

		private: System::Void btn_logout_Click(System::Object^  sender, System::EventArgs^  e) {
			if (MessageBox::Show("Are you sure to exit ?", "Inventory Management System",
				MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				this->Hide();
				obj->Show();

			}
			
		}
		private: System::Void tab_sales_Click(System::Object^  sender, System::EventArgs^  e) {
		}
		
		private: System::Void tb_viewPro_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		}
		
		private: System::Void btn_salesView_Click(System::Object^  sender, System::EventArgs^  e) {

			if (!String::IsNullOrEmpty(lbl_salesCode->Text)) {
				tab_control->SelectTab(5);
			}
			else {
				MessageBox::Show("Please select on sales transaction first.");
			}

		}

		private: System::Void btn_tranBack_Click(System::Object^  sender, System::EventArgs^  e) {
			tab_control->SelectTab(4);
		}
		private: System::Void inp_searchPro_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			String^ toSearch = inp_searchPro->Text;
			if (String::IsNullOrEmpty(toSearch)) {
				loadTable("Default");
			}
			else {
				loadTable(toSearch);
			}
		
		}
		private: System::Void cb_searchType_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			bool show;
			if (cb_searchType->SelectedIndex == 3) {
				show = true;
			}
			else {
				show = false;
			}
			inp_searchPro->Text = "";
			cb_searchCategory->Visible = show;
			inp_searchPro->Visible = !show;
		}
		private: System::Void cb_searchCategory_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			inp_searchPro->Text = cb_searchCategory->Text;
		}

	private: System::Void inp_editMinStock_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		inp_editStock->Minimum = inp_editMinStock->Value;
	}
	private: System::Void inp_proMinStock_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		inp_proStock->Minimum = inp_proMinStock->Value;
	}
private: System::Void lbl_salesPrice_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label19_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void table_prevProduct_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void inp_prevPrice_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void inp_accPass_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}

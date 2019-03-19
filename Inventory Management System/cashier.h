#pragma once
#include <conio.h>
#include <string>


namespace InventoryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for cashier
	/// </summary>
	public ref class cashier : public System::Windows::Forms::Form
	{
		
	public:
		Form ^obj;
	private: System::Windows::Forms::Label^  lbl_barcode;
	public:
	private: System::Windows::Forms::Label^  Barcode;
	private: System::Windows::Forms::Label^  lbl_proCategory;

	private: System::Windows::Forms::Label^  label6;



	private: System::Windows::Forms::Panel^  pnl_mainCashier;
	private: System::Windows::Forms::Panel^  pnl_messageBox;
	private: System::Windows::Forms::Panel^  pnl_payment;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  btn_payment;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  lbl_totalPayment;
	private: System::Windows::Forms::NumericUpDown^  inp_payCash;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;


	private: System::Windows::Forms::Panel^  pnl_voidItem;

	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::TextBox^  inp_loginPass;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TextBox^  inp_userName;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  btn_void;

	private: System::Windows::Forms::TabControl^  tbC_cashier;
	private: System::Windows::Forms::TabPage^  tab_messageBox;
	private: System::Windows::Forms::TabPage^  tab_mainCashier;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  lbl_payChange;

	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  lbl_transNo;

	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  lbl_vatAmount;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  pro_code;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  pro_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  pro_quan;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  pro_price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  pro_total;
	private: System::Windows::Forms::TabPage^  tab_productView;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::DataGridView^  tb_viewPro;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Label^  lbl_prevStock;

	private: System::Windows::Forms::Label^  lbl_prevCat;

	private: System::Windows::Forms::Label^  label41;

	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  lbl_prevName;

	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  lbl_prevDesc;

	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  lbl_prevPrice;

	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::TextBox^  lbl_prevCode;

	private: System::Windows::Forms::Label^  label53;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  cl_categories;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  btn_logout;
	private: System::Windows::Forms::Label^  btn_productView;
	private: System::Windows::Forms::Label^  btn_cashier;
	private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::Label^  lbl_indicator;

	private: System::Windows::Forms::Panel^  pnl_navBar;
	private: System::Windows::Forms::Panel^  pnl_newTrans;

	private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::TextBox^  inp_custName;

private: System::Windows::Forms::Button^  btn_newTrans;

	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::Label^  lbl_newTrans;

private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::Label^  lbl_transName;

private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::NumericUpDown^  inp_quantity;
	public:
		cashier(void)
		{
			
			InitializeComponent();
			
			//
			//TODO: Add the constructor code here
			//
		}

	public:
		cashier(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			IntializeOtherComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~cashier()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::DataGridView^  tb_cashier;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lbl_amountDue;

	private: System::Windows::Forms::TextBox^  inp_proCode;
	private: System::Windows::Forms::Label^  lbl_searchMode;






	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  lbl_proName;
	private: System::Windows::Forms::Label^  lbl_proDesc;


	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  lbl_proPrice;

	private: System::Windows::Forms::Label^  label10;


	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  lbl_proStock;

	private: System::Windows::Forms::Label^  label13;

	private: System::Windows::Forms::Label^  lbl_totalPrice;

	private: System::Windows::Forms::Button^  btn_prevDelete;
	private: System::Windows::Forms::Button^  btn_prevEdit;

private: System::Windows::Forms::Button^  btn_process;





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void IntializeOtherComponent(void) {
			tb_cashier->AllowUserToAddRows = false;
			tb_viewPro->AllowUserToAddRows = false;
			loadProductFromFile();
			newTransPnl();
			resetfields();
			loadSalesFromFile();
		}

		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(cashier::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tb_cashier = (gcnew System::Windows::Forms::DataGridView());
			this->pro_code = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pro_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pro_quan = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pro_price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pro_total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbl_amountDue = (gcnew System::Windows::Forms::Label());
			this->inp_proCode = (gcnew System::Windows::Forms::TextBox());
			this->lbl_searchMode = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lbl_proName = (gcnew System::Windows::Forms::Label());
			this->lbl_proDesc = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lbl_proPrice = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->lbl_proStock = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->lbl_totalPrice = (gcnew System::Windows::Forms::Label());
			this->btn_prevDelete = (gcnew System::Windows::Forms::Button());
			this->btn_prevEdit = (gcnew System::Windows::Forms::Button());
			this->btn_process = (gcnew System::Windows::Forms::Button());
			this->lbl_barcode = (gcnew System::Windows::Forms::Label());
			this->Barcode = (gcnew System::Windows::Forms::Label());
			this->lbl_proCategory = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->inp_quantity = (gcnew System::Windows::Forms::NumericUpDown());
			this->pnl_mainCashier = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->lbl_vatAmount = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pnl_messageBox = (gcnew System::Windows::Forms::Panel());
			this->pnl_payment = (gcnew System::Windows::Forms::Panel());
			this->lbl_transName = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->lbl_transNo = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->lbl_payChange = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->inp_payCash = (gcnew System::Windows::Forms::NumericUpDown());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->lbl_totalPayment = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btn_payment = (gcnew System::Windows::Forms::Button());
			this->pnl_newTrans = (gcnew System::Windows::Forms::Panel());
			this->lbl_newTrans = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->inp_custName = (gcnew System::Windows::Forms::TextBox());
			this->btn_newTrans = (gcnew System::Windows::Forms::Button());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->pnl_voidItem = (gcnew System::Windows::Forms::Panel());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->inp_loginPass = (gcnew System::Windows::Forms::TextBox());
			this->inp_userName = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->btn_void = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->tbC_cashier = (gcnew System::Windows::Forms::TabControl());
			this->tab_mainCashier = (gcnew System::Windows::Forms::TabPage());
			this->tab_messageBox = (gcnew System::Windows::Forms::TabPage());
			this->tab_productView = (gcnew System::Windows::Forms::TabPage());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->lbl_prevCode = (gcnew System::Windows::Forms::TextBox());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->lbl_prevStock = (gcnew System::Windows::Forms::Label());
			this->lbl_prevCat = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->lbl_prevName = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->lbl_prevDesc = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->lbl_prevPrice = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->tb_viewPro = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cl_categories = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->btn_logout = (gcnew System::Windows::Forms::Label());
			this->btn_productView = (gcnew System::Windows::Forms::Label());
			this->btn_cashier = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbl_indicator = (gcnew System::Windows::Forms::Label());
			this->pnl_navBar = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tb_cashier))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inp_quantity))->BeginInit();
			this->pnl_mainCashier->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->pnl_messageBox->SuspendLayout();
			this->pnl_payment->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inp_payCash))->BeginInit();
			this->pnl_newTrans->SuspendLayout();
			this->pnl_voidItem->SuspendLayout();
			this->tbC_cashier->SuspendLayout();
			this->tab_mainCashier->SuspendLayout();
			this->tab_messageBox->SuspendLayout();
			this->tab_productView->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tb_viewPro))->BeginInit();
			this->pnl_navBar->SuspendLayout();
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Roboto", 23, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label7->Location = System::Drawing::Point(12, 10);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(123, 37);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Cashier";
			// 
			// tb_cashier
			// 
			this->tb_cashier->BackgroundColor = System::Drawing::Color::White;
			this->tb_cashier->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_cashier->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->tb_cashier->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Roboto Light", 10));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->Padding = System::Windows::Forms::Padding(1);
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tb_cashier->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->tb_cashier->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tb_cashier->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->pro_code,
					this->pro_name, this->pro_quan, this->pro_price, this->pro_total
			});
			this->tb_cashier->Cursor = System::Windows::Forms::Cursors::Hand;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->Padding = System::Windows::Forms::Padding(0, 2, 2, 2);
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->tb_cashier->DefaultCellStyle = dataGridViewCellStyle2;
			this->tb_cashier->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->tb_cashier->Location = System::Drawing::Point(518, 124);
			this->tb_cashier->Name = L"tb_cashier";
			this->tb_cashier->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->Padding = System::Windows::Forms::Padding(2);
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tb_cashier->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->tb_cashier->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->Padding = System::Windows::Forms::Padding(2);
			this->tb_cashier->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->tb_cashier->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->tb_cashier->Size = System::Drawing::Size(594, 303);
			this->tb_cashier->TabIndex = 27;
			this->tb_cashier->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &cashier::tb_cashier_CellClick);
			this->tb_cashier->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &cashier::tb_cashier_CellContentClick);
			this->tb_cashier->CellLeave += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &cashier::tb_cashier_CellLeave);
			// 
			// pro_code
			// 
			this->pro_code->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->pro_code->FillWeight = 15;
			this->pro_code->HeaderText = L"Barcode";
			this->pro_code->Name = L"pro_code";
			this->pro_code->Visible = false;
			this->pro_code->Width = 5;
			// 
			// pro_name
			// 
			this->pro_name->HeaderText = L"Product Name";
			this->pro_name->Name = L"pro_name";
			this->pro_name->ReadOnly = true;
			this->pro_name->Width = 180;
			// 
			// pro_quan
			// 
			this->pro_quan->HeaderText = L"Quantity";
			this->pro_quan->Name = L"pro_quan";
			this->pro_quan->ReadOnly = true;
			this->pro_quan->Width = 120;
			// 
			// pro_price
			// 
			this->pro_price->HeaderText = L"Product Price";
			this->pro_price->Name = L"pro_price";
			this->pro_price->ReadOnly = true;
			this->pro_price->Width = 120;
			// 
			// pro_total
			// 
			this->pro_total->HeaderText = L"Total";
			this->pro_total->Name = L"pro_total";
			this->pro_total->ReadOnly = true;
			this->pro_total->Width = 132;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(17, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 29);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Amount Due";
			// 
			// lbl_amountDue
			// 
			this->lbl_amountDue->Font = (gcnew System::Drawing::Font(L"Roboto", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_amountDue->ForeColor = System::Drawing::Color::White;
			this->lbl_amountDue->Location = System::Drawing::Point(166, 15);
			this->lbl_amountDue->Name = L"lbl_amountDue";
			this->lbl_amountDue->Size = System::Drawing::Size(229, 35);
			this->lbl_amountDue->TabIndex = 29;
			this->lbl_amountDue->Text = L"1,200.00";
			// 
			// inp_proCode
			// 
			this->inp_proCode->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->inp_proCode->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->inp_proCode->Font = (gcnew System::Drawing::Font(L"Roboto Light", 21));
			this->inp_proCode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_proCode->HideSelection = false;
			this->inp_proCode->Location = System::Drawing::Point(22, 75);
			this->inp_proCode->Multiline = true;
			this->inp_proCode->Name = L"inp_proCode";
			this->inp_proCode->Size = System::Drawing::Size(345, 48);
			this->inp_proCode->TabIndex = 30;
			this->inp_proCode->WordWrap = false;
			this->inp_proCode->TextChanged += gcnew System::EventHandler(this, &cashier::inp_proCode_TextChanged);
			// 
			// lbl_searchMode
			// 
			this->lbl_searchMode->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->lbl_searchMode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->lbl_searchMode->Location = System::Drawing::Point(18, 52);
			this->lbl_searchMode->Name = L"lbl_searchMode";
			this->lbl_searchMode->Size = System::Drawing::Size(119, 23);
			this->lbl_searchMode->TabIndex = 31;
			this->lbl_searchMode->Text = L"Barcode";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label4->Location = System::Drawing::Point(22, 197);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 23);
			this->label4->TabIndex = 32;
			this->label4->Text = L"Product Name";
			// 
			// lbl_proName
			// 
			this->lbl_proName->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->lbl_proName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->lbl_proName->Location = System::Drawing::Point(26, 222);
			this->lbl_proName->Name = L"lbl_proName";
			this->lbl_proName->Size = System::Drawing::Size(280, 26);
			this->lbl_proName->TabIndex = 33;
			// 
			// lbl_proDesc
			// 
			this->lbl_proDesc->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->lbl_proDesc->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->lbl_proDesc->Location = System::Drawing::Point(26, 273);
			this->lbl_proDesc->Name = L"lbl_proDesc";
			this->lbl_proDesc->Size = System::Drawing::Size(266, 26);
			this->lbl_proDesc->TabIndex = 35;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label8->Location = System::Drawing::Point(22, 249);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(106, 23);
			this->label8->TabIndex = 34;
			this->label8->Text = L"Description";
			// 
			// lbl_proPrice
			// 
			this->lbl_proPrice->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->lbl_proPrice->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->lbl_proPrice->Location = System::Drawing::Point(27, 376);
			this->lbl_proPrice->Name = L"lbl_proPrice";
			this->lbl_proPrice->Size = System::Drawing::Size(274, 26);
			this->lbl_proPrice->TabIndex = 37;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label10->Location = System::Drawing::Point(26, 351);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 23);
			this->label10->TabIndex = 36;
			this->label10->Text = L"Price";
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label11->Location = System::Drawing::Point(380, 50);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(75, 26);
			this->label11->TabIndex = 39;
			this->label11->Text = L"Quantity";
			// 
			// lbl_proStock
			// 
			this->lbl_proStock->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->lbl_proStock->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->lbl_proStock->Location = System::Drawing::Point(26, 430);
			this->lbl_proStock->Name = L"lbl_proStock";
			this->lbl_proStock->Size = System::Drawing::Size(280, 26);
			this->lbl_proStock->TabIndex = 41;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label13->Location = System::Drawing::Point(27, 405);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(58, 23);
			this->label13->TabIndex = 40;
			this->label13->Text = L"Stock";
			// 
			// lbl_totalPrice
			// 
			this->lbl_totalPrice->Font = (gcnew System::Drawing::Font(L"Roboto", 25.25F));
			this->lbl_totalPrice->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->lbl_totalPrice->Location = System::Drawing::Point(559, 56);
			this->lbl_totalPrice->Name = L"lbl_totalPrice";
			this->lbl_totalPrice->Size = System::Drawing::Size(229, 57);
			this->lbl_totalPrice->TabIndex = 43;
			this->lbl_totalPrice->Text = L"1,200.00";
			this->lbl_totalPrice->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btn_prevDelete
			// 
			this->btn_prevDelete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_prevDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_prevDelete->Font = (gcnew System::Drawing::Font(L"Roboto Light", 10));
			this->btn_prevDelete->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btn_prevDelete->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_prevDelete.Image")));
			this->btn_prevDelete->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_prevDelete->Location = System::Drawing::Point(1012, 27);
			this->btn_prevDelete->Name = L"btn_prevDelete";
			this->btn_prevDelete->Size = System::Drawing::Size(84, 77);
			this->btn_prevDelete->TabIndex = 45;
			this->btn_prevDelete->Text = L"Remove to Cart";
			this->btn_prevDelete->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_prevDelete->UseVisualStyleBackColor = true;
			this->btn_prevDelete->Click += gcnew System::EventHandler(this, &cashier::btn_prevDelete_Click);
			// 
			// btn_prevEdit
			// 
			this->btn_prevEdit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_prevEdit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_prevEdit->Font = (gcnew System::Drawing::Font(L"Roboto Light", 10));
			this->btn_prevEdit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->btn_prevEdit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_prevEdit.Image")));
			this->btn_prevEdit->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_prevEdit->Location = System::Drawing::Point(912, 26);
			this->btn_prevEdit->Name = L"btn_prevEdit";
			this->btn_prevEdit->Size = System::Drawing::Size(83, 78);
			this->btn_prevEdit->TabIndex = 44;
			this->btn_prevEdit->Text = L"Add to Cart";
			this->btn_prevEdit->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_prevEdit->UseVisualStyleBackColor = true;
			this->btn_prevEdit->Click += gcnew System::EventHandler(this, &cashier::btn_prevEdit_Click);
			// 
			// btn_process
			// 
			this->btn_process->BackColor = System::Drawing::Color::White;
			this->btn_process->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_process->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_process->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			this->btn_process->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->btn_process->Location = System::Drawing::Point(948, 11);
			this->btn_process->Name = L"btn_process";
			this->btn_process->Size = System::Drawing::Size(164, 42);
			this->btn_process->TabIndex = 47;
			this->btn_process->Text = L"Process";
			this->btn_process->UseVisualStyleBackColor = false;
			this->btn_process->Click += gcnew System::EventHandler(this, &cashier::button1_Click);
			// 
			// lbl_barcode
			// 
			this->lbl_barcode->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->lbl_barcode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->lbl_barcode->Location = System::Drawing::Point(25, 170);
			this->lbl_barcode->Name = L"lbl_barcode";
			this->lbl_barcode->Size = System::Drawing::Size(280, 26);
			this->lbl_barcode->TabIndex = 51;
			this->lbl_barcode->Click += gcnew System::EventHandler(this, &cashier::lbl_barcode_Click);
			// 
			// Barcode
			// 
			this->Barcode->AutoSize = true;
			this->Barcode->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->Barcode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->Barcode->Location = System::Drawing::Point(22, 144);
			this->Barcode->Name = L"Barcode";
			this->Barcode->Size = System::Drawing::Size(80, 23);
			this->Barcode->TabIndex = 50;
			this->Barcode->Text = L"Barcode";
			// 
			// lbl_proCategory
			// 
			this->lbl_proCategory->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->lbl_proCategory->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->lbl_proCategory->Location = System::Drawing::Point(26, 326);
			this->lbl_proCategory->Name = L"lbl_proCategory";
			this->lbl_proCategory->Size = System::Drawing::Size(280, 26);
			this->lbl_proCategory->TabIndex = 53;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label6->Location = System::Drawing::Point(23, 302);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 23);
			this->label6->TabIndex = 52;
			this->label6->Text = L"Category";
			// 
			// inp_quantity
			// 
			this->inp_quantity->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->inp_quantity->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->inp_quantity->Font = (gcnew System::Drawing::Font(L"Roboto Light", 25));
			this->inp_quantity->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_quantity->Location = System::Drawing::Point(384, 77);
			this->inp_quantity->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->inp_quantity->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->inp_quantity->Name = L"inp_quantity";
			this->inp_quantity->Size = System::Drawing::Size(102, 44);
			this->inp_quantity->TabIndex = 55;
			this->inp_quantity->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->inp_quantity->ValueChanged += gcnew System::EventHandler(this, &cashier::inp_quantity_ValueChanged);
			// 
			// pnl_mainCashier
			// 
			this->pnl_mainCashier->Controls->Add(this->panel4);
			this->pnl_mainCashier->Controls->Add(this->panel3);
			this->pnl_mainCashier->Controls->Add(this->label16);
			this->pnl_mainCashier->Controls->Add(this->label15);
			this->pnl_mainCashier->Controls->Add(this->label14);
			this->pnl_mainCashier->Controls->Add(this->lbl_vatAmount);
			this->pnl_mainCashier->Controls->Add(this->label3);
			this->pnl_mainCashier->Controls->Add(this->label2);
			this->pnl_mainCashier->Controls->Add(this->panel2);
			this->pnl_mainCashier->Controls->Add(this->tb_cashier);
			this->pnl_mainCashier->Controls->Add(this->btn_prevDelete);
			this->pnl_mainCashier->Controls->Add(this->label7);
			this->pnl_mainCashier->Controls->Add(this->inp_quantity);
			this->pnl_mainCashier->Controls->Add(this->lbl_proCategory);
			this->pnl_mainCashier->Controls->Add(this->lbl_searchMode);
			this->pnl_mainCashier->Controls->Add(this->label6);
			this->pnl_mainCashier->Controls->Add(this->inp_proCode);
			this->pnl_mainCashier->Controls->Add(this->lbl_barcode);
			this->pnl_mainCashier->Controls->Add(this->label4);
			this->pnl_mainCashier->Controls->Add(this->Barcode);
			this->pnl_mainCashier->Controls->Add(this->lbl_proName);
			this->pnl_mainCashier->Controls->Add(this->label8);
			this->pnl_mainCashier->Controls->Add(this->lbl_proDesc);
			this->pnl_mainCashier->Controls->Add(this->label10);
			this->pnl_mainCashier->Controls->Add(this->lbl_proPrice);
			this->pnl_mainCashier->Controls->Add(this->btn_prevEdit);
			this->pnl_mainCashier->Controls->Add(this->label11);
			this->pnl_mainCashier->Controls->Add(this->lbl_totalPrice);
			this->pnl_mainCashier->Controls->Add(this->label13);
			this->pnl_mainCashier->Controls->Add(this->lbl_proStock);
			this->pnl_mainCashier->Location = System::Drawing::Point(4, -1);
			this->pnl_mainCashier->Name = L"pnl_mainCashier";
			this->pnl_mainCashier->Size = System::Drawing::Size(1128, 536);
			this->pnl_mainCashier->TabIndex = 58;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(517, 112);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(43, 316);
			this->panel4->TabIndex = 66;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->panel3->Controls->Add(this->label33);
			this->panel3->Controls->Add(this->label32);
			this->panel3->Controls->Add(this->label31);
			this->panel3->Controls->Add(this->label30);
			this->panel3->Location = System::Drawing::Point(557, 112);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(554, 36);
			this->panel3->TabIndex = 65;
			// 
			// label33
			// 
			this->label33->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label33->ForeColor = System::Drawing::Color::White;
			this->label33->Location = System::Drawing::Point(426, 6);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(123, 26);
			this->label33->TabIndex = 63;
			this->label33->Text = L"Total Price";
			// 
			// label32
			// 
			this->label32->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label32->ForeColor = System::Drawing::Color::White;
			this->label32->Location = System::Drawing::Point(304, 6);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(123, 26);
			this->label32->TabIndex = 62;
			this->label32->Text = L"Original Price";
			// 
			// label31
			// 
			this->label31->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label31->ForeColor = System::Drawing::Color::White;
			this->label31->Location = System::Drawing::Point(181, 5);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(123, 26);
			this->label31->TabIndex = 61;
			this->label31->Text = L"Quantity";
			// 
			// label30
			// 
			this->label30->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label30->ForeColor = System::Drawing::Color::White;
			this->label30->Location = System::Drawing::Point(5, 5);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(176, 26);
			this->label30->TabIndex = 60;
			this->label30->Text = L"Product Name";
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)));
			this->label16->Font = (gcnew System::Drawing::Font(L"Roboto", 1));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label16->Location = System::Drawing::Point(384, 121);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(100, 2);
			this->label16->TabIndex = 64;
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label15->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label15.Image")));
			this->label15->Location = System::Drawing::Point(326, 80);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(41, 38);
			this->label15->TabIndex = 63;
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)));
			this->label14->Font = (gcnew System::Drawing::Font(L"Roboto", 1));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label14->Location = System::Drawing::Point(23, 121);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(344, 2);
			this->label14->TabIndex = 62;
			// 
			// lbl_vatAmount
			// 
			this->lbl_vatAmount->Font = (gcnew System::Drawing::Font(L"Roboto", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_vatAmount->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->lbl_vatAmount->Location = System::Drawing::Point(884, 426);
			this->lbl_vatAmount->Name = L"lbl_vatAmount";
			this->lbl_vatAmount->Size = System::Drawing::Size(230, 40);
			this->lbl_vatAmount->TabIndex = 61;
			this->lbl_vatAmount->Text = L"1,200.00";
			this->lbl_vatAmount->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbl_vatAmount->Click += gcnew System::EventHandler(this, &cashier::label5_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label3->Location = System::Drawing::Point(837, 433);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 23);
			this->label3->TabIndex = 60;
			this->label3->Text = L"Vat";
			this->label3->Click += gcnew System::EventHandler(this, &cashier::label3_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label2->Location = System::Drawing::Point(563, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 26);
			this->label2->TabIndex = 59;
			this->label2->Text = L"Total";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)));
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->lbl_amountDue);
			this->panel2->Controls->Add(this->btn_process);
			this->panel2->Location = System::Drawing::Point(0, 474);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1126, 63);
			this->panel2->TabIndex = 58;
			// 
			// pnl_messageBox
			// 
			this->pnl_messageBox->BackColor = System::Drawing::Color::Gainsboro;
			this->pnl_messageBox->Controls->Add(this->pnl_payment);
			this->pnl_messageBox->Controls->Add(this->pnl_newTrans);
			this->pnl_messageBox->Controls->Add(this->pnl_voidItem);
			this->pnl_messageBox->Location = System::Drawing::Point(0, 0);
			this->pnl_messageBox->Name = L"pnl_messageBox";
			this->pnl_messageBox->Size = System::Drawing::Size(1132, 535);
			this->pnl_messageBox->TabIndex = 58;
			// 
			// pnl_payment
			// 
			this->pnl_payment->BackColor = System::Drawing::Color::White;
			this->pnl_payment->Controls->Add(this->lbl_transName);
			this->pnl_payment->Controls->Add(this->label52);
			this->pnl_payment->Controls->Add(this->lbl_transNo);
			this->pnl_payment->Controls->Add(this->label25);
			this->pnl_payment->Controls->Add(this->label22);
			this->pnl_payment->Controls->Add(this->label23);
			this->pnl_payment->Controls->Add(this->lbl_payChange);
			this->pnl_payment->Controls->Add(this->label18);
			this->pnl_payment->Controls->Add(this->inp_payCash);
			this->pnl_payment->Controls->Add(this->label17);
			this->pnl_payment->Controls->Add(this->lbl_totalPayment);
			this->pnl_payment->Controls->Add(this->label9);
			this->pnl_payment->Controls->Add(this->button4);
			this->pnl_payment->Controls->Add(this->btn_payment);
			this->pnl_payment->Location = System::Drawing::Point(319, 36);
			this->pnl_payment->Name = L"pnl_payment";
			this->pnl_payment->Size = System::Drawing::Size(356, 453);
			this->pnl_payment->TabIndex = 0;
			// 
			// lbl_transName
			// 
			this->lbl_transName->AutoEllipsis = true;
			this->lbl_transName->AutoSize = true;
			this->lbl_transName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->lbl_transName->Font = (gcnew System::Drawing::Font(L"Roboto", 12));
			this->lbl_transName->ForeColor = System::Drawing::Color::White;
			this->lbl_transName->Location = System::Drawing::Point(142, 122);
			this->lbl_transName->MaximumSize = System::Drawing::Size(200, 25);
			this->lbl_transName->Name = L"lbl_transName";
			this->lbl_transName->Padding = System::Windows::Forms::Padding(3);
			this->lbl_transName->Size = System::Drawing::Size(145, 25);
			this->lbl_transName->TabIndex = 67;
			this->lbl_transName->Text = L"Christopher Lugod";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label52->Font = (gcnew System::Drawing::Font(L"Roboto", 12));
			this->label52->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label52->Location = System::Drawing::Point(16, 122);
			this->label52->Name = L"label52";
			this->label52->Padding = System::Windows::Forms::Padding(2);
			this->label52->Size = System::Drawing::Size(129, 25);
			this->label52->TabIndex = 66;
			this->label52->Text = L"Customer Name";
			// 
			// lbl_transNo
			// 
			this->lbl_transNo->AutoSize = true;
			this->lbl_transNo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->lbl_transNo->Font = (gcnew System::Drawing::Font(L"Roboto", 12));
			this->lbl_transNo->ForeColor = System::Drawing::Color::White;
			this->lbl_transNo->Location = System::Drawing::Point(111, 89);
			this->lbl_transNo->Name = L"lbl_transNo";
			this->lbl_transNo->Padding = System::Windows::Forms::Padding(3);
			this->lbl_transNo->Size = System::Drawing::Size(34, 25);
			this->lbl_transNo->TabIndex = 65;
			this->lbl_transNo->Text = L"#1";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label25->Font = (gcnew System::Drawing::Font(L"Roboto", 12));
			this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label25->Location = System::Drawing::Point(16, 89);
			this->label25->Name = L"label25";
			this->label25->Padding = System::Windows::Forms::Padding(2);
			this->label25->Size = System::Drawing::Size(99, 25);
			this->label25->TabIndex = 64;
			this->label25->Text = L"Transaction";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Roboto", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label22->Location = System::Drawing::Point(15, 17);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(245, 29);
			this->label22->TabIndex = 61;
			this->label22->Text = L"Purchase Transaction";
			// 
			// label23
			// 
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Roboto Light", 9.25F));
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label23->Location = System::Drawing::Point(18, 46);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(314, 33);
			this->label23->TabIndex = 63;
			this->label23->Text = L"Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor in"
				L"cididunt ut. ";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbl_payChange
			// 
			this->lbl_payChange->Font = (gcnew System::Drawing::Font(L"Roboto Light", 16.25F));
			this->lbl_payChange->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->lbl_payChange->Location = System::Drawing::Point(18, 347);
			this->lbl_payChange->Name = L"lbl_payChange";
			this->lbl_payChange->Size = System::Drawing::Size(209, 37);
			this->lbl_payChange->TabIndex = 62;
			this->lbl_payChange->Text = L"55.45";
			this->lbl_payChange->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label18->Location = System::Drawing::Point(19, 325);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(120, 32);
			this->label18->TabIndex = 60;
			this->label18->Text = L"Change";
			// 
			// inp_payCash
			// 
			this->inp_payCash->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_payCash->DecimalPlaces = 2;
			this->inp_payCash->Font = (gcnew System::Drawing::Font(L"Roboto Light", 25));
			this->inp_payCash->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_payCash->Location = System::Drawing::Point(21, 262);
			this->inp_payCash->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->inp_payCash->Name = L"inp_payCash";
			this->inp_payCash->Size = System::Drawing::Size(313, 48);
			this->inp_payCash->TabIndex = 58;
			this->inp_payCash->Tag = L"";
			this->inp_payCash->ThousandsSeparator = true;
			this->inp_payCash->ValueChanged += gcnew System::EventHandler(this, &cashier::inp_payCashValueChange);
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label17->Location = System::Drawing::Point(19, 233);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(120, 26);
			this->label17->TabIndex = 57;
			this->label17->Text = L"Cash";
			// 
			// lbl_totalPayment
			// 
			this->lbl_totalPayment->Font = (gcnew System::Drawing::Font(L"Roboto Light", 16.25F));
			this->lbl_totalPayment->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->lbl_totalPayment->Location = System::Drawing::Point(15, 190);
			this->lbl_totalPayment->Name = L"lbl_totalPayment";
			this->lbl_totalPayment->Size = System::Drawing::Size(209, 37);
			this->lbl_totalPayment->TabIndex = 55;
			this->lbl_totalPayment->Text = L"1924.55";
			this->lbl_totalPayment->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Roboto", 14));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label9->Location = System::Drawing::Point(17, 166);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(131, 23);
			this->label9->TabIndex = 47;
			this->label9->Text = L"Total Payment";
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->button4->Location = System::Drawing::Point(25, 396);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(120, 35);
			this->button4->TabIndex = 46;
			this->button4->Text = L"Cancel";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &cashier::button4_Click);
			// 
			// btn_payment
			// 
			this->btn_payment->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->btn_payment->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_payment->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_payment->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			this->btn_payment->ForeColor = System::Drawing::Color::White;
			this->btn_payment->Location = System::Drawing::Point(192, 396);
			this->btn_payment->Name = L"btn_payment";
			this->btn_payment->Size = System::Drawing::Size(140, 37);
			this->btn_payment->TabIndex = 45;
			this->btn_payment->Text = L"Pay";
			this->btn_payment->UseVisualStyleBackColor = false;
			this->btn_payment->Click += gcnew System::EventHandler(this, &cashier::btn_payment_Click);
			// 
			// pnl_newTrans
			// 
			this->pnl_newTrans->BackColor = System::Drawing::Color::White;
			this->pnl_newTrans->Controls->Add(this->lbl_newTrans);
			this->pnl_newTrans->Controls->Add(this->label47);
			this->pnl_newTrans->Controls->Add(this->label27);
			this->pnl_newTrans->Controls->Add(this->inp_custName);
			this->pnl_newTrans->Controls->Add(this->btn_newTrans);
			this->pnl_newTrans->Controls->Add(this->label40);
			this->pnl_newTrans->Controls->Add(this->label45);
			this->pnl_newTrans->Location = System::Drawing::Point(278, 129);
			this->pnl_newTrans->Name = L"pnl_newTrans";
			this->pnl_newTrans->Size = System::Drawing::Size(427, 275);
			this->pnl_newTrans->TabIndex = 65;
			this->pnl_newTrans->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &cashier::panel8_Paint);
			// 
			// lbl_newTrans
			// 
			this->lbl_newTrans->AutoSize = true;
			this->lbl_newTrans->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->lbl_newTrans->Font = (gcnew System::Drawing::Font(L"Roboto", 12));
			this->lbl_newTrans->ForeColor = System::Drawing::Color::White;
			this->lbl_newTrans->Location = System::Drawing::Point(114, 179);
			this->lbl_newTrans->Name = L"lbl_newTrans";
			this->lbl_newTrans->Padding = System::Windows::Forms::Padding(3);
			this->lbl_newTrans->Size = System::Drawing::Size(34, 25);
			this->lbl_newTrans->TabIndex = 67;
			this->lbl_newTrans->Text = L"#1";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label47->Font = (gcnew System::Drawing::Font(L"Roboto", 12));
			this->label47->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label47->Location = System::Drawing::Point(19, 179);
			this->label47->Name = L"label47";
			this->label47->Padding = System::Windows::Forms::Padding(2);
			this->label47->Size = System::Drawing::Size(99, 25);
			this->label47->TabIndex = 66;
			this->label47->Text = L"Transaction";
			// 
			// label27
			// 
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->Font = (gcnew System::Drawing::Font(L"Roboto Light", 9.25F));
			this->label27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label27->Location = System::Drawing::Point(18, 53);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(393, 33);
			this->label27->TabIndex = 64;
			this->label27->Text = L"Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor in"
				L"cididunt ut. ";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// inp_custName
			// 
			this->inp_custName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_custName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_custName->Font = (gcnew System::Drawing::Font(L"Roboto Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inp_custName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_custName->HideSelection = false;
			this->inp_custName->Location = System::Drawing::Point(19, 125);
			this->inp_custName->Multiline = true;
			this->inp_custName->Name = L"inp_custName";
			this->inp_custName->Size = System::Drawing::Size(391, 46);
			this->inp_custName->TabIndex = 49;
			this->inp_custName->WordWrap = false;
			// 
			// btn_newTrans
			// 
			this->btn_newTrans->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_newTrans->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_newTrans->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			this->btn_newTrans->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->btn_newTrans->Location = System::Drawing::Point(235, 224);
			this->btn_newTrans->Name = L"btn_newTrans";
			this->btn_newTrans->Size = System::Drawing::Size(176, 35);
			this->btn_newTrans->TabIndex = 53;
			this->btn_newTrans->Text = L"Enter";
			this->btn_newTrans->UseVisualStyleBackColor = true;
			this->btn_newTrans->Click += gcnew System::EventHandler(this, &cashier::btn_newTrans_Click);
			// 
			// label40
			// 
			this->label40->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label40->Location = System::Drawing::Point(16, 99);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(370, 26);
			this->label40->TabIndex = 50;
			this->label40->Text = L"Customer Name";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Roboto", 24));
			this->label45->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label45->Location = System::Drawing::Point(13, 14);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(256, 38);
			this->label45->TabIndex = 48;
			this->label45->Text = L"New Transaction";
			// 
			// pnl_voidItem
			// 
			this->pnl_voidItem->BackColor = System::Drawing::Color::White;
			this->pnl_voidItem->Controls->Add(this->label24);
			this->pnl_voidItem->Controls->Add(this->inp_loginPass);
			this->pnl_voidItem->Controls->Add(this->inp_userName);
			this->pnl_voidItem->Controls->Add(this->button5);
			this->pnl_voidItem->Controls->Add(this->btn_void);
			this->pnl_voidItem->Controls->Add(this->label20);
			this->pnl_voidItem->Controls->Add(this->label21);
			this->pnl_voidItem->Controls->Add(this->label19);
			this->pnl_voidItem->Location = System::Drawing::Point(277, 93);
			this->pnl_voidItem->Name = L"pnl_voidItem";
			this->pnl_voidItem->Size = System::Drawing::Size(429, 333);
			this->pnl_voidItem->TabIndex = 2;
			// 
			// label24
			// 
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Font = (gcnew System::Drawing::Font(L"Roboto Light", 9.25F));
			this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label24->Location = System::Drawing::Point(18, 53);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(393, 33);
			this->label24->TabIndex = 64;
			this->label24->Text = L"Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor in"
				L"cididunt ut. ";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// inp_loginPass
			// 
			this->inp_loginPass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_loginPass->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_loginPass->Font = (gcnew System::Drawing::Font(L"Roboto Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inp_loginPass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_loginPass->HideSelection = false;
			this->inp_loginPass->Location = System::Drawing::Point(20, 205);
			this->inp_loginPass->Multiline = true;
			this->inp_loginPass->Name = L"inp_loginPass";
			this->inp_loginPass->PasswordChar = '*';
			this->inp_loginPass->Size = System::Drawing::Size(391, 40);
			this->inp_loginPass->TabIndex = 51;
			this->inp_loginPass->WordWrap = false;
			// 
			// inp_userName
			// 
			this->inp_userName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_userName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_userName->Font = (gcnew System::Drawing::Font(L"Roboto Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inp_userName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_userName->HideSelection = false;
			this->inp_userName->Location = System::Drawing::Point(20, 129);
			this->inp_userName->Multiline = true;
			this->inp_userName->Name = L"inp_userName";
			this->inp_userName->Size = System::Drawing::Size(391, 40);
			this->inp_userName->TabIndex = 49;
			this->inp_userName->WordWrap = false;
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button5->Location = System::Drawing::Point(20, 273);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(120, 35);
			this->button5->TabIndex = 54;
			this->button5->Text = L"Cancel";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &cashier::button5_Click);
			// 
			// btn_void
			// 
			this->btn_void->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_void->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_void->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			this->btn_void->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->btn_void->Location = System::Drawing::Point(235, 273);
			this->btn_void->Name = L"btn_void";
			this->btn_void->Size = System::Drawing::Size(176, 35);
			this->btn_void->TabIndex = 53;
			this->btn_void->Text = L"Void Item";
			this->btn_void->UseVisualStyleBackColor = true;
			this->btn_void->Click += gcnew System::EventHandler(this, &cashier::button6_Click);
			// 
			// label20
			// 
			this->label20->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label20->Location = System::Drawing::Point(17, 181);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(370, 26);
			this->label20->TabIndex = 52;
			this->label20->Text = L"Password";
			// 
			// label21
			// 
			this->label21->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label21->Location = System::Drawing::Point(17, 103);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(370, 26);
			this->label21->TabIndex = 50;
			this->label21->Text = L"Username";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Roboto", 24));
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label19->Location = System::Drawing::Point(13, 14);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(152, 38);
			this->label19->TabIndex = 48;
			this->label19->Text = L"Void Item";
			// 
			// tbC_cashier
			// 
			this->tbC_cashier->Controls->Add(this->tab_mainCashier);
			this->tbC_cashier->Controls->Add(this->tab_messageBox);
			this->tbC_cashier->Controls->Add(this->tab_productView);
			this->tbC_cashier->Location = System::Drawing::Point(64, -22);
			this->tbC_cashier->Name = L"tbC_cashier";
			this->tbC_cashier->SelectedIndex = 0;
			this->tbC_cashier->Size = System::Drawing::Size(1136, 580);
			this->tbC_cashier->TabIndex = 3;
			// 
			// tab_mainCashier
			// 
			this->tab_mainCashier->Controls->Add(this->pnl_mainCashier);
			this->tab_mainCashier->Location = System::Drawing::Point(4, 22);
			this->tab_mainCashier->Name = L"tab_mainCashier";
			this->tab_mainCashier->Padding = System::Windows::Forms::Padding(3);
			this->tab_mainCashier->Size = System::Drawing::Size(1128, 554);
			this->tab_mainCashier->TabIndex = 1;
			this->tab_mainCashier->Text = L"tabPage2";
			this->tab_mainCashier->UseVisualStyleBackColor = true;
			// 
			// tab_messageBox
			// 
			this->tab_messageBox->Controls->Add(this->pnl_messageBox);
			this->tab_messageBox->Location = System::Drawing::Point(4, 22);
			this->tab_messageBox->Name = L"tab_messageBox";
			this->tab_messageBox->Padding = System::Windows::Forms::Padding(3);
			this->tab_messageBox->Size = System::Drawing::Size(1128, 554);
			this->tab_messageBox->TabIndex = 0;
			this->tab_messageBox->Text = L"tabPage1";
			this->tab_messageBox->UseVisualStyleBackColor = true;
			// 
			// tab_productView
			// 
			this->tab_productView->Controls->Add(this->panel7);
			this->tab_productView->Controls->Add(this->panel5);
			this->tab_productView->Controls->Add(this->panel6);
			this->tab_productView->Controls->Add(this->tb_viewPro);
			this->tab_productView->Controls->Add(this->label34);
			this->tab_productView->Location = System::Drawing::Point(4, 22);
			this->tab_productView->Name = L"tab_productView";
			this->tab_productView->Padding = System::Windows::Forms::Padding(3);
			this->tab_productView->Size = System::Drawing::Size(1128, 554);
			this->tab_productView->TabIndex = 2;
			this->tab_productView->Text = L"tabPage1";
			this->tab_productView->UseVisualStyleBackColor = true;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->panel7->Controls->Add(this->label42);
			this->panel7->Controls->Add(this->lbl_prevCode);
			this->panel7->Controls->Add(this->label53);
			this->panel7->Controls->Add(this->lbl_prevStock);
			this->panel7->Controls->Add(this->lbl_prevCat);
			this->panel7->Controls->Add(this->label41);
			this->panel7->Controls->Add(this->label43);
			this->panel7->Controls->Add(this->label44);
			this->panel7->Controls->Add(this->lbl_prevName);
			this->panel7->Controls->Add(this->label46);
			this->panel7->Controls->Add(this->lbl_prevDesc);
			this->panel7->Controls->Add(this->label48);
			this->panel7->Controls->Add(this->lbl_prevPrice);
			this->panel7->Controls->Add(this->label50);
			this->panel7->Controls->Add(this->label51);
			this->panel7->Location = System::Drawing::Point(799, 0);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(333, 535);
			this->panel7->TabIndex = 70;
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
			this->label53->Size = System::Drawing::Size(129, 37);
			this->label53->TabIndex = 71;
			this->label53->Text = L"Preview";
			// 
			// lbl_prevStock
			// 
			this->lbl_prevStock->BackColor = System::Drawing::Color::Transparent;
			this->lbl_prevStock->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->lbl_prevStock->ForeColor = System::Drawing::Color::White;
			this->lbl_prevStock->Location = System::Drawing::Point(28, 428);
			this->lbl_prevStock->Name = L"lbl_prevStock";
			this->lbl_prevStock->Size = System::Drawing::Size(274, 26);
			this->lbl_prevStock->TabIndex = 66;
			// 
			// lbl_prevCat
			// 
			this->lbl_prevCat->BackColor = System::Drawing::Color::Transparent;
			this->lbl_prevCat->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->lbl_prevCat->ForeColor = System::Drawing::Color::White;
			this->lbl_prevCat->Location = System::Drawing::Point(28, 298);
			this->lbl_prevCat->Name = L"lbl_prevCat";
			this->lbl_prevCat->Size = System::Drawing::Size(280, 26);
			this->lbl_prevCat->TabIndex = 65;
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
			// lbl_prevName
			// 
			this->lbl_prevName->BackColor = System::Drawing::Color::Transparent;
			this->lbl_prevName->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->lbl_prevName->ForeColor = System::Drawing::Color::White;
			this->lbl_prevName->Location = System::Drawing::Point(28, 183);
			this->lbl_prevName->Name = L"lbl_prevName";
			this->lbl_prevName->Size = System::Drawing::Size(280, 26);
			this->lbl_prevName->TabIndex = 55;
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
			// lbl_prevDesc
			// 
			this->lbl_prevDesc->BackColor = System::Drawing::Color::Transparent;
			this->lbl_prevDesc->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->lbl_prevDesc->ForeColor = System::Drawing::Color::White;
			this->lbl_prevDesc->Location = System::Drawing::Point(28, 237);
			this->lbl_prevDesc->Name = L"lbl_prevDesc";
			this->lbl_prevDesc->Size = System::Drawing::Size(266, 26);
			this->lbl_prevDesc->TabIndex = 57;
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
			// lbl_prevPrice
			// 
			this->lbl_prevPrice->BackColor = System::Drawing::Color::Transparent;
			this->lbl_prevPrice->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->lbl_prevPrice->ForeColor = System::Drawing::Color::White;
			this->lbl_prevPrice->Location = System::Drawing::Point(28, 361);
			this->lbl_prevPrice->Name = L"lbl_prevPrice";
			this->lbl_prevPrice->Size = System::Drawing::Size(274, 26);
			this->lbl_prevPrice->TabIndex = 59;
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
			this->panel5->Location = System::Drawing::Point(-18, 69);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(43, 455);
			this->panel5->TabIndex = 69;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->panel6->Controls->Add(this->label39);
			this->panel6->Controls->Add(this->label35);
			this->panel6->Controls->Add(this->label36);
			this->panel6->Controls->Add(this->label37);
			this->panel6->Controls->Add(this->label38);
			this->panel6->Location = System::Drawing::Point(25, 57);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(724, 36);
			this->panel6->TabIndex = 68;
			// 
			// label39
			// 
			this->label39->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label39->ForeColor = System::Drawing::Color::White;
			this->label39->Location = System::Drawing::Point(484, 7);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(123, 26);
			this->label39->TabIndex = 64;
			this->label39->Text = L"Stocks";
			// 
			// label35
			// 
			this->label35->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label35->ForeColor = System::Drawing::Color::White;
			this->label35->Location = System::Drawing::Point(2, 7);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(148, 26);
			this->label35->TabIndex = 63;
			this->label35->Text = L"Barcode";
			// 
			// label36
			// 
			this->label36->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label36->ForeColor = System::Drawing::Color::White;
			this->label36->Location = System::Drawing::Point(607, 7);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(117, 26);
			this->label36->TabIndex = 62;
			this->label36->Text = L"Price";
			// 
			// label37
			// 
			this->label37->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label37->ForeColor = System::Drawing::Color::White;
			this->label37->Location = System::Drawing::Point(337, 6);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(123, 26);
			this->label37->TabIndex = 61;
			this->label37->Text = L"Category";
			// 
			// label38
			// 
			this->label38->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label38->ForeColor = System::Drawing::Color::White;
			this->label38->Location = System::Drawing::Point(155, 7);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(176, 26);
			this->label38->TabIndex = 60;
			this->label38->Text = L"Product Name";
			// 
			// tb_viewPro
			// 
			this->tb_viewPro->BackgroundColor = System::Drawing::Color::White;
			this->tb_viewPro->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_viewPro->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->tb_viewPro->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Roboto Light", 10));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->Padding = System::Windows::Forms::Padding(1);
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tb_viewPro->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->tb_viewPro->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tb_viewPro->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->cl_categories, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4
			});
			this->tb_viewPro->Cursor = System::Windows::Forms::Cursors::Hand;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle6->Padding = System::Windows::Forms::Padding(0, 2, 2, 2);
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->tb_viewPro->DefaultCellStyle = dataGridViewCellStyle6;
			this->tb_viewPro->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->tb_viewPro->Location = System::Drawing::Point(-16, 69);
			this->tb_viewPro->Name = L"tb_viewPro";
			this->tb_viewPro->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tb_viewPro->RowHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->tb_viewPro->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle8->Padding = System::Windows::Forms::Padding(2);
			this->tb_viewPro->RowsDefaultCellStyle = dataGridViewCellStyle8;
			this->tb_viewPro->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->tb_viewPro->Size = System::Drawing::Size(763, 430);
			this->tb_viewPro->TabIndex = 67;
			this->tb_viewPro->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &cashier::tb_viewPro_CellClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->dataGridViewTextBoxColumn1->FillWeight = 15;
			this->dataGridViewTextBoxColumn1->HeaderText = L"Barcode";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 150;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Product Name";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 180;
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
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Roboto", 23, System::Drawing::FontStyle::Bold));
			this->label34->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label34->Location = System::Drawing::Point(20, 12);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(229, 37);
			this->label34->TabIndex = 26;
			this->label34->Text = L"Product Viewer";
			// 
			// label12
			// 
			this->label12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label12.Image")));
			this->label12->Location = System::Drawing::Point(3, 11);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(66, 50);
			this->label12->TabIndex = 27;
			// 
			// btn_logout
			// 
			this->btn_logout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_logout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_logout.Image")));
			this->btn_logout->Location = System::Drawing::Point(0, 465);
			this->btn_logout->Name = L"btn_logout";
			this->btn_logout->Size = System::Drawing::Size(69, 58);
			this->btn_logout->TabIndex = 28;
			this->btn_logout->Click += gcnew System::EventHandler(this, &cashier::btn_logout_Click);
			// 
			// btn_productView
			// 
			this->btn_productView->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_productView->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_productView.Image")));
			this->btn_productView->Location = System::Drawing::Point(3, 195);
			this->btn_productView->Name = L"btn_productView";
			this->btn_productView->Size = System::Drawing::Size(66, 56);
			this->btn_productView->TabIndex = 29;
			this->btn_productView->Click += gcnew System::EventHandler(this, &cashier::btn_productView_Click);
			// 
			// btn_cashier
			// 
			this->btn_cashier->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_cashier->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_cashier.Image")));
			this->btn_cashier->Location = System::Drawing::Point(3, 130);
			this->btn_cashier->Name = L"btn_cashier";
			this->btn_cashier->Size = System::Drawing::Size(66, 56);
			this->btn_cashier->TabIndex = 30;
			this->btn_cashier->Click += gcnew System::EventHandler(this, &cashier::btn_cashier_Click);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(71, 137);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 100);
			this->panel1->TabIndex = 58;
			// 
			// lbl_indicator
			// 
			this->lbl_indicator->BackColor = System::Drawing::Color::White;
			this->lbl_indicator->Font = (gcnew System::Drawing::Font(L"Roboto", 1));
			this->lbl_indicator->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->lbl_indicator->Location = System::Drawing::Point(-1, 130);
			this->lbl_indicator->Name = L"lbl_indicator";
			this->lbl_indicator->Size = System::Drawing::Size(5, 56);
			this->lbl_indicator->TabIndex = 65;
			this->lbl_indicator->Click += gcnew System::EventHandler(this, &cashier::lbl_indicator_Click);
			// 
			// pnl_navBar
			// 
			this->pnl_navBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->pnl_navBar->Controls->Add(this->lbl_indicator);
			this->pnl_navBar->Controls->Add(this->panel1);
			this->pnl_navBar->Controls->Add(this->btn_cashier);
			this->pnl_navBar->Controls->Add(this->btn_productView);
			this->pnl_navBar->Controls->Add(this->btn_logout);
			this->pnl_navBar->Controls->Add(this->label12);
			this->pnl_navBar->Location = System::Drawing::Point(0, 0);
			this->pnl_navBar->Name = L"pnl_navBar";
			this->pnl_navBar->Size = System::Drawing::Size(72, 535);
			this->pnl_navBar->TabIndex = 4;
			// 
			// cashier
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1195, 535);
			this->Controls->Add(this->pnl_navBar);
			this->Controls->Add(this->tbC_cashier);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"cashier";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Cashier";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tb_cashier))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inp_quantity))->EndInit();
			this->pnl_mainCashier->ResumeLayout(false);
			this->pnl_mainCashier->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->pnl_messageBox->ResumeLayout(false);
			this->pnl_payment->ResumeLayout(false);
			this->pnl_payment->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inp_payCash))->EndInit();
			this->pnl_newTrans->ResumeLayout(false);
			this->pnl_newTrans->PerformLayout();
			this->pnl_voidItem->ResumeLayout(false);
			this->pnl_voidItem->PerformLayout();
			this->tbC_cashier->ResumeLayout(false);
			this->tab_mainCashier->ResumeLayout(false);
			this->tab_messageBox->ResumeLayout(false);
			this->tab_productView->ResumeLayout(false);
			this->tab_productView->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tb_viewPro))->EndInit();
			this->pnl_navBar->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	//Global Declaration of Variables
		//For Products
		String ^barcode, ^proName, ^proDesc;
		double proPrice=0.0, currentPrice=0.0;
		int proStock;

		//For Values
		double tax= .12, totalPrice=0.0 , amountDue=0.0, vat=0.0;
		int proQuan = 1;
		int showRoll = 0;

		//Sales Report
		String ^customerName;
		int transCode;

		//Struct of Products
		public: value struct Product {
			String^ barcode;
			String^ name;
			String^ description;
			String^ category;
			int stock;
			double price;
		};

		//Count of products in textfile
		int productCount;

		//Array of Structure for products
		array<Product>^ pro = gcnew array< Product >(1000);

		//Load the array from textfile
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
						pro[i].price = double::Parse(din->ReadLine());
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

		//Searching product
		public: value struct searchProduct {
			String^ barcode;
			String^ name;
			String^ description;
			String^ category;
			int stock;
			double price;
			int idx;
		};

		//Load Product View 
		public: void loadTable(String^ query) {
			
			tb_viewPro->Rows->Clear();
			tb_viewPro->Refresh();
			loadProductFromFile();
			for (int i = 0; i < productCount; i++) {
				int index = tb_viewPro->Rows->Add();
				tb_viewPro->Rows[index]->Cells[0]->Value = pro[i].barcode;
				tb_viewPro->Rows[index]->Cells[1]->Value = pro[i].name;
				tb_viewPro->Rows[index]->Cells[2]->Value = pro[i].category;
				tb_viewPro->Rows[index]->Cells[3]->Value = pro[i].stock;
				tb_viewPro->Rows[index]->Cells[4]->Value = pro[i].price;
			}

		}

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
					break;
				}
				else {
					searched->barcode = "NULL";
				}

			}
			return searched;
			free(searched);
		}

		//Current in cart
		public: value struct cartProduct {
			String^ barcode;
			String^ name;
			int quantity;
			double price;
			double totalPrice;
			double vat;
		};
		int cartCount=0;

		array<cartProduct>^ cart = gcnew array< cartProduct >(1000);
	

		private: System::Void inp_proCode_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			String^ toSearch = inp_proCode->Text;
			if (!String::IsNullOrEmpty(toSearch)) {

				searchProduct *product = (value struct searchProduct*) malloc(sizeof(value struct searchProduct));
				product = proSearch(toSearch);
				
				if (!String::Compare(product->barcode, "NULL")==0)
				{
					barcode = product->barcode;
					proName = product->name;
					proDesc = product->description;
					currentPrice = product->price;
					proStock = product->stock;
					lbl_barcode->Text = barcode;
					lbl_proName->Text = proName;
					lbl_proDesc->Text = proDesc;
					lbl_proCategory->Text = product->category;
					lbl_proPrice->Text = "" + proPrice;
					lbl_proStock->Text = "" + proStock;
					computeTotal(proQuan);
					toDisableAdd(true);
				}
				free(product);
			}
			else {
				resetfields();
				toDisableAdd(false);
			}
			
		}

		private: System::Void btn_prevEdit_Click(System::Object^  sender, System::EventArgs^  e) {
			int index = checkBarcodeExist(barcode);

			if (!checkStock(Int32::Parse(inp_quantity->Text))) {
				if (!(index==-1)) {
					int idxQuan = cart[index].quantity, idxTotal;
					idxQuan += proQuan;
					idxTotal = idxQuan * currentPrice;
					cart[index].quantity = idxQuan;
					cart[cartCount].vat = (currentPrice * idxQuan) * tax;
					cart[index].totalPrice = idxTotal + cart[cartCount].vat;
					
				}
				else {
					cart[cartCount].barcode = barcode;
					cart[cartCount].name = proName;
					cart[cartCount].quantity = proQuan;
					cart[cartCount].price = currentPrice;
					cart[cartCount].vat = currentPrice * tax;
					cart[cartCount].totalPrice = proPrice + cart[cartCount].vat;

					cartCount++;
				}
				resetfields();
				loadCartTable();
			}
			else {
				MessageBox::Show("Insufficient Stock");
			}
			

			
		}

		public: bool checkStock(int quan) {
			return quan > proStock ? true : false;
		}
		
		public: void loadCartTable() {
			tb_cashier->Rows->Clear();
			for (int i = 0; i <cartCount; i++) {
				int index = tb_cashier->Rows->Add();
				int quantity = Int32::Parse(inp_quantity->Text);
				tb_cashier->Rows[index]->Cells[0]->Value = cart[i].barcode;
				tb_cashier->Rows[index]->Cells[1]->Value = cart[i].name;
				tb_cashier->Rows[index]->Cells[2]->Value = cart[i].quantity;
				tb_cashier->Rows[index]->Cells[3]->Value = cart[i].price;
				tb_cashier->Rows[index]->Cells[4]->Value = cart[i].totalPrice;
				amountDue += cart[i].totalPrice;
				vat += cart[i].vat;
				lbl_amountDue->Text = amountDue + "";
				lbl_vatAmount->Text = vat + "";
				tb_cashier->ClearSelection();
			}
		}
		
		String^ selectedCart;
		private: System::Void btn_prevDelete_Click(System::Object^  sender, System::EventArgs^  e) {
			if (!String::IsNullOrEmpty(selectedCart)) {
				voidItemPnl();
			}
			else {
				MessageBox::Show("Select item on cart first.");
			}
			
		}

		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			
		}
		
		private: System::Void tb_cashier_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			selectedCart = tb_cashier->Rows[e->RowIndex]->Cells[0]->Value->ToString();
			tableSelection();
		}

		private: System::Void tb_cashier_CellLeave(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			tb_cashier->ClearSelection();
			tableSelection();
		}

		public: void tableSelection() {
			if (!String::IsNullOrEmpty(selectedCart)){ 
				btn_prevDelete->Enabled = true;
			}
			else { 
				btn_prevDelete->Enabled = false;
			}
;
		}

		void computeTotal(int quantity) {
			proPrice = currentPrice * quantity;
			lbl_totalPrice->Text = "" + proPrice;
		
		}

		//Check the stock if enough from the customer quantity
		bool CheckStock(int quan) {
			return quan > proStock ? true : false;
		}
		
		private: System::Void inp_quantity_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			proQuan = Convert::ToInt32(inp_quantity->Value);

			if (!CheckStock(proQuan)) {
				computeTotal(proQuan);
			}
			else {
				MessageBox::Show("Insufficient Stocks the product stock is " + proStock + " and your quantity is " + proQuan);
				inp_quantity->Text = lbl_proStock->Text;
			}
			}

		//Processing the transactions
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			pnl_navBar->Enabled = false;
			if (!amountDue<=0.0)
			{
				lbl_totalPayment->Text = amountDue + "";
				paymentPnl();
			}
			else {
				MessageBox::Show("No items on cart please fill it in.");
			}
		}	
		
		private: System::Void inp_payCashValueChange(System::Object^  sender, System::EventArgs^  e) {
			validatePayment();
		}
		
		//Finalizing payment
		private: System::Void btn_payment_Click(System::Object^  sender, System::EventArgs^  e) {
			if (validatePayment()) {
				
				if (MessageBox::Show("The transaction is done?", "Cashier",
					MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
					
					MessageBox::Show("Thank you for buying! have a nice day.");
					updateTextfile();
					tbC_cashier->SelectTab(0);
					tb_cashier->Rows->Clear();

					//Sales Reporting
					//Creating cart sales report
					saveCartReport();

					//Adding the sales to array and save it to database
					addSalesReport();
					
					cart = gcnew array< cartProduct >(1000);
					cartCount = 0;
					resetfields();
					loadCartTable();
					newTransPnl();
					
				}
			}
			pnl_navBar->Enabled = true;
			
		}
		
		//Update the stocks on textfile database
		public: void updateTextfile() {

			for (int i = 0; i < cartCount; i++) {

				for (int j = 0; j < productCount; j++) {
					
					if (String::Compare(pro[j].barcode, cart[i].barcode)==0) {
						double curStock = pro[j].stock;
						curStock -= cart[i].quantity;
						pro[j].stock = curStock;

					}

				}

			}
			
			saveToDatabase();
		}
		//Save to update array to database;
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

		//Creating Report
		public: value struct salesReport {
			int transCode;
			String^ customer;
			double totalPrice;
			int totalQuantity;
			String^ date;
		};
		int saleReportCount;

		array<salesReport>^ sales = gcnew array< salesReport >(1000);

		//Load sales report
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
						sales[i].totalQuantity = Int32::Parse(din->ReadLine());
						sales[i].date = din->ReadLine();					}
				}
				else {
					MessageBox::Show("The database is empty");
				}
				
				transCode = sales[saleReportCount-1].transCode;
				MessageBox::Show("" + transCode);
				transCode++;
				lbl_transNo->Text = "#" + transCode;
				lbl_newTrans->Text = "#" + transCode;
				din->Close();

			}
			catch (const std::exception&)
			{

			}
		}
		
		//Save sales
		public: void saveSalesToDatabase() {
			String^ fileName = "sales_tb.txt";

			StreamWriter^ sw = gcnew StreamWriter(fileName);
			sw->WriteLine(saleReportCount);
			for (int i = 0; i < saleReportCount; i++) {
				sw->WriteLine(sales[i].transCode);
				sw->WriteLine(sales[i].customer);
				sw->WriteLine(sales[i].totalPrice);
				sw->WriteLine(sales[i].totalQuantity);
				sw->WriteLine(sales[i].date);
			}
			sw->Close();
			MessageBox::Show("Report saves to database");
		}

		//Add sales report
		public: void addSalesReport() {
			DateTime^ date = gcnew DateTime;
			sales[saleReportCount].transCode = transCode;
			sales[saleReportCount].customer = customerName;
			sales[saleReportCount].totalPrice = amountDue;
			sales[saleReportCount].totalQuantity = cartQuantity();
			sales[saleReportCount].date =""+ date->Now;
			saleReportCount++;
			saveSalesToDatabase();
			loadSalesFromFile();
			MessageBox::Show("sales report added");
		}

		//Get the cart total quantity
		public: int cartQuantity() {
			int totalQuan = 0;
			for (int i = 0; i < cartCount; i++) {
				totalQuan += cart[i].quantity;
			}
			return totalQuan;
		}

		//Creating cart sales report connectio to sales report
		public: void saveCartReport() {
			String^ fileName = "salesReport\\"+ transCode +".txt";

			StreamWriter^ sw = gcnew StreamWriter(fileName);
			sw->WriteLine(cartCount);
			for (int i = 0; i < cartCount; i++) {
				sw->WriteLine(cart[i].barcode);
				sw->WriteLine(cart[i].name);
				sw->WriteLine(cart[i].quantity);
				sw->WriteLine(cart[i].price);
				sw->WriteLine(cart[i].totalPrice);
			}
			sw->Close();
			MessageBox::Show("cart ordered report added");
		}

		public: int checkBarcodeExist(String^ barcode) {
			int toReturn;
			if (!cartCount == 0) {
				for (int i = 0; i <= cartCount; i++) {
					if (String::Compare(cart[i].barcode, barcode) == 0) {
						toReturn = i;
						break;
					}
					else {
						toReturn = -1;
					}
				}
			}
			else {
				toReturn = -1;
			}

			return toReturn;
		}

		//Paying money validation
		public: bool validatePayment() {
			double payCash = Convert::ToDouble(inp_payCash->Text);

			if (payCash >= amountDue) { 
				double totalChange = payCash - amountDue;
				lbl_payChange->Text = totalChange + "";
				return true;
			}else { 
				MessageBox::Show("Insuffiecient Cash");
				lbl_payChange->Text = "";
				return false;
			};

		}
		
		//Account structure
		public: value struct Account {
			String^ username;
			String^ password;
			String^ loginAs;
		};

		//Account Array of Structure
		array<Account>^ acc = gcnew array<Account>(1000);

		int accountCount;
		//Load account array of structure from account_tb textfile
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
					MessageBox::Show("The account database is empty");
				}

				din->Close();

			}
			catch (const std::exception&)
			{

			}
		}

		//Responsible for removing item from cart
		private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			
			String^ username, ^password, ^loginAs = "Inventory";
			if (verifyAccount(username, password, loginAs))
			{
				int index = checkBarcodeExist(selectedCart);
				if (!String::IsNullOrEmpty(selectedCart)) {

					if (MessageBox::Show("Are you sure to delete the cart selected?", "Cashier",
						MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

						for (int i = index; i < cartCount; i++) {

							cart[i].barcode = cart[i + 1].barcode;
							cart[i].name = cart[i + 1].name;
							cart[i].price = cart[i + 1].price;
							cart[i].quantity = cart[i + 1].quantity;
							cart[i].totalPrice = cart[i + 1].totalPrice;
						}

						cartCount--;
						resetfields();
						loadCartTable();
						MessageBox::Show("Cart selected has been removed");
						tbC_cashier->SelectTab(0);
					}
					else {
						MessageBox::Show("Cart Selected is not deleted");
					}
				}
			}
			else {
				MessageBox::Show("Invalid username or password");
			}
		}
		
		//Account Verifier
		public: bool verifyAccount(String^ username, String^ password, String^ loginAs) {
			bool toReturn;
			for (int i = 0; i < accountCount - 1; i++) {
				if (String::Compare(acc[i].username, username) == 0 && String::Compare(acc[i].password, password) == 0 && String::Compare(acc[i].loginAs, loginAs) == 0) {
					toReturn = true;
					break;
				}
				else {
					toReturn = false;
				}
			}

			return toReturn;
		}
		
		//Tabbing Control
		private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			tbC_cashier->SelectTab(0);
		}
		private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			tbC_cashier->SelectTab(0);
			pnl_navBar->Enabled = true;
		}
		
		//Other functions
		public: void paymentPnl() {
			tbC_cashier->SelectTab(1);
			pnl_payment->Visible = true;
			pnl_voidItem->Visible = false;
			pnl_newTrans->Visible = false;
		}
		public: void voidItemPnl() {
			tbC_cashier->SelectTab(1);
			pnl_payment->Visible = false;
			pnl_voidItem->Visible = true;
			pnl_newTrans->Visible = false;
		}
		public: void newTransPnl() {
			tbC_cashier->SelectTab(1);
			pnl_payment->Visible = false;
			pnl_voidItem->Visible = false;
			pnl_newTrans->Visible = true;
		}

		String^ convertSelection(String^ type) {
					String^ choosen;
					if (String::Compare(type, "Barcode") == 0) {
						choosen = "barcode";
					}
					else {
						choosen = "pro_name";
					}
					return choosen;
				}

		void resetfields() {
			toDisableAdd(false);
			lbl_barcode->Text = "";
			lbl_proName->Text = "";
			lbl_proDesc->Text = "";
			lbl_proCategory->Text = "";
			lbl_proPrice->Text = "";
			lbl_proStock->Text = "";
			inp_proCode->Text = "";
			lbl_totalPrice->Text = "";
			lbl_totalPayment->Text = "";
			inp_quantity->Text = "1";
			lbl_payChange->Text = "";
			inp_custName->Text = "";
			proPrice = 0.0;
			amountDue = 0.0;
			lbl_amountDue->Text = "0";
			inp_payCash->Text = "0.00";
			lbl_totalPrice->Text = "" + proPrice;
			selectedCart = "";
			btn_prevDelete->Enabled = false;
		}

		public: void toDisableAdd(bool isEnabled) {
			inp_quantity->Enabled = isEnabled;
			btn_prevEdit->Enabled = isEnabled;
		}


		private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		}
		private: System::Void btn_logout_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Hide();
			obj->Show();
		}

		private: System::Void btn_productView_Click(System::Object^  sender, System::EventArgs^  e) {
			loadTable("Default");
			tbC_cashier->SelectTab(2);
			lbl_indicator->Location = btn_productView->Location;
		}
		private: System::Void btn_cashier_Click(System::Object^  sender, System::EventArgs^  e) {
			tbC_cashier->SelectTab(0);
			lbl_indicator->Location = btn_cashier->Location;
		}

		private: System::Void tb_viewPro_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			String^ search = tb_viewPro->Rows[e->RowIndex]->Cells[0]->Value->ToString();

				searchProduct *product = (value struct searchProduct*) malloc(sizeof(value struct searchProduct));
				product = proSearch(search);
				if (!product == NULL) {
					lbl_prevCode->Text = product->barcode;
					lbl_prevName->Text = product->name;
					lbl_prevDesc->Text = product->description;
					lbl_prevPrice->Text = product->price.ToString();
					lbl_prevStock->Text = product->stock.ToString();
					lbl_prevCat->Text = product->category;

					free(product);

				}
				else {
					MessageBox::Show("Cannot find what you want to search");
				}

			
		}
		private: System::Void panel8_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		}
		private: System::Void btn_newTrans_Click(System::Object^  sender, System::EventArgs^  e) {
			customerName = inp_custName->Text;
			if (!String::IsNullOrEmpty(customerName)) {
				tbC_cashier->SelectTab(0);
				lbl_transName->Text = customerName;
				resetfields();
			}
			else {
				MessageBox::Show("Please enter the customer name.");
			}
			
		}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void lbl_barcode_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void lbl_indicator_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tb_cashier_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
};


}

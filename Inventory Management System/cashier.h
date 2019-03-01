﻿#pragma once
#include "ctype.h"
namespace InventoryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

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
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::NumericUpDown^  inp_quantity;
	public:
			 String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=inventorysystem_db";
		cashier(void)
		{
			
			InitializeComponent();
			
			//
			//TODO: Add the constructor code here
			//
		}


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
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::DataGridView^  tb_cashier;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  inp_proCode;
	private: System::Windows::Forms::Label^  lbl_searchMode;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  pro_code;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  pro_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  pro_quan;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  pro_price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  pro_total;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  lbl_proName;
	private: System::Windows::Forms::Label^  lbl_proDesc;


	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  lbl_proPrice;

	private: System::Windows::Forms::Label^  label10;


	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  lbl_proStock;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  lbl_totalPrice;

	private: System::Windows::Forms::Button^  btn_prevDelete;
	private: System::Windows::Forms::Button^  btn_prevEdit;
	private: System::Windows::Forms::ComboBox^  cb_toSearch;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label16;


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
			cb_toSearch->SelectedItem = "Barcode";
		}

		void InitializeComponent(void)
		{
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->tb_cashier = (gcnew System::Windows::Forms::DataGridView());
			this->pro_code = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pro_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pro_quan = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pro_price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pro_total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
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
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->lbl_totalPrice = (gcnew System::Windows::Forms::Label());
			this->btn_prevDelete = (gcnew System::Windows::Forms::Button());
			this->btn_prevEdit = (gcnew System::Windows::Forms::Button());
			this->cb_toSearch = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->lbl_barcode = (gcnew System::Windows::Forms::Label());
			this->Barcode = (gcnew System::Windows::Forms::Label());
			this->lbl_proCategory = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->inp_quantity = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tb_cashier))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inp_quantity))->BeginInit();
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Roboto", 23, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label7->Location = System::Drawing::Point(11, 16);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(123, 37);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Cashier";
			// 
			// button7
			// 
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->button7->Location = System::Drawing::Point(921, 21);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 31);
			this->button7->TabIndex = 26;
			this->button7->Text = L"Logout";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &cashier::button7_Click);
			// 
			// tb_cashier
			// 
			this->tb_cashier->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tb_cashier->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tb_cashier->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->pro_code,
					this->pro_name, this->pro_quan, this->pro_price, this->pro_total
			});
			this->tb_cashier->Location = System::Drawing::Point(19, 136);
			this->tb_cashier->Name = L"tb_cashier";
			this->tb_cashier->Size = System::Drawing::Size(674, 310);
			this->tb_cashier->TabIndex = 27;
			// 
			// pro_code
			// 
			this->pro_code->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->pro_code->FillWeight = 15;
			this->pro_code->HeaderText = L"Barcode";
			this->pro_code->Name = L"pro_code";
			this->pro_code->Width = 120;
			// 
			// pro_name
			// 
			this->pro_name->HeaderText = L"Product Name";
			this->pro_name->Name = L"pro_name";
			this->pro_name->ReadOnly = true;
			this->pro_name->Width = 150;
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
			this->pro_total->Width = 120;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label1->Location = System::Drawing::Point(16, 457);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 29);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Amount Due:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Roboto Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label2->Location = System::Drawing::Point(165, 458);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 29);
			this->label2->TabIndex = 29;
			this->label2->Text = L"₱120,000";
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
			this->inp_proCode->Location = System::Drawing::Point(18, 95);
			this->inp_proCode->Name = L"inp_proCode";
			this->inp_proCode->Size = System::Drawing::Size(254, 28);
			this->inp_proCode->TabIndex = 30;
			this->inp_proCode->TextChanged += gcnew System::EventHandler(this, &cashier::inp_proCode_TextChanged);
			// 
			// lbl_searchMode
			// 
			this->lbl_searchMode->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->lbl_searchMode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->lbl_searchMode->Location = System::Drawing::Point(14, 63);
			this->lbl_searchMode->Name = L"lbl_searchMode";
			this->lbl_searchMode->Size = System::Drawing::Size(226, 28);
			this->lbl_searchMode->TabIndex = 31;
			this->lbl_searchMode->Text = L"Barcode";
			this->lbl_searchMode->Click += gcnew System::EventHandler(this, &cashier::lbl_searchMode_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Roboto", 15));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label4->Location = System::Drawing::Point(711, 192);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(139, 24);
			this->label4->TabIndex = 32;
			this->label4->Text = L"Product Name";
			// 
			// lbl_proName
			// 
			this->lbl_proName->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->lbl_proName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->lbl_proName->Location = System::Drawing::Point(711, 216);
			this->lbl_proName->Name = L"lbl_proName";
			this->lbl_proName->Size = System::Drawing::Size(289, 26);
			this->lbl_proName->TabIndex = 33;
			this->lbl_proName->Text = L"Hansel Chocolate";
			// 
			// lbl_proDesc
			// 
			this->lbl_proDesc->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->lbl_proDesc->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->lbl_proDesc->Location = System::Drawing::Point(711, 270);
			this->lbl_proDesc->Name = L"lbl_proDesc";
			this->lbl_proDesc->Size = System::Drawing::Size(289, 26);
			this->lbl_proDesc->TabIndex = 35;
			this->lbl_proDesc->Text = L"Cholate Filling";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Roboto", 15));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label8->Location = System::Drawing::Point(711, 245);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(111, 24);
			this->label8->TabIndex = 34;
			this->label8->Text = L"Description";
			// 
			// lbl_proPrice
			// 
			this->lbl_proPrice->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->lbl_proPrice->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->lbl_proPrice->Location = System::Drawing::Point(713, 374);
			this->lbl_proPrice->Name = L"lbl_proPrice";
			this->lbl_proPrice->Size = System::Drawing::Size(289, 26);
			this->lbl_proPrice->TabIndex = 37;
			this->lbl_proPrice->Text = L"₱25.50";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Roboto", 15));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label10->Location = System::Drawing::Point(712, 347);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(56, 24);
			this->label10->TabIndex = 36;
			this->label10->Text = L"Price";
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label11->Location = System::Drawing::Point(274, 67);
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
			this->lbl_proStock->Location = System::Drawing::Point(713, 424);
			this->lbl_proStock->Name = L"lbl_proStock";
			this->lbl_proStock->Size = System::Drawing::Size(289, 26);
			this->lbl_proStock->TabIndex = 41;
			this->lbl_proStock->Text = L"12";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Roboto", 15));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label13->Location = System::Drawing::Point(712, 400);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(60, 24);
			this->label13->TabIndex = 40;
			this->label13->Text = L"Stock";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Roboto", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label14->Location = System::Drawing::Point(388, 95);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(67, 29);
			this->label14->TabIndex = 42;
			this->label14->Text = L"Total";
			// 
			// lbl_totalPrice
			// 
			this->lbl_totalPrice->Font = (gcnew System::Drawing::Font(L"Roboto Light", 16.25F));
			this->lbl_totalPrice->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->lbl_totalPrice->Location = System::Drawing::Point(483, 96);
			this->lbl_totalPrice->Name = L"lbl_totalPrice";
			this->lbl_totalPrice->Size = System::Drawing::Size(209, 26);
			this->lbl_totalPrice->TabIndex = 43;
			// 
			// btn_prevDelete
			// 
			this->btn_prevDelete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_prevDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_prevDelete->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			this->btn_prevDelete->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btn_prevDelete->Location = System::Drawing::Point(517, 457);
			this->btn_prevDelete->Name = L"btn_prevDelete";
			this->btn_prevDelete->Size = System::Drawing::Size(176, 35);
			this->btn_prevDelete->TabIndex = 45;
			this->btn_prevDelete->Text = L"Remove to Cart";
			this->btn_prevDelete->UseVisualStyleBackColor = true;
			// 
			// btn_prevEdit
			// 
			this->btn_prevEdit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_prevEdit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_prevEdit->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			this->btn_prevEdit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->btn_prevEdit->Location = System::Drawing::Point(698, 85);
			this->btn_prevEdit->Name = L"btn_prevEdit";
			this->btn_prevEdit->Size = System::Drawing::Size(176, 35);
			this->btn_prevEdit->TabIndex = 44;
			this->btn_prevEdit->Text = L"Add to Cart";
			this->btn_prevEdit->UseVisualStyleBackColor = true;
			this->btn_prevEdit->Click += gcnew System::EventHandler(this, &cashier::btn_prevEdit_Click);
			// 
			// cb_toSearch
			// 
			this->cb_toSearch->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cb_toSearch->Font = (gcnew System::Drawing::Font(L"Roboto Light", 13));
			this->cb_toSearch->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->cb_toSearch->FormattingEnabled = true;
			this->cb_toSearch->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Barcode", L"Product Name" });
			this->cb_toSearch->Location = System::Drawing::Point(18, 63);
			this->cb_toSearch->Name = L"cb_toSearch";
			this->cb_toSearch->Size = System::Drawing::Size(222, 28);
			this->cb_toSearch->TabIndex = 46;
			this->cb_toSearch->SelectedIndexChanged += gcnew System::EventHandler(this, &cashier::cb_toSearch_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->button1->Location = System::Drawing::Point(845, 458);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(176, 34);
			this->button1->TabIndex = 47;
			this->button1->Text = L"Process";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button2->Location = System::Drawing::Point(393, 458);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(118, 34);
			this->button2->TabIndex = 48;
			this->button2->Text = L"Clear";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label16->Location = System::Drawing::Point(880, 93);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(63, 19);
			this->label16->TabIndex = 49;
			this->label16->Text = L"or Enter";
			// 
			// lbl_barcode
			// 
			this->lbl_barcode->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->lbl_barcode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->lbl_barcode->Location = System::Drawing::Point(711, 164);
			this->lbl_barcode->Name = L"lbl_barcode";
			this->lbl_barcode->Size = System::Drawing::Size(289, 26);
			this->lbl_barcode->TabIndex = 51;
			this->lbl_barcode->Text = L"Hansel Chocolate";
			// 
			// Barcode
			// 
			this->Barcode->AutoSize = true;
			this->Barcode->Font = (gcnew System::Drawing::Font(L"Roboto", 15));
			this->Barcode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->Barcode->Location = System::Drawing::Point(711, 138);
			this->Barcode->Name = L"Barcode";
			this->Barcode->Size = System::Drawing::Size(83, 24);
			this->Barcode->TabIndex = 50;
			this->Barcode->Text = L"Barcode";
			// 
			// lbl_proCategory
			// 
			this->lbl_proCategory->Font = (gcnew System::Drawing::Font(L"Roboto Light", 12.25F));
			this->lbl_proCategory->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->lbl_proCategory->Location = System::Drawing::Point(713, 322);
			this->lbl_proCategory->Name = L"lbl_proCategory";
			this->lbl_proCategory->Size = System::Drawing::Size(289, 26);
			this->lbl_proCategory->TabIndex = 53;
			this->lbl_proCategory->Text = L"Cholate Filling";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Roboto", 15));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label6->Location = System::Drawing::Point(713, 298);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 24);
			this->label6->TabIndex = 52;
			this->label6->Text = L"Category";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Roboto Light", 16.25F));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label3->Location = System::Drawing::Point(461, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 26);
			this->label3->TabIndex = 54;
			this->label3->Text = L"₱";
			// 
			// inp_quantity
			// 
			this->inp_quantity->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_quantity->Font = (gcnew System::Drawing::Font(L"Roboto Light", 13));
			this->inp_quantity->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_quantity->Location = System::Drawing::Point(280, 95);
			this->inp_quantity->Name = L"inp_quantity";
			this->inp_quantity->Size = System::Drawing::Size(102, 28);
			this->inp_quantity->TabIndex = 55;
			this->inp_quantity->ValueChanged += gcnew System::EventHandler(this, &cashier::inp_quantity_ValueChanged);
			// 
			// cashier
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1050, 507);
			this->Controls->Add(this->inp_quantity);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lbl_proCategory);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->lbl_barcode);
			this->Controls->Add(this->Barcode);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_prevDelete);
			this->Controls->Add(this->btn_prevEdit);
			this->Controls->Add(this->lbl_totalPrice);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->lbl_proStock);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->lbl_proPrice);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->lbl_proDesc);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->lbl_proName);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->inp_proCode);
			this->Controls->Add(this->lbl_searchMode);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tb_cashier);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->cb_toSearch);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"cashier";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Cashier";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tb_cashier))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inp_quantity))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Global Declaration of Variables
		//For Products
		String ^barcode, ^proName, ^proDesc;
		double proPrice=0.0, currentPrice=0.0;
		int proStock;

		//For Values
		double tax= .12, totalPrice=0.0 , amountDue=0.0;
		int proQuan = 1;
		int showRoll = 0;

	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		obj->Show();
	}
	
	private: System::Void cb_toSearch_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		if (String::Compare(cb_toSearch->Text, "Barcode") == 0) {
			lbl_searchMode->Text = "Barcode";
		}
		else {
			lbl_searchMode->Text = "Product Name";
		}
	}
	
	private: System::Void lbl_searchMode_Click(System::Object^  sender, System::EventArgs^  e) {
		
		if (showRoll == 0) {
			cb_toSearch->DroppedDown = true;
			showRoll++;
		}
		else {
			cb_toSearch->DroppedDown = false;
			showRoll--;
		}

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

	private: System::Void inp_proCode_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		try
		{
			String^ code = inp_proCode->Text;
			String^ type = convertSelection(cb_toSearch->Text);
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlCommand^ cmd = gcnew MySqlCommand("select * from product_tb WHERE " + type + "='" + code + "'", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();

			if (dr->Read()) {
				barcode = dr->GetString(0);
				proName = dr->GetString(1);
				lbl_barcode->Text = dr->GetString(0);
				lbl_proName->Text = dr->GetString(1);
				lbl_proDesc->Text = dr->GetString(2);
				lbl_proCategory->Text = dr->GetString(3);
				lbl_proPrice->Text = dr->GetString(4);
				lbl_proStock->Text = dr->GetString(5);
				// Computer the total price by sending the price of searched product
				proStock = Int32::Parse(dr->GetString(5));
				currentPrice = Double::Parse(dr->GetString(4));
				computeTotal();
				MessageBox::Show("Text Change");
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error on barcode" + ex);
		}
	}

	void computeTotal() {
		//Int32::Parse(inp_quantity->Text);
		int quantity = Int32::Parse(inp_quantity->Text);
		if (!CheckStock(quantity)) {
			proPrice = quantity * currentPrice;
			lbl_totalPrice->Text = proPrice.ToString();
		}
		else {
			MessageBox::Show("Insufficient Stocks");
		}
		
	}

	bool CheckStock(int quan) {
		if (quan > proStock) {
			return true;
		}
	}

	private: System::Void inp_quantity_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		computeTotal();
	}
	

	private: System::Void btn_prevEdit_Click(System::Object^  sender, System::EventArgs^  e) {
		int index = tb_cashier->Rows->Add();
		int quantity = Int32::Parse(inp_quantity->Text);
		tb_cashier->Rows[index]->Cells[0]->Value = barcode;
		tb_cashier->Rows[index]->Cells[1]->Value = proName;
		tb_cashier->Rows[index]->Cells[2]->Value = quantity;
		tb_cashier->Rows[index]->Cells[3]->Value = proStock;
		tb_cashier->Rows[index]->Cells[4]->Value = proPrice;
		
		/*
		//To know how many rows on the table
		int index = dg_Name->Rows->Add();

		dg_Name->Rows[index]->Cells[0]->Value = inp_barcode->Text;
		dg_Name->Rows[index]->Cells[1]->Value = inp_proName->Text;
		dg_Name->Rows[index]->Cells[2]->Value = inp_quantity->Text;
		dg_Name->Rows[index]->Cells[3]->Value = inp_proStock->Text;
		dg_Name->Rows[index]->Cells[4]->Value = inp_proPrice->Text;*/
	}
};


}

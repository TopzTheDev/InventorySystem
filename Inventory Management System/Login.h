#pragma once
#include "cashier.h"
#include "inventory.h"

namespace InventoryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  inp_userName;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  inp_loginPass;


	private: System::Windows::Forms::Button^  btn_signIn;



	private: System::Windows::Forms::Button^  button1;




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
			loadAccountFromFile();
		}

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->inp_userName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->inp_loginPass = (gcnew System::Windows::Forms::TextBox());
			this->btn_signIn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(1, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(421, 439);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 11);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(419, 440);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// inp_userName
			// 
			this->inp_userName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_userName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_userName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->inp_userName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_userName->HideSelection = false;
			this->inp_userName->Location = System::Drawing::Point(462, 178);
			this->inp_userName->Name = L"inp_userName";
			this->inp_userName->Size = System::Drawing::Size(351, 27);
			this->inp_userName->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label1->Location = System::Drawing::Point(452, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(349, 77);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Grocery Inventory Management System";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label2->Location = System::Drawing::Point(459, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(200, 5);
			this->label2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label3->Location = System::Drawing::Point(457, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(370, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Enter your username and the password of your account";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label4->Location = System::Drawing::Point(459, 151);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(370, 26);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Username";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->label5->Location = System::Drawing::Point(459, 226);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(370, 26);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Password";
			// 
			// inp_loginPass
			// 
			this->inp_loginPass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_loginPass->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->inp_loginPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->inp_loginPass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_loginPass->HideSelection = false;
			this->inp_loginPass->Location = System::Drawing::Point(462, 253);
			this->inp_loginPass->Name = L"inp_loginPass";
			this->inp_loginPass->PasswordChar = '*';
			this->inp_loginPass->Size = System::Drawing::Size(351, 27);
			this->inp_loginPass->TabIndex = 6;
			// 
			// btn_signIn
			// 
			this->btn_signIn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_signIn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_signIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btn_signIn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->btn_signIn->Location = System::Drawing::Point(462, 367);
			this->btn_signIn->Name = L"btn_signIn";
			this->btn_signIn->Size = System::Drawing::Size(160, 35);
			this->btn_signIn->TabIndex = 8;
			this->btn_signIn->Text = L"Sign In";
			this->btn_signIn->UseVisualStyleBackColor = true;
			this->btn_signIn->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->button1->Location = System::Drawing::Point(628, 367);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 35);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Sign In";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click_1);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(855, 445);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_signIn);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->inp_loginPass);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->inp_userName);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

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
				for (int i = 0; i <accountCount; i++) {
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

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		String^ username = inp_userName->Text;
		String^ password = inp_loginPass->Text;

		if (!fieldValidation()) {

			Account *accVerify = (value struct Account*) malloc(sizeof(value struct Account));
			accVerify = accSearch(username, password);
			MessageBox::Show("user: " + accVerify->username + " pass: " + accVerify->password + " loginAs:" + accVerify->loginAs);
			if (!String::IsNullOrEmpty(accVerify->username)) {
				if (String::Compare(accVerify->loginAs, "Inventory") == 0) {
					MessageBox::Show("Welcome to the Inventory");
					this->Hide();
					inventory ^ frm2 = gcnew inventory(this);
					frm2->ShowDialog();
				} 
				/*else if (String::Compare(accVerify->loginAs, "Administrator") == 0) {
					MessageBox::Show("Welcome to the Inventory");
					this->Hide();
					inventory ^ frm2 = gcnew inventory(this);
					frm2->ShowDialog();
				}*/
				else {
					MessageBox::Show("Welcome to the Cashier");
					this->Hide();
					cashier ^ frm3 = gcnew cashier(this);
					frm3->ShowDialog();
				}
				free(accVerify);
				clearFields();
			}
			else {
				MessageBox::Show("Your Account is not exisiting try to change your position");
			}
		}
		else {
			MessageBox::Show("Some fields is empty");
		}
		
	}

	public: bool verifyAccount(String^ username, String^ password) {
		bool toReturn;
		for (int i = 0; i < accountCount-1; i++) {
			if (String::Compare(acc[i].username, username) == 0 && String::Compare(acc[i].password, password) == 0) {
				toReturn = true;
				break;
			}
			else {
				toReturn = false;
			}
		}

		return toReturn;
	}

	void clearFields() {
		inp_userName->Text = "";
		inp_loginPass->Text = "";
	}

	public: Account *accSearch(String^ username, String^ password) {
		Account *searched = (value struct Account*) malloc(sizeof(value struct Account));

		MessageBox::Show("Verifying Account == user: "+ username + " pass: " + password);
		for (int i = 0; i < accountCount; i++) {
			
			if (String::Compare(acc[i].username, username) == 0 &&  String::Compare(acc[i].password, password) == 0 ) {
				MessageBox::Show("Account is here");
				searched->username = acc[i].username;
				searched->password = acc[i].password;
				searched->loginAs = acc[i].loginAs;
				break;
			}
			else {
				MessageBox::Show("Account is not here");
				searched->username = "";
			}

		}

		return searched;
	}

	bool fieldValidation() {
		return String::Compare(inp_userName->Text, "") == 0 || String::Compare(inp_loginPass->Text, "") == 0 ? true : false;
		
	}

	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Welcome to the Cashier");
		this->Hide();
		cashier ^ frm2 = gcnew cashier(this);
		frm2->ShowDialog();
	}
};
}

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

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  inp_loginPass;


	private: System::Windows::Forms::Button^  btn_signIn;




	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::PictureBox^  pic_hidePass;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;






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
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pic_hidePass = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->inp_userName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_signIn = (gcnew System::Windows::Forms::Button());
			this->inp_loginPass = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic_hidePass))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(1, 1);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(561, 540);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(15, 22);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(520, 502);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->pic_hidePass);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->inp_userName);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->btn_signIn);
			this->panel2->Controls->Add(this->inp_loginPass);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(561, -1);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(580, 556);
			this->panel2->TabIndex = 1;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(53, 220);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(44, 39);
			this->pictureBox3->TabIndex = 16;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(52, 351);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(44, 39);
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			// 
			// pic_hidePass
			// 
			this->pic_hidePass->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pic_hidePass->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pic_hidePass->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pic_hidePass.Image")));
			this->pic_hidePass->Location = System::Drawing::Point(475, 352);
			this->pic_hidePass->Margin = System::Windows::Forms::Padding(4);
			this->pic_hidePass->Name = L"pic_hidePass";
			this->pic_hidePass->Size = System::Drawing::Size(44, 39);
			this->pic_hidePass->TabIndex = 14;
			this->pic_hidePass->TabStop = false;
			this->pic_hidePass->Click += gcnew System::EventHandler(this, &Login::pic_hidePass_Click);
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(52, 395);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(468, 1);
			this->label7->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(53, 267);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(468, 1);
			this->label6->TabIndex = 11;
			// 
			// inp_userName
			// 
			this->inp_userName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_userName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_userName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->inp_userName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inp_userName->ForeColor = System::Drawing::Color::White;
			this->inp_userName->HideSelection = false;
			this->inp_userName->Location = System::Drawing::Point(105, 223);
			this->inp_userName->Margin = System::Windows::Forms::Padding(4);
			this->inp_userName->Name = L"inp_userName";
			this->inp_userName->Size = System::Drawing::Size(416, 34);
			this->inp_userName->TabIndex = 1;
			this->inp_userName->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Login::inp_userName_KeyDown);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(52, 188);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(136, 32);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Username";
			// 
			// btn_signIn
			// 
			this->btn_signIn->BackColor = System::Drawing::Color::White;
			this->btn_signIn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_signIn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_signIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btn_signIn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->btn_signIn->Location = System::Drawing::Point(51, 441);
			this->btn_signIn->Margin = System::Windows::Forms::Padding(4);
			this->btn_signIn->Name = L"btn_signIn";
			this->btn_signIn->Size = System::Drawing::Size(213, 54);
			this->btn_signIn->TabIndex = 8;
			this->btn_signIn->Text = L"Sign In";
			this->btn_signIn->UseVisualStyleBackColor = false;
			this->btn_signIn->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// inp_loginPass
			// 
			this->inp_loginPass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->inp_loginPass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->inp_loginPass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->inp_loginPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inp_loginPass->ForeColor = System::Drawing::Color::White;
			this->inp_loginPass->HideSelection = false;
			this->inp_loginPass->Location = System::Drawing::Point(105, 351);
			this->inp_loginPass->Margin = System::Windows::Forms::Padding(4);
			this->inp_loginPass->Name = L"inp_loginPass";
			this->inp_loginPass->PasswordChar = '*';
			this->inp_loginPass->Size = System::Drawing::Size(415, 34);
			this->inp_loginPass->TabIndex = 6;
			this->inp_loginPass->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Login::inp_loginPass_KeyDown);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(51, 126);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(493, 21);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Enter your username and the password of your account";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(51, 311);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 32);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Password";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(44, 28);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(465, 95);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Grocery Inventory Management System";
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1140, 548);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pic_hidePass))->EndInit();
			this->ResumeLayout(false);

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
	public: void logInVerify() {
		String^ username = inp_userName->Text;
		String^ password = inp_loginPass->Text;
		if (!fieldValidation()) {

			Account *accVerify = (value struct Account*) malloc(sizeof(value struct Account));
			accVerify = accSearch(username, password);

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
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		logInVerify();
		
		
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

		for (int i = 0; i < accountCount; i++) {
			
			if (String::Compare(acc[i].username, username) == 0 &&  String::Compare(acc[i].password, password) == 0 ) {
				
				searched->username = acc[i].username;
				searched->password = acc[i].password;
				searched->loginAs = acc[i].loginAs;
				break;
			}
			else {
			
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
private: System::Void Login_Load(System::Object^  sender, System::EventArgs^  e) {
}
	int show = 0;
	
	private: System::Void pic_hidePass_Click(System::Object^  sender, System::EventArgs^  e) {
		char c = '*';
		if (show == 0) {
			inp_loginPass->PasswordChar = c;
			show++;
		}
		else {
			inp_loginPass->PasswordChar = '\0';
			show--;
		}
		pic_hidePass->Load("..\\Inventory Management System\\image\\" + show + ".png");
	}
private: System::Void inp_loginPass_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyData == Keys::Enter) {

		logInVerify();

	}
}
private: System::Void inp_userName_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyData == Keys::Enter) {
		if (!fieldValidation()) {
			logInVerify();
		}
		else {
			this->ActiveControl = inp_loginPass;
		}
	}

}
};
}

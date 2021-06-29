#pragma once
using namespace System;
#include "MyForm1.h"
#include "inventory.h"
#include "billing.h"
#include "signup.h"

namespace SupermarketInventoryandBillingSystem {

	using namespace MySql::Data::MySqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ Register;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;



	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;






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
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Register = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(211, 108);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"UserID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(211, 144);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(318, 105);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(162, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(318, 141);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(162, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(281, 190);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Sign In";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(250, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(143, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Log-In to system";
			// 
			// Register
			// 
			this->Register->Location = System::Drawing::Point(546, 23);
			this->Register->Name = L"Register";
			this->Register->Size = System::Drawing::Size(75, 23);
			this->Register->TabIndex = 6;
			this->Register->Text = L"Sign Up";
			this->Register->UseVisualStyleBackColor = true;
			this->Register->Click += gcnew System::EventHandler(this, &MyForm::Register_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(392, 195);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(88, 13);
			this->linkLabel1->TabIndex = 7;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"forgot password\?";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(442, 284);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(145, 13);
			this->label7->TabIndex = 35;
			this->label7->Text = L"What\'s your first contact no.\?";
			this->label7->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(593, 284);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(162, 20);
			this->textBox4->TabIndex = 34;
			this->textBox4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(72, 281);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(140, 13);
			this->label5->TabIndex = 33;
			this->label5->Text = L"What\'s your birth city name\?";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(442, 260);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 13);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Security Question2 :";
			this->label6->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(223, 281);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(162, 20);
			this->textBox3->TabIndex = 31;
			this->textBox3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(72, 257);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 13);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Security Question1 :";
			this->label4->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(360, 316);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 23);
			this->button2->TabIndex = 36;
			this->button2->Text = L"Get Password";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(816, 351);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->Register);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"+";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int result;
			int UserID = Int32::Parse(textBox1->Text);
			String^ Password = textBox2->Text;
			String^ DB_Password;
			String^ Designation;
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=users";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlCommand^ cmd = gcnew MySqlCommand("select EXISTS(select Password,Designation from employee WHERE UserID=" + UserID + ")", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			while (dr->Read()){
				result = Int32::Parse(dr->GetString(0));
			}
			con->Close();
			if (result == 0) {
				MessageBox::Show("Invalid UserID");
			}
			else {
				cmd = gcnew MySqlCommand("select Password,Designation from employee WHERE UserID=" + UserID + "", con);
				con->Open();
				dr = cmd->ExecuteReader();
				while (dr->Read())
				{
					DB_Password = dr->GetString(0);
					Designation = dr->GetString(1);
				}
				if (Password == DB_Password) {
					if (Designation == "Manager") {
						inventory^ module1 = gcnew inventory();
						this->Hide();
						module1->Visible = true;
					}
					else if (Designation == "Sales Executive") {
						billing^ module1 = gcnew billing();
						this->Hide();
						module1->Visible = true;
					}
				}
				else {
					MessageBox::Show("Invalid Password");
				}
				con->Close();
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}	
private: System::Void Register_Click(System::Object^ sender, System::EventArgs^ e) {
	signup^ user = gcnew signup();
	user->Visible = true;
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	label4->Visible = true;
	label5->Visible = true;
	label6->Visible = true;
	label7->Visible = true;
	textBox3->Visible = true;
	textBox4->Visible = true;
	button2->Visible = true;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int result;
		int UserID = Int32::Parse(textBox1->Text);
		String^ SecurityQ1 = textBox3->Text;
		String^ SecurityQ2 = textBox4->Text;
		String^ DB_SecurityQ1;
		String^ DB_SecurityQ2;
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=users";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		MySqlCommand^ cmd = gcnew MySqlCommand("select EXISTS(select SecurityQ1,SecurityQ2 from employee WHERE UserID=" + UserID + ")", con);
		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();
		while (dr->Read()) {
			result = Int32::Parse(dr->GetString(0));
		}
		con->Close();

		if (result == 0) {
			MessageBox::Show("Invalid UserID");
		}
		else {
			cmd = gcnew MySqlCommand("select SecurityQ1,SecurityQ2 from employee WHERE UserID=" + UserID + "", con);
			con->Open();
			dr = cmd->ExecuteReader();
			while (dr->Read())
			{
				DB_SecurityQ1 = dr->GetString(0);
				DB_SecurityQ2 = dr->GetString(1);
			}
			con->Close();
			if (SecurityQ1 == DB_SecurityQ1 && SecurityQ2 == DB_SecurityQ2) {
				cmd = gcnew MySqlCommand("select Password from employee WHERE UserID=" + UserID + "", con);
				con->Open();
				dr = cmd->ExecuteReader();
				textBox2->UseSystemPasswordChar = false;
				while (dr->Read())
				{
					textBox2->Text = dr->GetString(0);
				}
				con->Close();
			}
			else {
				MessageBox::Show("Security Answers are not matched try again");
			}
		}
	}
	catch (Exception^ ex) {
		if (System::Convert::ToString(ex->Message) == "Input string was not in a correct format."){
			MessageBox::Show("Enter UserID");
		}
		else {
			MessageBox::Show(ex->Message);
		}
	}
}
};
}

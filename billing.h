#pragma once
#include "view_bill.h"

namespace SupermarketInventoryandBillingSystem {

	using namespace MySql::Data::MySqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for billing
	/// </summary>
	public ref class billing : public System::Windows::Forms::Form
	{
	public:
		billing(void)
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
		~billing()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label12;

	private: System::ComponentModel::IContainer^ components;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(140, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Product ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(248, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Product Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(395, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Category Name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(541, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Unit Price";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(645, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"GST (in %)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(728, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Quantity";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(830, 16);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 17);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Total";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(130, 45);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &billing::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(251, 45);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(128, 20);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(398, 45);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(128, 20);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(544, 45);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(88, 20);
			this->textBox4->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(648, 45);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(59, 20);
			this->textBox5->TabIndex = 11;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(731, 45);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(72, 20);
			this->textBox6->TabIndex = 12;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &billing::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(833, 45);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(72, 20);
			this->textBox7->TabIndex = 13;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(11, 66);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(931, 125);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(16, 32);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 17);
			this->label11->TabIndex = 24;
			this->label11->Visible = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(6, 16);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(96, 49);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Generate BillID";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &billing::button3_Click);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(798, 92);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 27);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Add to List";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &billing::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(96, 210);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(762, 135);
			this->dataGridView1->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(656, 370);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(66, 17);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Sub Total";
			this->label8->Visible = false;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(754, 372);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(116, 20);
			this->textBox8->TabIndex = 17;
			this->textBox8->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(620, 411);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(102, 17);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Other Charges";
			this->label9->Visible = false;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(754, 408);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(116, 20);
			this->textBox9->TabIndex = 19;
			this->textBox9->Visible = false;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &billing::textBox9_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(629, 452);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(93, 16);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Total Amount";
			this->label10->Visible = false;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(754, 452);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(116, 20);
			this->textBox10->TabIndex = 21;
			this->textBox10->Visible = false;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &billing::textBox10_TextChanged);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(423, 360);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 32);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Save Bill";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &billing::button2_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(431, 475);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(96, 49);
			this->button4->TabIndex = 25;
			this->button4->Text = L"Save and Close";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &billing::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(824, 12);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(118, 33);
			this->button5->TabIndex = 26;
			this->button5->Text = L"View Previous Bills";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &billing::button5_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(656, 20);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 17);
			this->label12->TabIndex = 25;
			// 
			// billing
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(966, 536);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"billing";
			this->Text = L"billing";
			this->Load += gcnew System::EventHandler(this, &billing::billing_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double ProductID;
		int Quantity, other, Qty, support, db_qty,result,temp_total, temp_qty;
		float UnitPrice, GST, Total, bill_Total, subtotal, TotalAmount;
		String^ ProductName;
		String^ Category;
		String^ BillID;
		String^ BillDate = System::DateTime::Now.ToString("yyyy-MM-dd HH:MM:SS");

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=inventory";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			ProductID = double::Parse(textBox1->Text);
			MySqlCommand^ cmd = gcnew MySqlCommand("select product_name,product_category,product_selling_price,product_gst from stock WHERE product_id=" + ProductID + "", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			while (dr->Read())
			{
				textBox2->Text = dr->GetString(0);
				textBox3->Text = dr->GetString(1);
				textBox4->Text = dr->GetString(2);
				UnitPrice = float::Parse(textBox4->Text);
				textBox5->Text = dr->GetString(3);
				GST = float::Parse(textBox5->Text);
			}
			con->Close();
		}
		catch (Exception^ ex) {
			if (System::Convert::ToString(ex->Message) == "Input string was not in a correct format.") {
				
			}
			else {
				MessageBox::Show(ex->Message);
			}
		}
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			Quantity = Int32::Parse(textBox6->Text);
			Total = UnitPrice * Quantity;
			Total = Total + (Total * GST / 100);
			textBox7->Text = System::Convert::ToString(Total);
		}
		catch (Exception^ ex) {
			if (System::Convert::ToString(ex->Message) == "Input string was not in a correct format.") {

			}
			else {
				MessageBox::Show(ex->Message);
			}
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=bill";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			ProductID = double::Parse(textBox1->Text);
			ProductName = textBox2->Text;
			Category = textBox3->Text;
			UnitPrice = float::Parse(textBox4->Text);
			GST = float::Parse(textBox5->Text);
			Qty = Int32::Parse(textBox6->Text);
			TotalAmount = float::Parse(textBox7->Text);

			MySqlCommand^ cmd = gcnew MySqlCommand("select EXISTS(select * from " + BillID + " WHERE ProductId=" + ProductID + ")", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			while (dr->Read()) {
				result = Int32::Parse(dr->GetString(0));
			}
			con->Close();
			if (result == 1) {
				cmd = gcnew MySqlCommand("select Qty from " + BillID + " WHERE ProductID = " + ProductID + "", con);
				con->Open();
				dr = cmd->ExecuteReader();
				while (dr->Read()) {
					temp_qty = Int32::Parse(dr->GetString(0));
				}
				con->Close();
				Qty += temp_qty;
				TotalAmount = UnitPrice * Qty;
				TotalAmount = TotalAmount + (TotalAmount * GST / 100);
				cmd = gcnew MySqlCommand("update " + BillID + " set Qty=" + Qty + ",Total=" + TotalAmount + " WHERE ProductID=" + ProductID + "", con);
				con->Open();
				dr = cmd->ExecuteReader();
				con->Close();
			}
			else {
				MySqlCommand^ cmd = gcnew MySqlCommand("insert into " + BillID + " values (" + ProductID + ",'" + ProductName + "','" + Category + "'," + UnitPrice + "," + Qty + "," + GST + "," + TotalAmount + " )", con);
				MySqlDataReader^ dr;
				con->Open();
				dr = cmd->ExecuteReader();
				con->Close();
			}
			textBox1->Text = "";
			textBox2->Text = "";
			textBox3->Text = "";
			textBox4->Text = "";
			textBox5->Text = "";
			textBox6->Text = "";
			textBox7->Text = "";
			textBox8->Text = "";
			
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from " + BillID + "", con);
			con->Open();
			DataTable^ table = gcnew DataTable();
			adapter->Fill(table);
			bindingSource1->DataSource = table;
			dataGridView1->DataSource = bindingSource1;
			con->Close();

			constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=inventory";
			con = gcnew MySqlConnection(constr);
			cmd = gcnew MySqlCommand("select product_qty from stock where product_id="+ ProductID +"", con);
			con->Open();
			dr = cmd->ExecuteReader();
			while (dr->Read()){
				db_qty = Int32::Parse(dr->GetString(0));
			}
			db_qty -= Qty;
			con->Close();

			cmd = gcnew MySqlCommand("update stock set product_qty='" + db_qty + "' WHERE product_id=" + ProductID + "", con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			other = float::Parse(textBox9->Text);
			bill_Total = other + subtotal;
			textBox10->Text = System::Convert::ToString(bill_Total);
		}
		catch (Exception^ ex) {
			if (System::Convert::ToString(ex->Message) == "Input string was not in a correct format.") {

			}
			else {
				MessageBox::Show(ex->Message);
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		label8->Visible = true;
		label9->Visible = true;
		label10->Visible = true;
		textBox8->Visible = true;
		textBox9->Visible = true;
		textBox10->Visible = true;
		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=bill";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT SUM(Total) as sum_total FROM " + BillID + "", con);
			con->Open();
			MySqlDataReader^ dr = cmd->ExecuteReader();
			while (dr->Read())
			{
				subtotal = float::Parse(dr->GetString(0));
			}
			textBox8->Text = System::Convert::ToString(subtotal);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void billing_Load(System::Object^ sender, System::EventArgs^ e) {
		label12->Text = System::DateTime::Now.ToString();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=bill";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		MySqlCommand^ cmd = gcnew MySqlCommand("SELECT support from billing_index ORDER BY BillID DESC LIMIT 1 ", con);
		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();
		while (dr->Read())
		{
			support = Int32::Parse(dr->GetString(0));
		}
		con->Close();
		support += 1;
		BillID = "bill_" + support;
		cmd = gcnew MySqlCommand("create table " + BillID + "(ProductId bigint(20) NOT NULL,ProductName varchar(30),Category varchar(30),UnitPrice int NOT NULL,Qty int NOT NULL,GST float NOT NULL,Total float NOT NULL)", con);
		con->Open();
		dr = cmd->ExecuteReader();
		con->Close();
		button3->Visible = false;
		label11->Text = BillID;
		label11->Visible = true;
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=bill";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		MySqlCommand^ cmd = gcnew MySqlCommand("insert into billing_index values ('" + BillID + "'," + bill_Total + ",'" + BillDate + "'," + support + ")", con);
		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();
		con->Close();
		billing^ module1 = gcnew billing();
		this->Hide();
		module1->Visible = true;
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	button4->Visible = true;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	view_bill^ module1 = gcnew view_bill();
	module1->Visible = true;
}
};
}

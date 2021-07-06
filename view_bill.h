#pragma once
#include "sales_report.h"
namespace SupermarketInventoryandBillingSystem {

	using namespace MySql::Data::MySqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for view_bill
	/// </summary>
	public ref class view_bill : public System::Windows::Forms::Form
	{
	public:
		view_bill(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->StartPosition = FormStartPosition::CenterScreen;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~view_bill()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button6;





	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(view_bill::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(125, 26);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(145, 20);
			this->textBox1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label1->Location = System::Drawing::Point(41, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"BillID";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button1->Location = System::Drawing::Point(303, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 31);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Get Bill";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &view_bill::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(45, 106);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(874, 240);
			this->dataGridView1->TabIndex = 16;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label3->Location = System::Drawing::Point(41, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 20);
			this->label3->TabIndex = 18;
			this->label3->Text = L"In Total";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(45, 36);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(145, 20);
			this->textBox2->TabIndex = 19;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(125, 71);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(145, 20);
			this->textBox3->TabIndex = 20;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->button2->Location = System::Drawing::Point(917, 86);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 64);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Sales Report";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &view_bill::button2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Window;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1100, 35);
			this->panel1->TabIndex = 28;
			// 
			// button6
			// 
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(1060, 0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(40, 36);
			this->button6->TabIndex = 1;
			this->button6->Text = L"X";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &view_bill::button6_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(61, 86);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(832, 64);
			this->groupBox1->TabIndex = 30;
			this->groupBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(228)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->button3->Location = System::Drawing::Point(496, 19);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(78, 31);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Cancel";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &view_bill::button3_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::White;
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Location = System::Drawing::Point(61, 167);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(971, 365);
			this->groupBox2->TabIndex = 31;
			this->groupBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->label2->Location = System::Drawing::Point(57, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 30);
			this->label2->TabIndex = 32;
			this->label2->Text = L"View Bill";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(0, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(36, 36);
			this->pictureBox1->TabIndex = 33;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &view_bill::pictureBox1_Click_1);
			// 
			// view_bill
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->ClientSize = System::Drawing::Size(1100, 550);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"view_bill";
			this->Text = L"view_bill";
			this->Load += gcnew System::EventHandler(this, &view_bill::view_bill_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int result;
			String^ BillID = textBox1->Text;
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=bill";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlCommand^ cmd = gcnew MySqlCommand("select EXISTS(select * from information_schema.tables where table_name = '"+ BillID +"')",con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			while (dr->Read()) {
				result = Int32::Parse(dr->GetString(0));
			}
			con->Close();
			if (result == 1) {
				cmd = gcnew MySqlCommand("select EXISTS(select Total,Date from billing_index where BillID ='" + BillID + "')", con);
				con->Open();
				dr = cmd->ExecuteReader();
				while (dr->Read()) {
					result = Int32::Parse(dr->GetString(0));
				}
				con->Close();
				if (result == 0) {
					MessageBox::Show("BillID does not exist");
				}
				else {
					cmd = gcnew MySqlCommand("select * from " + BillID + "", con);
					MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select * from " + BillID + "", con);
					con->Open();
					DataTable^ table = gcnew DataTable();
					adapter->Fill(table);
					bindingSource1->DataSource = table;
					dataGridView1->DataSource = bindingSource1;
					con->Close();

					cmd = gcnew MySqlCommand("select Total,Date from billing_index where BillID='" + BillID + "'", con);
					con->Open();
					dr = cmd->ExecuteReader();
					while (dr->Read()) {
						textBox3->Text = dr->GetString(0);
						textBox2->Text = dr->GetString(1);
					}
					con->Close();
				}
			}
			else {
				MessageBox::Show("BillID does not exist");
			}
		}
		catch(Exception^ ex){
			MessageBox::Show(ex->Message);
		}
	}
private: System::Void view_bill_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	sales_report^ module1 = gcnew sales_report();
	module1->Show();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//this->Hide();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}

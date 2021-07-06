#pragma once
#include "view_bill.h"
#include "user_details.h"

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
			timer1->Start();
			//
			//TODO: Add the constructor code here
			//
		}
		billing(int userid)
		{
			InitializeComponent();
			timer1->Start();
			UserID =userid;
			this->StartPosition = FormStartPosition::CenterScreen;
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

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;

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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::Timer^ timer1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(billing::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label1->Location = System::Drawing::Point(15, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Product ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label2->Location = System::Drawing::Point(134, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Product Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label3->Location = System::Drawing::Point(291, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(114, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Category Name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label4->Location = System::Drawing::Point(447, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Unit Price";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label5->Location = System::Drawing::Point(561, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"GST (in %)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label7->Location = System::Drawing::Point(668, 12);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Total";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(19, 52);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &billing::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(138, 51);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(120, 20);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(295, 51);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(120, 20);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(451, 51);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(80, 20);
			this->textBox4->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(565, 51);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(80, 20);
			this->textBox5->TabIndex = 11;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(672, 51);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(80, 20);
			this->textBox7->TabIndex = 13;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &billing::textBox7_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(190, 154);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(880, 114);
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
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(233)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(779, 44);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 27);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Add to List";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &billing::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->button3->Location = System::Drawing::Point(190, 107);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(123, 36);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Generate BillID";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &billing::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(190, 282);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(880, 166);
			this->dataGridView1->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(186, 461);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(70, 20);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Sub Total";
			this->label8->Visible = false;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(275, 463);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(116, 20);
			this->textBox8->TabIndex = 17;
			this->textBox8->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(445, 463);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(103, 20);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Other Charges";
			this->label9->Visible = false;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(566, 463);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(116, 20);
			this->textBox9->TabIndex = 19;
			this->textBox9->Visible = false;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &billing::textBox9_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(763, 463);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(105, 20);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Total Amount";
			this->label10->Visible = false;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(874, 463);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(116, 20);
			this->textBox10->TabIndex = 21;
			this->textBox10->Visible = false;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &billing::textBox10_TextChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(146)));
			this->button2->Location = System::Drawing::Point(411, 504);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(211, 32);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Save Bill";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &billing::button2_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button4->Location = System::Drawing::Point(688, 504);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(211, 32);
			this->button4->TabIndex = 25;
			this->button4->Text = L"Next Bill";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &billing::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(924, 110);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(146, 33);
			this->button5->TabIndex = 26;
			this->button5->Text = L"View Previous Bills";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &billing::button5_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(204, 70);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 20);
			this->label12->TabIndex = 25;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Window;
			this->panel1->Controls->Add(this->button6);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1100, 26);
			this->panel1->TabIndex = 27;
			// 
			// button6
			// 
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(1059, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(40, 24);
			this->button6->TabIndex = 1;
			this->button6->Text = L"X";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &billing::button6_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->pictureBox5);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Location = System::Drawing::Point(0, 26);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1114, 34);
			this->panel2->TabIndex = 25;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->panel5->Location = System::Drawing::Point(1056, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(4, 35);
			this->panel5->TabIndex = 7;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Location = System::Drawing::Point(1070, 3);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(29, 28);
			this->pictureBox5->TabIndex = 6;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &billing::pictureBox5_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(40, 34);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->button7->Location = System::Drawing::Point(962, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(90, 28);
			this->button7->TabIndex = 5;
			this->button7->Text = L"Account";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->panel3->Controls->Add(this->groupBox5);
			this->panel3->Controls->Add(this->groupBox4);
			this->panel3->Controls->Add(this->groupBox3);
			this->panel3->Location = System::Drawing::Point(0, 60);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(175, 428);
			this->panel3->TabIndex = 28;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->panel7);
			this->groupBox5->Controls->Add(this->pictureBox4);
			this->groupBox5->Controls->Add(this->button8);
			this->groupBox5->Location = System::Drawing::Point(1, 175);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(159, 78);
			this->groupBox5->TabIndex = 18;
			this->groupBox5->TabStop = false;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->panel7->Location = System::Drawing::Point(0, 12);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(5, 60);
			this->panel7->TabIndex = 20;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Location = System::Drawing::Point(21, 28);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(41, 40);
			this->pictureBox4->TabIndex = 17;
			this->pictureBox4->TabStop = false;
			// 
			// button8
			// 
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(65, 27);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(88, 40);
			this->button8->TabIndex = 18;
			this->button8->Text = L"Reports";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &billing::button8_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->groupBox4->Controls->Add(this->panel6);
			this->groupBox4->Controls->Add(this->pictureBox3);
			this->groupBox4->Controls->Add(this->button9);
			this->groupBox4->Location = System::Drawing::Point(0, 94);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(160, 78);
			this->groupBox4->TabIndex = 17;
			this->groupBox4->TabStop = false;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->panel6->Location = System::Drawing::Point(0, 12);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(5, 60);
			this->panel6->TabIndex = 19;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(13, 27);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(52, 44);
			this->pictureBox3->TabIndex = 17;
			this->pictureBox3->TabStop = false;
			// 
			// button9
			// 
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(66, 27);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(88, 44);
			this->button9->TabIndex = 18;
			this->button9->Text = L"Billing";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->groupBox3->Controls->Add(this->panel4);
			this->groupBox3->Controls->Add(this->button10);
			this->groupBox3->Controls->Add(this->pictureBox2);
			this->groupBox3->Location = System::Drawing::Point(0, 10);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(160, 78);
			this->groupBox3->TabIndex = 17;
			this->groupBox3->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->panel4->Location = System::Drawing::Point(0, 13);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(5, 60);
			this->panel4->TabIndex = 17;
			// 
			// button10
			// 
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(60, 23);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(94, 40);
			this->button10->TabIndex = 17;
			this->button10->Text = L"Inventory";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &billing::button10_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Location = System::Drawing::Point(21, 23);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(42, 40);
			this->pictureBox2->TabIndex = 17;
			this->pictureBox2->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &billing::timer1_Tick);
			// 
			// billing
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->ClientSize = System::Drawing::Size(1100, 550);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
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
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"billing";
			this->Text = L"billing";
			this->Load += gcnew System::EventHandler(this, &billing::billing_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double ProductID;
		int UserID,other, Qty, support, db_qty,result,temp_total, temp_qty;
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
			Qty = 1;
			Total = UnitPrice * Qty;
			Total = Total + (Total * GST / 100);
			textBox7->Text = System::Convert::ToString(Total);
			button1->Focus();
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
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
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
				cmd = gcnew MySqlCommand("update " + BillID + " set Qty= " + Qty + ",Total=" + TotalAmount + " WHERE ProductID=" + ProductID + "", con);
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
		panel4->Visible = false;
		panel7->Visible = false;
		panel6->Visible = true;
		groupBox3->Enabled = false;
		groupBox5->Enabled = false;
		groupBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
			static_cast<System::Int32>(static_cast<System::Byte>(42)));
		groupBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
			static_cast<System::Int32>(static_cast<System::Byte>(42)));
		groupBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
			static_cast<System::Int32>(static_cast<System::Byte>(65)));

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
		cmd = gcnew MySqlCommand("select EXISTS(select * from information_schema.tables where table_name = '" + BillID + "')", con);
		con->Open();
		dr = cmd->ExecuteReader();
		while (dr->Read()) {
			result = Int32::Parse(dr->GetString(0));
		}
		con->Close();
		if (result == 1) {
			cmd = gcnew MySqlCommand("drop table " + BillID + "", con);
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();
		}
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
		//MessageBox::Show("Click on Generate BillID to start billing");
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
	//this->Hide();
	module1->Visible = true;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	//inventory^ obj = gcnew inventory();
	//obj->Visible = true;
	//inventory^->Show();

	panel4->Visible = true;
	panel6->Visible = false;
	panel7->Visible = false;

	groupBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
		static_cast<System::Int32>(static_cast<System::Byte>(65)));
	groupBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
		static_cast<System::Int32>(static_cast<System::Byte>(42)));
	groupBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
		static_cast<System::Int32>(static_cast<System::Byte>(42)));
	
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	//inventory_report^ obj = gcnew inventory_report();
	//obj->Visible = true;

	groupBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
		static_cast<System::Int32>(static_cast<System::Byte>(42)));
	groupBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
		static_cast<System::Int32>(static_cast<System::Byte>(42)));

	panel4->Visible = false;
	panel6->Visible = false;
	panel7->Visible = true;

	groupBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
		static_cast<System::Int32>(static_cast<System::Byte>(65)));
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	label12->Text = System::DateTime::Now.ToString();
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	user_details^ user = gcnew user_details(UserID);
	user->Show();
}
};
}

#pragma once
#include "add_product.h"
#include "update_product.h"
#include "inventory_report.h"
#include "billing.h"
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
	/// Summary for inventory
	/// </summary>
	public ref class inventory : public System::Windows::Forms::Form
	{
	public:
		inventory(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->StartPosition = FormStartPosition::CenterScreen;

		}
		inventory(int userid)
		{
			InitializeComponent();
			//timer1->Start();
			UserID = userid;
			this->StartPosition = FormStartPosition::CenterScreen;

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel3;







	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::BindingSource^ bindingSource2;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Button^ button6;

	private: System::ComponentModel::IContainer^ components;



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
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(inventory::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->button1->Location = System::Drawing::Point(545, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ADD PRODUCT";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &inventory::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->label1->Location = System::Drawing::Point(191, 82);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Inventory";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(228)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->button2->Location = System::Drawing::Point(545, 80);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 40);
			this->button2->TabIndex = 2;
			this->button2->Text = L"DELETE";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &inventory::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(197, 335);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(693, 203);
			this->dataGridView1->TabIndex = 5;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Window;
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1185, 26);
			this->panel1->TabIndex = 8;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(-1, 0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(29, 27);
			this->button6->TabIndex = 2;
			this->button6->Text = L"<";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &inventory::button6_Click_1);
			// 
			// button5
			// 
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(1063, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(40, 24);
			this->button5->TabIndex = 1;
			this->button5->Text = L"X";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &inventory::button5_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->pictureBox5);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Location = System::Drawing::Point(0, 26);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1185, 34);
			this->panel2->TabIndex = 9;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->panel5->Location = System::Drawing::Point(1050, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(4, 32);
			this->panel5->TabIndex = 7;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Location = System::Drawing::Point(1063, 3);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(29, 28);
			this->pictureBox5->TabIndex = 6;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &inventory::pictureBox5_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(1, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(40, 34);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->button4->Location = System::Drawing::Point(955, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 28);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Account";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->panel3->Controls->Add(this->groupBox3);
			this->panel3->Location = System::Drawing::Point(-1, 59);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(175, 479);
			this->panel3->TabIndex = 10;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->groupBox3->Controls->Add(this->panel4);
			this->groupBox3->Controls->Add(this->button8);
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
			// button8
			// 
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(60, 23);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(94, 40);
			this->button8->TabIndex = 17;
			this->button8->Text = L"Inventory";
			this->button8->UseVisualStyleBackColor = true;
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
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->groupBox5);
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(197, 117);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(693, 205);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->comboBox1);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox5->Location = System::Drawing::Point(32, 19);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(424, 81);
			this->groupBox5->TabIndex = 22;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Display options";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::Window;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Display All", L"In Stock", L"Running out of stock" });
			this->comboBox1->Location = System::Drawing::Point(78, 37);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(162, 25);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->Text = L"In Stock";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &inventory::comboBox1_SelectedIndexChanged);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->comboBox2);
			this->groupBox4->Controls->Add(this->pictureBox6);
			this->groupBox4->Controls->Add(this->comboBox3);
			this->groupBox4->Controls->Add(this->textBox1);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(32, 106);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(500, 74);
			this->groupBox4->TabIndex = 21;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Search Options";
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Display All", L"Search by ID", L"Search by Name",
					L"Search by Category", L"Search by Quantity"
			});
			this->comboBox2->Location = System::Drawing::Point(78, 28);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(162, 25);
			this->comboBox2->TabIndex = 17;
			this->comboBox2->Text = L"Search by ID";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &inventory::comboBox2_SelectedIndexChanged);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::White;
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox6->Location = System::Drawing::Point(430, 26);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(24, 25);
			this->pictureBox6->TabIndex = 19;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &inventory::pictureBox6_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::SystemColors::Window;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->ForeColor = System::Drawing::SystemColors::WindowText;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"Grocery", L"Dairy and Beverages", L"Packaged food",
					L"Fruits and Vegetables", L"Home and Kitchen", L"Personal care", L"Baby and Kids", L"Appliances", L"Footwear", L"Clothing", L"Cloting accessories",
					L"Stationary", L"Specials"
			});
			this->comboBox3->Location = System::Drawing::Point(262, 25);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(162, 25);
			this->comboBox3->TabIndex = 20;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(262, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(162, 23);
			this->textBox1->TabIndex = 18;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button3->Location = System::Drawing::Point(545, 140);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 40);
			this->button3->TabIndex = 3;
			this->button3->Text = L"UPDATE";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &inventory::button3_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::White;
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Location = System::Drawing::Point(916, 92);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(176, 446);
			this->groupBox2->TabIndex = 16;
			this->groupBox2->TabStop = false;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(21, 210);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(136, 20);
			this->textBox3->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(18, 177);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(152, 17);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Total Product Categories";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(21, 122);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(136, 20);
			this->textBox2->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(18, 86);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 17);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Total Products";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(177)));
			this->label3->Location = System::Drawing::Point(16, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 25);
			this->label3->TabIndex = 0;
			this->label3->Text = L"OVERVIEW";
			// 
			// inventory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->ClientSize = System::Drawing::Size(1100, 550);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"inventory";
			this->Text = L"inventory";
			this->Load += gcnew System::EventHandler(this, &inventory::inventory_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int UserID;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		add_product^ obj = gcnew add_product();
		obj->Visible = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		update_product^ obj = gcnew update_product();
		obj->Visible = true;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		update_product^ obj = gcnew update_product();
		obj->Visible = true;
	}
	
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	inventory_report^ module1 = gcnew inventory_report();
	module1->Show();
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
	String^ opt_selected = (comboBox1->SelectedItem)->ToString();
	if (opt_selected == "Display All") {
		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=inventory";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			String^ sql_query = "select * from stock";
			MySqlDataAdapter^ cmd = gcnew MySqlDataAdapter(sql_query, con);
			con->Open();
			DataTable^ dt = gcnew DataTable();
			cmd->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
			con->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	else if (opt_selected == "In Stock") {
		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=inventory";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			String^ sql_query = "select * from stock WHERE product_qty > 50";
			MySqlDataAdapter^ cmd = gcnew MySqlDataAdapter(sql_query, con);
			con->Open();
			DataTable^ dt = gcnew DataTable();
			cmd->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
			con->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	else if (opt_selected == "Running out of stock") {
		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=inventory";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			String^ sql_query = "select * from stock WHERE product_qty <= 50";
			MySqlDataAdapter^ cmd = gcnew MySqlDataAdapter(sql_query, con);
			con->Open();
			DataTable^ dt = gcnew DataTable();
			cmd->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
			con->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->Hide();
	groupBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
		static_cast<System::Int32>(static_cast<System::Byte>(42)));
	groupBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
		static_cast<System::Int32>(static_cast<System::Byte>(42)));
	panel4->Visible = false;
	panel6->Visible = true;
	panel7->Visible = false;
	groupBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
		static_cast<System::Int32>(static_cast<System::Byte>(65)));
	billing^ obj = gcnew billing();
	//obj->Visible = true;
	obj->ShowDialog();
}
private: System::Void inventory_Load(System::Object^ sender, System::EventArgs^ e) {
	panel6->Visible = false;
	panel7->Visible = false;
	comboBox3->Visible = false;

	try {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=inventory";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		MySqlCommand^ cmd = gcnew MySqlCommand("select count(product_id),count(distinct(product_category)) from stock", con);
		con->Open();
		MySqlDataReader^ dr = cmd->ExecuteReader();
		while (dr->Read()) {
			textBox2->Text = dr->GetString(0);
			textBox3->Text = dr->GetString(1);
		}
		con->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	
	

	groupBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
		static_cast<System::Int32>(static_cast<System::Byte>(65)));
	groupBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
		static_cast<System::Int32>(static_cast<System::Byte>(42)));
	groupBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
		static_cast<System::Int32>(static_cast<System::Byte>(42)));

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	inventory_report^ obj = gcnew inventory_report();
	obj->Visible = true;
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
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ opt_selected = (comboBox2->SelectedItem)->ToString();
	String^ sql_query;
	if (opt_selected == "Search by Category") {
		if (comboBox3->SelectedIndex == -1) {
			MessageBox::Show("Please select one category");
			return;
		}
	}
	else if (opt_selected != "Display All") {
		if (textBox1->Text == "") {
			MessageBox::Show("Please fill all fields");
			return;
		}
	}
	try
	{
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=inventory";
		MySqlConnection^ con = gcnew MySqlConnection(constr);


		if (opt_selected == "Search by ID") {
			double product_id = double::Parse(textBox1->Text);
			sql_query = "select * from stock where product_id=" + product_id + "";
		}
		else if (opt_selected == "Search by Name") {
			String^ product_name = textBox1->Text;
			sql_query = "select * from stock where product_name='" + product_name + "'";
		}
		else if (opt_selected == "Search by Category") {
			String^ category = (comboBox3->SelectedItem)->ToString();
			sql_query = "select * from stock where product_category='" + category + "'";
		}
		else if (opt_selected == "Search by Quantity") {
			int quantity = Int32::Parse(textBox1->Text);
			sql_query = "select * from stock where product_qty=" + quantity + "";
		}
		else if (opt_selected == "Display All") {
			sql_query = "select * from stock";
		}
		else {
			MessageBox::Show("unable to fetch query!\nDisplaying all rows!");
			sql_query = "select * from stock";
		}

		MySqlDataAdapter^ cmd = gcnew MySqlDataAdapter(sql_query, con);
		con->Open();
		DataTable^ dt = gcnew DataTable();
		cmd->Fill(dt);
		if (dt->Rows->Count == 0) {
			MessageBox::Show("No data found for given search");
			return;
		}
		else {
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
			MessageBox::Show("Database table fetched");
			con->Close();
		}
	}
	catch (Exception^ ex) {
		if (ex->Message == "Input string was not in a correct format.") {
			MessageBox::Show("Inputs given are incorrect!");
		}
		else {
			MessageBox::Show(ex->Message);
		}
	}
}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ opt_selected = (comboBox2->SelectedItem)->ToString();
		if (opt_selected == "Search by Category") {
			comboBox3->Visible = true;
		}
		else {
			comboBox3->Visible = false;
		}
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	user_details^ user = gcnew user_details(UserID);
	user->Show();
}
private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
};
}
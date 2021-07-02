#pragma once
//using namespace System;
//#include "Dashboard.h"
#include "inventory.h"
#include "billing.h"
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
	/// Summary for login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
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
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button6;







	protected:

	protected:









	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->panel1->Location = System::Drawing::Point(65, 122);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(175, 3);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(62, 102);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"WELCOME";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->panel2->Controls->Add(this->comboBox1);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->textBox9);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->textBox8);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->textBox7);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Location = System::Drawing::Point(460, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(458, 615);
			this->panel2->TabIndex = 3;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Manager", L"Sales Executive" });
			this->comboBox1->Location = System::Drawing::Point(267, 287);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(137, 21);
			this->comboBox1->TabIndex = 18;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::Window;
			this->button5->Location = System::Drawing::Point(101, 567);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(115, 35);
			this->button5->TabIndex = 17;
			this->button5->Text = L"Get Password";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &login::button5_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Window;
			this->button3->Location = System::Drawing::Point(305, 567);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(99, 35);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Sign Up";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &login::button3_Click);
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBox9->Location = System::Drawing::Point(267, 524);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(137, 20);
			this->textBox9->TabIndex = 15;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::Window;
			this->label13->Location = System::Drawing::Point(43, 524);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(187, 20);
			this->label13->TabIndex = 14;
			this->label13->Text = L"What\'s your favourite city \?";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBox8->Location = System::Drawing::Point(267, 474);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(137, 20);
			this->textBox8->TabIndex = 13;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::Window;
			this->label12->Location = System::Drawing::Point(43, 474);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(197, 20);
			this->label12->TabIndex = 12;
			this->label12->Text = L"What\'s your birth city name \?";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::Window;
			this->label11->Location = System::Drawing::Point(43, 422);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(135, 20);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Security Questions:";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBox7->Location = System::Drawing::Point(46, 371);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(137, 20);
			this->textBox7->TabIndex = 10;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::Window;
			this->label10->Location = System::Drawing::Point(43, 334);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(103, 20);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Phone Number";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::Window;
			this->label9->Location = System::Drawing::Point(263, 242);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(87, 20);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Designation";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBox5->Location = System::Drawing::Point(46, 289);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(137, 20);
			this->textBox5->TabIndex = 6;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::Window;
			this->label8->Location = System::Drawing::Point(43, 245);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(46, 20);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Name";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBox4->Location = System::Drawing::Point(267, 197);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(137, 20);
			this->textBox4->TabIndex = 4;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::Window;
			this->label7->Location = System::Drawing::Point(263, 157);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 20);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Password";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBox3->Location = System::Drawing::Point(46, 197);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(137, 20);
			this->textBox3->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Window;
			this->label6->Location = System::Drawing::Point(43, 157);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 20);
			this->label6->TabIndex = 1;
			this->label6->Text = L"User ID";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Window;
			this->label5->Location = System::Drawing::Point(40, 79);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(159, 44);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Sign up Here";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->label2->Location = System::Drawing::Point(30, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 29);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Sign In";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->label3->Location = System::Drawing::Point(33, 78);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 20);
			this->label3->TabIndex = 1;
			this->label3->Text = L"User ID";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(35, 116);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(224, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->label4->Location = System::Drawing::Point(31, 160);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Password";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBox2->Location = System::Drawing::Point(35, 191);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(224, 20);
			this->textBox2->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Window;
			this->button1->Location = System::Drawing::Point(35, 239);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 35);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Sign In";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &login::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(65, 131);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(340, 365);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::Window;
			this->button4->Location = System::Drawing::Point(35, 319);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(99, 35);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Sign Up";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &login::button4_Click);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(110)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->button2->Location = System::Drawing::Point(25, 284);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 29);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Forgot Password \?";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &login::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(65, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(340, 75);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::Window;
			this->button6->Location = System::Drawing::Point(100, 539);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(99, 35);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Test Page";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &login::button6_Click);
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(919, 616);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"+";
			this->Load += gcnew System::EventHandler(this, &login::login_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void login_Load(System::Object^ sender, System::EventArgs^ e) {
		label5->Visible = false;
		label6->Visible = false;
		label7->Visible = false;
		label8->Visible = false;
		label9->Visible = false;
		label10->Visible = false;
		label11->Visible = false;
		label12->Visible = false;
		label13->Visible = false;

		button3->Visible = false;
		button5->Visible = false;

		textBox3->Visible = false;
		textBox4->Visible = false;
		textBox5->Visible = false;
		comboBox1->Visible = false;
		textBox7->Visible = false;
		textBox8->Visible = false;
		textBox9->Visible = false;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		label5->Visible = true;
		label6->Visible = true;
		label7->Visible = true;
		label8->Visible = true;
		label9->Visible = true;
		label10->Visible = true;
		label11->Visible = true;
		label12->Visible = true;
		label13->Visible = true;

		button3->Visible = true;
		button4->Visible = false;
		button5->Visible = false;

		textBox3->Visible = true;
		textBox4->Visible = true;
		textBox5->Visible = true;
		comboBox1->Visible = true;
		textBox7->Visible = true;
		textBox8->Visible = true;
		textBox9->Visible = true;
	}
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
			while (dr->Read()) {
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
						module1->Visible = true;
					}
					else if (Designation == "Sales Executive") {
						billing^ module1 = gcnew billing();
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
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
			label12->Visible = true;
			label13->Visible = true;
			textBox8->Visible = true;
			textBox9->Visible = true;
			button5->Visible = true;
			
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int result;
		int UserID = Int32::Parse(textBox1->Text);
		String^ SecurityQ1 = textBox8->Text;
		String^ SecurityQ2 = textBox9->Text;
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
		if (System::Convert::ToString(ex->Message) == "Input string was not in a correct format.") {
			MessageBox::Show("Enter UserID");
		}
		else {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int UserID = Int32::Parse(textBox3->Text);
		String^ Password = textBox4->Text;
		String^ Name = textBox5->Text;
		String^ Designation = (comboBox1->SelectedItem)->ToString();
		String^ Contact = textBox7->Text;
		String^ SecurityQ1 = textBox8->Text;
		String^ SecurityQ2 = textBox9->Text;

		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=users";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		MySqlCommand^ cmd = gcnew MySqlCommand("insert into employee values(" + UserID + ",'" + Password + "','" + Name + "','" + Designation + "','" + Contact + "','" + SecurityQ1 + "','" + SecurityQ2 + "')", con);
		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();
		MessageBox::Show("User Created");
		con->Close();
	}
	catch (Exception^ ex) {
		if (System::Convert::ToString(ex->Message) == "Input string was not in a correct format.") {
			MessageBox::Show("Enter all Fields properly");
		}
		else {
			MessageBox::Show(ex->Message);
		}
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	sales_report^ module1 = gcnew sales_report();
	module1->Show();
}
};
}

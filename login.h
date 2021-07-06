#pragma once
//using namespace System;
//#include "Dashboard.h"
#include "inventory.h"
#include "billing.h"
#include "manager_dashboard.h"

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
			this->StartPosition = FormStartPosition::CenterScreen;
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

	private: System::Windows::Forms::PictureBox^ pictureBox1;












	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Button^ button5;


	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label14;

	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label16;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ title_label;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ createdby_label;

	private: System::Windows::Forms::Label^ name_display_label;
	private: System::Windows::Forms::PictureBox^ pictureBox2;












	private: System::ComponentModel::IContainer^ components;







	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(login::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->name_display_label = (gcnew System::Windows::Forms::Label());
			this->createdby_label = (gcnew System::Windows::Forms::Label());
			this->title_label = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->panel1->Location = System::Drawing::Point(65, 145);
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
			this->label1->Location = System::Drawing::Point(62, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"WELCOME";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->title_label);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->textBox9);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Location = System::Drawing::Point(460, 27);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(458, 523);
			this->panel2->TabIndex = 3;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->name_display_label);
			this->panel5->Controls->Add(this->createdby_label);
			this->panel5->Location = System::Drawing::Point(28, 193);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(397, 159);
			this->panel5->TabIndex = 18;
			// 
			// name_display_label
			// 
			this->name_display_label->AutoSize = true;
			this->name_display_label->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_display_label->ForeColor = System::Drawing::Color::White;
			this->name_display_label->Location = System::Drawing::Point(150, 17);
			this->name_display_label->Name = L"name_display_label";
			this->name_display_label->Size = System::Drawing::Size(222, 63);
			this->name_display_label->TabIndex = 1;
			this->name_display_label->Text = L"1. Omkar Kajarekar\n2. Prathamesh Jadhav\n3. Bhavya Oswal";
			// 
			// createdby_label
			// 
			this->createdby_label->AutoSize = true;
			this->createdby_label->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->createdby_label->ForeColor = System::Drawing::Color::White;
			this->createdby_label->Location = System::Drawing::Point(14, 17);
			this->createdby_label->Name = L"createdby_label";
			this->createdby_label->Size = System::Drawing::Size(115, 22);
			this->createdby_label->TabIndex = 0;
			this->createdby_label->Text = L"Developed By:";
			this->createdby_label->Click += gcnew System::EventHandler(this, &login::label6_Click);
			// 
			// title_label
			// 
			this->title_label->AutoSize = true;
			this->title_label->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title_label->ForeColor = System::Drawing::Color::White;
			this->title_label->Location = System::Drawing::Point(39, 110);
			this->title_label->Name = L"title_label";
			this->title_label->Size = System::Drawing::Size(370, 74);
			this->title_label->TabIndex = 17;
			this->title_label->Text = L"Supermarket Inventory and\r\nBilling System";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label14);
			this->panel4->Controls->Add(this->textBox6);
			this->panel4->Controls->Add(this->label16);
			this->panel4->Controls->Add(this->textBox10);
			this->panel4->Controls->Add(this->label15);
			this->panel4->Controls->Add(this->button5);
			this->panel4->Location = System::Drawing::Point(29, 193);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(399, 318);
			this->panel4->TabIndex = 10;
			this->panel4->Visible = false;
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::Window;
			this->label14->Location = System::Drawing::Point(12, 28);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(210, 44);
			this->label14->TabIndex = 19;
			this->label14->Text = L"Forgot  Password";
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBox6->Location = System::Drawing::Point(236, 192);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(137, 20);
			this->textBox6->TabIndex = 24;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &login::textBox6_KeyPress);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::SystemColors::Window;
			this->label16->Location = System::Drawing::Point(14, 120);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(197, 20);
			this->label16->TabIndex = 21;
			this->label16->Text = L"What\'s your birth city name \?";
			this->label16->Click += gcnew System::EventHandler(this, &login::label16_Click);
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBox10->Location = System::Drawing::Point(236, 120);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(137, 20);
			this->textBox10->TabIndex = 22;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::SystemColors::Window;
			this->label15->Location = System::Drawing::Point(14, 192);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(204, 20);
			this->label15->TabIndex = 23;
			this->label15->Text = L"What\'s your first Contact no. \?";
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
			this->button5->Location = System::Drawing::Point(27, 239);
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
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->textBox9->Location = System::Drawing::Point(267, 524);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(137, 20);
			this->textBox9->TabIndex = 15;
			this->textBox9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &login::textBox9_KeyPress);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::Window;
			this->label13->Location = System::Drawing::Point(43, 524);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(204, 20);
			this->label13->TabIndex = 14;
			this->label13->Text = L"What\'s your first Contact no. \?";
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
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &login::textBox1_KeyPress);
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
			this->textBox2->UseSystemPasswordChar = true;
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
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(65, 154);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(340, 365);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(110)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->button2->Location = System::Drawing::Point(35, 286);
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
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(40, 33);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(400, 123);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button7);
			this->panel3->Location = System::Drawing::Point(0, 1);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(918, 26);
			this->panel3->TabIndex = 9;
			// 
			// button7
			// 
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(883, 0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(34, 22);
			this->button7->TabIndex = 0;
			this->button7->Text = L"X";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &login::button7_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(47, 15);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(358, 91);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(919, 550);
			this->Controls->Add(this->panel3);
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
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void login_Load(System::Object^ sender, System::EventArgs^ e) {
		label13->Visible = false;
		label14->Visible = false;
		label15->Visible = false;
		label16->Visible = false;
		

		button3->Visible = false;
		button5->Visible = false;

		
		textBox6->Visible = false;
		
		textBox9->Visible = false;
		textBox10->Visible = false;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		label13->Visible = true;
		label14->Visible = false;
		label15->Visible = false;
		label16->Visible = false;
		
		button2->Visible = true;
		button3->Visible = true;
		button5->Visible = false;

		
		textBox6->Visible = false;
		
		textBox9->Visible = true;
		textBox10->Visible = false;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int result;
			if (textBox1->Text == "") {
				MessageBox::Show("Enter UserID");
			}
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
				con->Close();
				if (Password == DB_Password) {
					if (Designation == "Manager") {
						manager_dashboard^ module1 = gcnew manager_dashboard(UserID);
						module1->Visible = true;
					}
					else if (Designation == "Inventory Executive") {
						inventory^ module1 = gcnew inventory(UserID);
						module1->Visible = true;
					}
					else if (Designation == "Sales Executive") {
						billing^ module1 = gcnew billing(UserID);
						module1->Visible = true;
					}
				}
				else {
					MessageBox::Show("Invalid Password");
				}
				
			}
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
		
			panel4->Visible = true;
			panel5->Visible = false;
			label13->Visible = false;
			textBox9->Visible = false;;
			button5->Visible = true;
			button2->Visible = false;
			button3->Visible = false;
			
			label13->Visible = false;

			
			textBox9->Visible = false;

			
			label14->Visible = true;

			label15->Visible = true;
			label16->Visible = true;

			textBox6->Visible = true;
			textBox10->Visible = true;

	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		textBox2->UseSystemPasswordChar = false;
		int result;
		int UserID = Int32::Parse(textBox1->Text);
		String^ SecurityQ1 = textBox10->Text;
		String^ SecurityQ2 = textBox6->Text;
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


private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
Void isdigit(System::Windows::Forms::KeyPressEventArgs^ e) {
	char ch = e->KeyChar;
	if (!Char::IsDigit(ch) && ch != 8 && ch != 46) {
		e->Handled = true;
	}
}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	isdigit(e);
}
private: System::Void textBox6_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	isdigit(e);
}
private: System::Void textBox9_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	isdigit(e);
}
private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	isdigit(e);
}
private: System::Void textBox7_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	isdigit(e);
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}

};
}

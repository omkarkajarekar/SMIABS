#pragma once

namespace SupermarketInventoryandBillingSystem {

	using namespace System::Globalization;
	using namespace MySql::Data::MySqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for add_product
	/// </summary>
	public ref class add_employee : public System::Windows::Forms::Form
	{
	public:
		add_employee(void)
		{
			InitializeComponent();
			this->StartPosition = FormStartPosition::CenterScreen;
			//
			//TODO: Add the constructor code here
			//
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~add_employee()
		{
			if (components)
			{
				delete components;

			}
		}
	private: System::Windows::Forms::Button^ save_btn;
	private: System::Windows::Forms::TextBox^ textbox1;
	protected:


	private: System::Windows::Forms::Label^ UserID_lbl;
	private: System::Windows::Forms::Label^ Password_lbl;
	private: System::Windows::Forms::TextBox^ textbox2;




	private: System::Windows::Forms::Label^ Designation_lbl;
	private: System::Windows::Forms::Label^ Contact_lbl;
	private: System::Windows::Forms::TextBox^ textbox6;








	private: System::Windows::Forms::TextBox^ textbox5;


	private: System::Windows::Forms::Label^ Age_lbl;






	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ Name_lbl;
	private: System::Windows::Forms::TextBox^ textbox3;
	private: System::Windows::Forms::TextBox^ textbox7;



	private: System::Windows::Forms::Label^ Security_Q1_lbl;



	private: System::Windows::Forms::BindingSource^ bindingSource1;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textbox8;

	private: System::Windows::Forms::Label^ label1;

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
			this->save_btn = (gcnew System::Windows::Forms::Button());
			this->textbox1 = (gcnew System::Windows::Forms::TextBox());
			this->UserID_lbl = (gcnew System::Windows::Forms::Label());
			this->Password_lbl = (gcnew System::Windows::Forms::Label());
			this->textbox2 = (gcnew System::Windows::Forms::TextBox());
			this->Designation_lbl = (gcnew System::Windows::Forms::Label());
			this->Contact_lbl = (gcnew System::Windows::Forms::Label());
			this->textbox6 = (gcnew System::Windows::Forms::TextBox());
			this->textbox5 = (gcnew System::Windows::Forms::TextBox());
			this->Age_lbl = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Name_lbl = (gcnew System::Windows::Forms::Label());
			this->textbox3 = (gcnew System::Windows::Forms::TextBox());
			this->textbox7 = (gcnew System::Windows::Forms::TextBox());
			this->Security_Q1_lbl = (gcnew System::Windows::Forms::Label());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textbox8 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// save_btn
			// 
			this->save_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->save_btn->Cursor = System::Windows::Forms::Cursors::Default;
			this->save_btn->FlatAppearance->BorderSize = 0;
			this->save_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->save_btn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save_btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->save_btn->Location = System::Drawing::Point(489, 113);
			this->save_btn->Name = L"save_btn";
			this->save_btn->Size = System::Drawing::Size(378, 27);
			this->save_btn->TabIndex = 8;
			this->save_btn->Text = L"Add Employee";
			this->save_btn->UseVisualStyleBackColor = false;
			this->save_btn->Click += gcnew System::EventHandler(this, &add_employee::button1_Click);
			// 
			// textbox1
			// 
			this->textbox1->Location = System::Drawing::Point(54, 52);
			this->textbox1->Name = L"textbox1";
			this->textbox1->Size = System::Drawing::Size(161, 20);
			this->textbox1->TabIndex = 0;
			// 
			// UserID_lbl
			// 
			this->UserID_lbl->AutoSize = true;
			this->UserID_lbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserID_lbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->UserID_lbl->Location = System::Drawing::Point(51, 21);
			this->UserID_lbl->Name = L"UserID_lbl";
			this->UserID_lbl->Size = System::Drawing::Size(53, 20);
			this->UserID_lbl->TabIndex = 9;
			this->UserID_lbl->Text = L"UserID";
			// 
			// Password_lbl
			// 
			this->Password_lbl->AutoSize = true;
			this->Password_lbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Password_lbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->Password_lbl->Location = System::Drawing::Point(274, 21);
			this->Password_lbl->Name = L"Password_lbl";
			this->Password_lbl->Size = System::Drawing::Size(71, 20);
			this->Password_lbl->TabIndex = 10;
			this->Password_lbl->Text = L"Password";
			// 
			// textbox2
			// 
			this->textbox2->Location = System::Drawing::Point(279, 52);
			this->textbox2->Name = L"textbox2";
			this->textbox2->Size = System::Drawing::Size(161, 20);
			this->textbox2->TabIndex = 2;
			// 
			// Designation_lbl
			// 
			this->Designation_lbl->AutoSize = true;
			this->Designation_lbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Designation_lbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->Designation_lbl->Location = System::Drawing::Point(702, 21);
			this->Designation_lbl->Name = L"Designation_lbl";
			this->Designation_lbl->Size = System::Drawing::Size(89, 20);
			this->Designation_lbl->TabIndex = 14;
			this->Designation_lbl->Text = L"Designation";
			// 
			// Contact_lbl
			// 
			this->Contact_lbl->AutoSize = true;
			this->Contact_lbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Contact_lbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->Contact_lbl->Location = System::Drawing::Point(275, 84);
			this->Contact_lbl->Name = L"Contact_lbl";
			this->Contact_lbl->Size = System::Drawing::Size(60, 20);
			this->Contact_lbl->TabIndex = 12;
			this->Contact_lbl->Text = L"Contact";
			this->Contact_lbl->Click += gcnew System::EventHandler(this, &add_employee::label4_Click);
			// 
			// textbox6
			// 
			this->textbox6->Location = System::Drawing::Point(279, 117);
			this->textbox6->Name = L"textbox6";
			this->textbox6->Size = System::Drawing::Size(161, 20);
			this->textbox6->TabIndex = 4;
			// 
			// textbox5
			// 
			this->textbox5->Location = System::Drawing::Point(54, 117);
			this->textbox5->Name = L"textbox5";
			this->textbox5->Size = System::Drawing::Size(161, 20);
			this->textbox5->TabIndex = 7;
			// 
			// Age_lbl
			// 
			this->Age_lbl->AutoSize = true;
			this->Age_lbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Age_lbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->Age_lbl->Location = System::Drawing::Point(51, 84);
			this->Age_lbl->Name = L"Age_lbl";
			this->Age_lbl->Size = System::Drawing::Size(36, 20);
			this->Age_lbl->TabIndex = 15;
			this->Age_lbl->Text = L"Age";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Manager", L"Inventory Executive", L"Sales Executive" });
			this->comboBox1->Location = System::Drawing::Point(706, 51);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(161, 21);
			this->comboBox1->TabIndex = 6;
			// 
			// Name_lbl
			// 
			this->Name_lbl->AutoSize = true;
			this->Name_lbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name_lbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->Name_lbl->Location = System::Drawing::Point(485, 21);
			this->Name_lbl->Name = L"Name_lbl";
			this->Name_lbl->Size = System::Drawing::Size(49, 20);
			this->Name_lbl->TabIndex = 11;
			this->Name_lbl->Text = L"Name";
			// 
			// textbox3
			// 
			this->textbox3->Location = System::Drawing::Point(489, 51);
			this->textbox3->Name = L"textbox3";
			this->textbox3->Size = System::Drawing::Size(161, 20);
			this->textbox3->TabIndex = 3;
			// 
			// textbox7
			// 
			this->textbox7->Location = System::Drawing::Point(278, 193);
			this->textbox7->Name = L"textbox7";
			this->textbox7->Size = System::Drawing::Size(161, 20);
			this->textbox7->TabIndex = 5;
			// 
			// Security_Q1_lbl
			// 
			this->Security_Q1_lbl->AutoSize = true;
			this->Security_Q1_lbl->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Security_Q1_lbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->Security_Q1_lbl->Location = System::Drawing::Point(51, 170);
			this->Security_Q1_lbl->Name = L"Security_Q1_lbl";
			this->Security_Q1_lbl->Size = System::Drawing::Size(135, 20);
			this->Security_Q1_lbl->TabIndex = 13;
			this->Security_Q1_lbl->Text = L"Security Question1:";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Window;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Location = System::Drawing::Point(-3, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1179, 36);
			this->panel1->TabIndex = 18;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(35, 36);
			this->pictureBox1->TabIndex = 25;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &add_employee::pictureBox1_Click);
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
			this->button5->Size = System::Drawing::Size(40, 33);
			this->button5->TabIndex = 1;
			this->button5->Text = L"X";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &add_employee::button5_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->label7->Location = System::Drawing::Point(36, 39);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(195, 30);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Add New Employee";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textbox8);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->Security_Q1_lbl);
			this->groupBox1->Controls->Add(this->textbox7);
			this->groupBox1->Controls->Add(this->textbox3);
			this->groupBox1->Controls->Add(this->Name_lbl);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textbox5);
			this->groupBox1->Controls->Add(this->Age_lbl);
			this->groupBox1->Controls->Add(this->Designation_lbl);
			this->groupBox1->Controls->Add(this->Contact_lbl);
			this->groupBox1->Controls->Add(this->textbox6);
			this->groupBox1->Controls->Add(this->textbox2);
			this->groupBox1->Controls->Add(this->Password_lbl);
			this->groupBox1->Controls->Add(this->UserID_lbl);
			this->groupBox1->Controls->Add(this->textbox1);
			this->groupBox1->Controls->Add(this->save_btn);
			this->groupBox1->Location = System::Drawing::Point(76, 86);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(953, 236);
			this->groupBox1->TabIndex = 23;
			this->groupBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label2->Location = System::Drawing::Point(485, 196);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(174, 17);
			this->label2->TabIndex = 38;
			this->label2->Text = L"What\'s your first contact no\?";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label3->Location = System::Drawing::Point(485, 170);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(135, 20);
			this->label3->TabIndex = 37;
			this->label3->Text = L"Security Question2:";
			// 
			// textbox8
			// 
			this->textbox8->Location = System::Drawing::Point(706, 196);
			this->textbox8->Name = L"textbox8";
			this->textbox8->Size = System::Drawing::Size(161, 20);
			this->textbox8->TabIndex = 36;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label1->Location = System::Drawing::Point(51, 196);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 17);
			this->label1->TabIndex = 35;
			this->label1->Text = L"What\'s your birth city name\?";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->label9->Location = System::Drawing::Point(124, 342);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(169, 20);
			this->label9->TabIndex = 24;
			this->label9->Text = L"Newly Added Employee";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(128, 365);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(807, 158);
			this->dataGridView1->TabIndex = 25;
			// 
			// add_employee
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->ClientSize = System::Drawing::Size(1100, 550);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"add_employee";
			this->Text = L"add_employee";
			this->Load += gcnew System::EventHandler(this, &add_employee::add_employee_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Visible = true;
		//declarations
		int UserId, Age;
		String^ Password;
		String^ name;
		String^ Designation;
		String^ Contact;
		String^ SecurityQ1;
		String^ SecurityQ2;
		//if to check empty textboxes
		if (textbox1->Text == "" || textbox2->Text == "" || textbox3->Text == "" || textbox5->Text == "" || textbox6->Text == "" || textbox7->Text == "" || textbox8->Text == "" || comboBox1->SelectedIndex == -1)
		{
			MessageBox::Show("Please fill all fields");
		}
		else {
			try
			{
				String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=users";
				MySqlConnection^ con = gcnew MySqlConnection(constr);

				//extracting input and checking for inproper inputs
				try {
					UserId = int::Parse(textbox1->Text);
					Password = textbox2->Text;
					name = textbox3->Text;
					Designation = (comboBox1->SelectedItem)->ToString();
					Age = int::Parse(textbox5->Text);
					Contact = textbox6->Text;
					SecurityQ1 = textbox7->Text;
					SecurityQ2 = textbox8->Text;
				}
				catch (Exception^ ex) {
					MessageBox::Show("One or more inputs are Wrong!");
					return;
				}
				MySqlDataAdapter^ cmd;
				try {
					cmd = gcnew MySqlDataAdapter("insert into employee values(" + UserId + ",'" + Password + "', '" + name + "','" + Designation + "'," + Age + ",'" + Contact + "','" + SecurityQ1 + "','" + SecurityQ2 + "');select * from employee where UserID=" + UserId + "", con);
				}
				catch (Exception^ ex) {
					MessageBox::Show("Unable to create sql command!");
					return;
				}
				DataTable^ dt = gcnew DataTable();
				cmd->Fill(dt);
				bindingSource1->DataSource = dt;
				dataGridView1->DataSource = bindingSource1;
				MessageBox::Show("Employee Added sucessfully");
				con->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	}

	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void add_employee_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Visible = false;
	}
	private: System::Void back_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		textbox1->Text = "";
		textbox2->Text = "";
		textbox3->Text = "";
		comboBox1->Text = "";
		textbox5->Text = "";
		textbox6->Text = "";
		textbox7->Text = "";
		textbox8->Text = "";
	}
};


}

#pragma once

namespace SupermarketInventoryandBillingSystem {

	using namespace MySql::Data::MySqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for update_product
	/// </summary>
	public ref class update_employee : public System::Windows::Forms::Form
	{
	public:
		update_employee(void)
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
		~update_employee()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ update;
	protected:

	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ id_textBox;

	private: System::Windows::Forms::TextBox^ new_data_txtbox;
	private: System::Windows::Forms::Label^ id_label;
	private: System::Windows::Forms::Label^ new_data_label;

	private: System::Windows::Forms::Label^ operation_label;
	private: System::Windows::Forms::Button^ remove_button;
	private: System::Windows::Forms::BindingSource^ bindingSource1;




	private: System::Windows::Forms::BindingSource^ bindingSource2;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ComboBox^ operation_comboBox;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::BindingSource^ bindingSource3;


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
			this->update = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->id_textBox = (gcnew System::Windows::Forms::TextBox());
			this->new_data_txtbox = (gcnew System::Windows::Forms::TextBox());
			this->id_label = (gcnew System::Windows::Forms::Label());
			this->new_data_label = (gcnew System::Windows::Forms::Label());
			this->operation_label = (gcnew System::Windows::Forms::Label());
			this->remove_button = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->operation_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->bindingSource3 = (gcnew System::Windows::Forms::BindingSource(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource3))->BeginInit();
			this->SuspendLayout();
			// 
			// update
			// 
			this->update->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->update->FlatAppearance->BorderSize = 0;
			this->update->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->update->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->update->Location = System::Drawing::Point(139, 121);
			this->update->Name = L"update";
			this->update->Size = System::Drawing::Size(102, 27);
			this->update->TabIndex = 0;
			this->update->Text = L"Update";
			this->update->UseVisualStyleBackColor = false;
			this->update->Visible = false;
			this->update->Click += gcnew System::EventHandler(this, &update_employee::update_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Enabled = false;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Name", L"Designation", L"Age", L"Contact" });
			this->comboBox1->Location = System::Drawing::Point(376, 49);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(157, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &update_employee::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label1->Location = System::Drawing::Point(373, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Select field to update :";
			// 
			// id_textBox
			// 
			this->id_textBox->Location = System::Drawing::Point(22, 50);
			this->id_textBox->Name = L"id_textBox";
			this->id_textBox->Size = System::Drawing::Size(112, 20);
			this->id_textBox->TabIndex = 3;
			this->id_textBox->TextChanged += gcnew System::EventHandler(this, &update_employee::id_textBox_TextChanged);
			// 
			// new_data_txtbox
			// 
			this->new_data_txtbox->Enabled = false;
			this->new_data_txtbox->Location = System::Drawing::Point(573, 51);
			this->new_data_txtbox->Name = L"new_data_txtbox";
			this->new_data_txtbox->Size = System::Drawing::Size(182, 20);
			this->new_data_txtbox->TabIndex = 4;
			// 
			// id_label
			// 
			this->id_label->AutoSize = true;
			this->id_label->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->id_label->Location = System::Drawing::Point(18, 16);
			this->id_label->Name = L"id_label";
			this->id_label->Size = System::Drawing::Size(24, 20);
			this->id_label->TabIndex = 5;
			this->id_label->Text = L"ID";
			// 
			// new_data_label
			// 
			this->new_data_label->AutoSize = true;
			this->new_data_label->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->new_data_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->new_data_label->Location = System::Drawing::Point(569, 14);
			this->new_data_label->Name = L"new_data_label";
			this->new_data_label->Size = System::Drawing::Size(110, 20);
			this->new_data_label->TabIndex = 6;
			this->new_data_label->Text = L"Data to update";
			// 
			// operation_label
			// 
			this->operation_label->AutoSize = true;
			this->operation_label->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->operation_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->operation_label->Location = System::Drawing::Point(185, 17);
			this->operation_label->Name = L"operation_label";
			this->operation_label->Size = System::Drawing::Size(120, 20);
			this->operation_label->TabIndex = 8;
			this->operation_label->Text = L"Select Operation";
			// 
			// remove_button
			// 
			this->remove_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(228)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->remove_button->FlatAppearance->BorderSize = 0;
			this->remove_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->remove_button->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->remove_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->remove_button->Location = System::Drawing::Point(331, 121);
			this->remove_button->Name = L"remove_button";
			this->remove_button->Size = System::Drawing::Size(102, 27);
			this->remove_button->TabIndex = 9;
			this->remove_button->Text = L"Delete";
			this->remove_button->UseVisualStyleBackColor = false;
			this->remove_button->Visible = false;
			this->remove_button->Click += gcnew System::EventHandler(this, &update_employee::remove_button_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Window;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Location = System::Drawing::Point(0, -1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(936, 36);
			this->panel1->TabIndex = 15;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(35, 36);
			this->pictureBox1->TabIndex = 26;
			this->pictureBox1->TabStop = false;
			// 
			// button5
			// 
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(893, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(40, 31);
			this->button5->TabIndex = 1;
			this->button5->Text = L"X";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &update_employee::button5_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label7->Location = System::Drawing::Point(38, 67);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(190, 30);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Update Employee/ ";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->remove_button);
			this->groupBox1->Controls->Add(this->operation_label);
			this->groupBox1->Controls->Add(this->operation_comboBox);
			this->groupBox1->Controls->Add(this->new_data_label);
			this->groupBox1->Controls->Add(this->id_label);
			this->groupBox1->Controls->Add(this->new_data_txtbox);
			this->groupBox1->Controls->Add(this->id_textBox);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->update);
			this->groupBox1->Location = System::Drawing::Point(43, 124);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(769, 197);
			this->groupBox1->TabIndex = 24;
			this->groupBox1->TabStop = false;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Enabled = false;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Manager", L"Inventory Executive", L"Sales Executive" });
			this->comboBox2->Location = System::Drawing::Point(573, 50);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(182, 21);
			this->comboBox2->TabIndex = 17;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gainsboro;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->button1->Location = System::Drawing::Point(513, 121);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 27);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Cancel";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// operation_comboBox
			// 
			this->operation_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->operation_comboBox->FormattingEnabled = true;
			this->operation_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Update", L"Delete" });
			this->operation_comboBox->Location = System::Drawing::Point(188, 48);
			this->operation_comboBox->Name = L"operation_comboBox";
			this->operation_comboBox->Size = System::Drawing::Size(132, 21);
			this->operation_comboBox->TabIndex = 7;
			this->operation_comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &update_employee::operation_comboBox_SelectedIndexChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label9->Location = System::Drawing::Point(46, 346);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(65, 20);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Changes";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(43, 374);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(770, 175);
			this->dataGridView1->TabIndex = 26;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->label3->Location = System::Drawing::Point(214, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(169, 30);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Delete Employee";
			// 
			// update_employee
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->ClientSize = System::Drawing::Size(933, 561);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"update_employee";
			this->Text = L"update_employee";
			this->Load += gcnew System::EventHandler(this, &update_employee::update_employee_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ new_data;
		int UserID,result;
	private: System::Void operation_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (operation_comboBox->SelectedIndex == 0) {
			comboBox1->Enabled = true;
			new_data_txtbox->Enabled = true;
			update->Visible = true;
			remove_button->Visible = false;
		}
		else if (operation_comboBox->SelectedIndex == 1) {
			comboBox1->Enabled = false;
			new_data_txtbox->Enabled = false;
			update->Visible = false;
			remove_button->Visible = true;
		}
		
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedIndex == 1) {
			new_data_label->Text = "Enter Designation";
			comboBox2->Visible = true;
			comboBox2->Enabled = true;
			new_data_txtbox->Visible = false;
		}
	}
	private: System::Void update_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=users";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlCommand^ cmd = gcnew MySqlCommand("select EXISTS(select UserID from employee where UserID = "+UserID+")", con);
			con->Open();
			MySqlDataReader^ dr = cmd->ExecuteReader();
			while (dr->Read()) {
				result = System::Convert::ToInt32(dr->GetString(0));
			}
			con->Close();
			if (result==1) {
				if (comboBox1->SelectedIndex == -1) {
					MessageBox::Show("Select Field to Update");
				}
				else if (comboBox1->SelectedIndex == 0) {
					if (new_data_txtbox->Text == "") {
						MessageBox::Show("Enter Data for update");
					}
					new_data_label->Text = "Enter Name";
					new_data = new_data_txtbox->Text;
					cmd = gcnew MySqlCommand("update employee set Name='" + new_data + "' where UserID =" + UserID + "", con);
				}
				else if (comboBox1->SelectedIndex == 1) {
					comboBox2->Enabled = true;
					if (comboBox2->SelectedIndex == -1) {
						MessageBox::Show("Select Designation to Update");
					}
					else {
						new_data = comboBox2->Text;
						cmd = gcnew MySqlCommand("update employee set Designation='" + new_data + "' where UserID =" + UserID + "", con);
					}
				}
				else if (comboBox1->SelectedIndex == 2) {
					if (new_data_txtbox->Text == "") {
						MessageBox::Show("Enter Data for update");
					}
					new_data_label->Text = "Enter Age";
					new_data = System::Convert::ToString(int::Parse(new_data_txtbox->Text));
					cmd = gcnew MySqlCommand("update employee set Age='" + new_data + "' where UserID =" + UserID + "", con);
				}
				else if (comboBox1->SelectedIndex == 3) {
					if (new_data_txtbox->Text == "") {
						MessageBox::Show("Enter Data for update");
					}
					new_data_label->Text = "Enter Contact";
					new_data = new_data_txtbox->Text;
					cmd = gcnew MySqlCommand("update employee set Contact='" + new_data + "' where UserID =" + UserID + "", con);
				}
			}
			else {
				MessageBox::Show("UserID not found");
			}
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select UserID,Name,Designation,Age,Contact from employee where UserID=" + UserID + "", con);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			bindingSource3->DataSource = dt;
			dataGridView1->DataSource = bindingSource3;
			con->Close();
			MessageBox::Show("User Data Updated Sucessfully");
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}

	private: System::Void remove_button_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=users";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlCommand^ cmd = gcnew MySqlCommand("select EXISTS(select UserID from employee where UserID =" + UserID + ")", con);
			con->Open();
			MySqlDataReader^ dr = cmd->ExecuteReader();
			while (dr->Read()) {
				result = System::Convert::ToInt32(dr->GetString(0));
			}
			con->Close();
			if (result == 0) {
				MessageBox::Show("UserID not found");
			}
			else {
				MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("select UserID,Name,Designation,Age,Contact from employee where UserID=" + UserID + "", con);
				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);
				bindingSource3->DataSource = dt;
				dataGridView1->DataSource = bindingSource3;
				con->Close();

				cmd = gcnew MySqlCommand("delete from employee where UserID=" + UserID + "", con);
				con->Open();
				MySqlDataReader^ dr = cmd->ExecuteReader();
				con->Close();
				MessageBox::Show("Employee Deleted sucessfully");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void update_employee_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Visible = true;
		operation_comboBox->Enabled = false;
		comboBox1->Enabled = false;
		new_data_txtbox->Enabled = false;
		update->Visible = false;
		remove_button->Visible = false;
		comboBox2->Visible = false;
	}
	private: System::Void back_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
	private: System::Void id_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		operation_comboBox->Enabled = true;
		try{
			UserID = int::Parse(id_textBox->Text);
		}
		catch (Exception^ ex) {
			if (ex->Message == "Input string was not in a format") {

			}
			else {
				MessageBox::Show(ex->Message);
			}
		}
		
	}
};
}

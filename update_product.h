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
	public ref class update_product : public System::Windows::Forms::Form
	{
	public:
		update_product(void)
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
		~update_product()
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
	private: System::Windows::Forms::ComboBox^ category_comboBox;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::PictureBox^ back_pictureBox;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ComboBox^ operation_comboBox;


	private: System::Windows::Forms::Label^ label3;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(update_product::typeid));
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
			this->category_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->back_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->operation_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->back_pictureBox))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			this->update->Location = System::Drawing::Point(478, 136);
			this->update->Name = L"update";
			this->update->Size = System::Drawing::Size(192, 27);
			this->update->TabIndex = 0;
			this->update->Text = L"Update";
			this->update->UseVisualStyleBackColor = false;
			this->update->Click += gcnew System::EventHandler(this, &update_product::update_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Enabled = false;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(252, 48);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(182, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &update_product::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label1->Location = System::Drawing::Point(249, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Select field to update :";
			// 
			// id_textBox
			// 
			this->id_textBox->Enabled = false;
			this->id_textBox->Location = System::Drawing::Point(20, 141);
			this->id_textBox->Name = L"id_textBox";
			this->id_textBox->Size = System::Drawing::Size(182, 20);
			this->id_textBox->TabIndex = 3;
			this->id_textBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &update_product::id_textBox_KeyPress);
			// 
			// new_data_txtbox
			// 
			this->new_data_txtbox->Enabled = false;
			this->new_data_txtbox->Location = System::Drawing::Point(252, 141);
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
			this->id_label->Location = System::Drawing::Point(16, 99);
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
			this->new_data_label->Location = System::Drawing::Point(248, 99);
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
			this->operation_label->Location = System::Drawing::Point(16, 17);
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
			this->remove_button->Location = System::Drawing::Point(478, 136);
			this->remove_button->Name = L"remove_button";
			this->remove_button->Size = System::Drawing::Size(192, 27);
			this->remove_button->TabIndex = 9;
			this->remove_button->Text = L"Delete";
			this->remove_button->UseVisualStyleBackColor = false;
			this->remove_button->Click += gcnew System::EventHandler(this, &update_product::remove_button_Click);
			// 
			// category_comboBox
			// 
			this->category_comboBox->FormattingEnabled = true;
			this->category_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Grocery", L"Dairy & Beverages", L"Packaged Food",
					L"Fruits & Vegetables", L"Home & Kitchen", L"Personal Care", L"Baby & Kids", L"Appliances", L"Footwear", L"Clothing & Accessories",
					L"School Supplies", L"Specials"
			});
			this->category_comboBox->Location = System::Drawing::Point(253, 140);
			this->category_comboBox->Name = L"category_comboBox";
			this->category_comboBox->Size = System::Drawing::Size(182, 21);
			this->category_comboBox->TabIndex = 14;
			this->category_comboBox->Visible = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Window;
			this->panel1->Controls->Add(this->back_pictureBox);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Location = System::Drawing::Point(0, -1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(936, 36);
			this->panel1->TabIndex = 15;
			// 
			// back_pictureBox
			// 
			this->back_pictureBox->BackColor = System::Drawing::Color::White;
			this->back_pictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"back_pictureBox.BackgroundImage")));
			this->back_pictureBox->Location = System::Drawing::Point(0, 0);
			this->back_pictureBox->Name = L"back_pictureBox";
			this->back_pictureBox->Size = System::Drawing::Size(35, 36);
			this->back_pictureBox->TabIndex = 26;
			this->back_pictureBox->TabStop = false;
			this->back_pictureBox->Click += gcnew System::EventHandler(this, &update_product::back_pictureBox_Click);
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
			this->button5->Click += gcnew System::EventHandler(this, &update_product::button5_Click);
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
			this->label7->Size = System::Drawing::Size(172, 30);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Update Product/ ";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->category_comboBox);
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
			// operation_comboBox
			// 
			this->operation_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->operation_comboBox->FormattingEnabled = true;
			this->operation_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Update", L"Remove" });
			this->operation_comboBox->Location = System::Drawing::Point(19, 48);
			this->operation_comboBox->Name = L"operation_comboBox";
			this->operation_comboBox->Size = System::Drawing::Size(182, 21);
			this->operation_comboBox->TabIndex = 7;
			this->operation_comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &update_product::operation_comboBox_SelectedIndexChanged);
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
			this->label9->Size = System::Drawing::Size(113, 20);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Updated Stocks";
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
			this->label3->Location = System::Drawing::Point(199, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(151, 30);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Delete Product";
			// 
			// update_product
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
			this->Name = L"update_product";
			this->Text = L"update_product";
			this->Load += gcnew System::EventHandler(this, &update_product::update_product_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->back_pictureBox))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void operation_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ opt_selected = (operation_comboBox->SelectedItem)->ToString();
		comboBox1->Enabled = true;
		new_data_txtbox->Enabled = false;
		id_textBox->Enabled = false;

		
		
		
		if (opt_selected == "Update") {
		//	after_operation_label->Visible = true;
			dataGridView1->Visible = false;
			update->Visible = true;
			remove_button->Visible = false;
			//label1->Text = "Select field to \nupdate product";
			this->comboBox1->Items->Clear();
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"ID", L"Name", L"Purchase Price", L"Sell Price", L"Gst",
					L"Description", L"Category", L"Quantity"
			});
		}
		else if (opt_selected == "Remove") {
			//after_operation_label->Visible = false;
			dataGridView1->Visible = false;
			remove_button->Visible = true;
			update->Visible = false;
			//label1->Text = "Select field to \nremove products";
			this->comboBox1->Items->Clear();
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"ID", L"Name", L"Description", L"Category", L"Quantity"
			});
		}
	
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ opt_selected1 = (operation_comboBox->SelectedItem)->ToString();
		String^ opt_selected = (comboBox1->SelectedItem)->ToString();
		new_data_txtbox->Visible = true;
		category_comboBox->Visible = false;

		if (opt_selected1 == "Update") {
			label1->Text = "Select field to update product";
			new_data_txtbox->Enabled = true;
			id_textBox->Enabled = true;
			
		}
		else if (opt_selected1 == "Remove") {
			label1->Text = "Select field to remove products";
			id_textBox->Enabled = false;
			new_data_txtbox->Enabled = true;
		
		}

		if (opt_selected1 == "Update") {
			if (opt_selected == "Name") {
				new_data_label->Text = "New Name";
			}
			else if (opt_selected == "Purchase Price") {
				new_data_label->Text = "New purchase price ";
			}
			else if (opt_selected == "Sell Price") {
				new_data_label->Text = "New sell price ";
			}
			else if (opt_selected == "Gst") {
				new_data_label->Text = "New Gst ";
			}
			else if (opt_selected == "Description") {
				new_data_label->Text = "New Description ";
			}
			else if (opt_selected == "Category") {
				new_data_label->Text = "New Category ";
				new_data_txtbox->Visible = false;
				category_comboBox->Visible = true;
			}
			else if (opt_selected == "Quantity") {
				new_data_label->Text = "New Quantity";
			}
			else if (opt_selected == "ID") {
				new_data_label->Text = "New ID";
			}
		}
		else if (opt_selected1 == "Remove") {
			if (opt_selected == "Name") {
				new_data_label->Text = "Remove products \nof Name";
			}
			else if (opt_selected == "Description") {
				new_data_label->Text = "Remove products \nof Description ";
			}
			else if (opt_selected == "Category") {
				new_data_label->Text = "Remove products \nof Category ";
				new_data_txtbox->Visible = false;
				category_comboBox->Visible = true;
			}
			else if (opt_selected == "Quantity") {
				new_data_label->Text = "Remove products \nof Quantity";
			}
			else if (opt_selected == "ID") {
				new_data_label->Text = "Remove products \nof ID";
			}
		}
	}
	private: System::Void update_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Visible = true;
		String^ opt_selected = (comboBox1->SelectedItem)->ToString();
		String^ select_query;
		if(opt_selected == "Category"){
			if (id_textBox->Text == "" || category_comboBox->SelectedIndex == -1) {
				MessageBox::Show("please fill all fields");
				return;
			}
		}
		else if(id_textBox->Text == "" || new_data_txtbox->Text=="") {
			MessageBox::Show("please fill all fields");
			return;
		}
		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=inventory";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			double product_id = double::Parse(id_textBox->Text);
			/*
			MySqlDataAdapter^ cmd = gcnew MySqlDataAdapter("select * from stock where product_id = " + product_id + "", con);
			con->Open();
			DataTable^ dt = gcnew DataTable();
			cmd->Fill(dt);
			if (dt->Rows->Count == 0) {
				MessageBox::Show("No data found for given ID");
				return;
			}
			else {
				bindingSource1->DataSource = dt;
				dataGridView_1->DataSource = bindingSource1;
				con->Close();
			}
			*/
			
			String^ sql_query;
			if (opt_selected == "Name") {
				String^ new_data = new_data_txtbox->Text;
				sql_query = "update stock set product_name='" + new_data + "' WHERE product_id=" + product_id + "";
			}
			else if (opt_selected == "Description") {
				String^ new_data = new_data_txtbox->Text;
				sql_query = "update stock set Description='" + new_data + "' WHERE product_id=" + product_id + "";
			}
			else if (opt_selected == "Purchase Price") {
				float new_data = float::Parse(new_data_txtbox->Text);
				sql_query = "update stock set product_purchase_price=" + new_data + " WHERE product_id=" + product_id + "";
			}
			else if (opt_selected == "Sell Price") {
				float new_data = float::Parse(new_data_txtbox->Text);
				sql_query = "update stock set product_selling_price=" + new_data + " WHERE product_id=" + product_id + "";
			}
			else if (opt_selected == "Category") {
				String^ new_data = (category_comboBox->SelectedItem)->ToString();
				sql_query = "update stock set product_category='" + new_data + "' WHERE product_id=" + product_id + "";
			}
			else if (opt_selected == "Gst") {
				float new_data = float::Parse(new_data_txtbox->Text);
				sql_query = "update stock set product_gst=" + new_data + " WHERE product_id=" + product_id + "";
			}
			else if (opt_selected == "Quantity") {
				int new_data = Int32::Parse(new_data_txtbox->Text);
				sql_query = "update stock set product_qty=" + new_data + " WHERE product_id=" + product_id + "";
			}
			else if (opt_selected == "ID") {
				double new_data = double::Parse(new_data_txtbox->Text);
				sql_query = "update stock set product_id=" + new_data + " WHERE product_id=" + product_id + "";
				select_query = "; select* from stock where product_id ="+new_data+"";
			}
			MySqlDataAdapter^ cmd1;
			if (opt_selected != "ID") {
				select_query = "; select* from stock where product_id ="+product_id +"";
			}
			cmd1 = gcnew MySqlDataAdapter(sql_query + select_query, con);
			con->Open();
			DataTable^ dt1 = gcnew DataTable();
			cmd1->Fill(dt1);
			if (dt1->Rows->Count == 0) {
				MessageBox::Show("No data found for given ID");
				return;
			}
			else {
				bindingSource2->DataSource = dt1;
				dataGridView1->DataSource = bindingSource2;
				MessageBox::Show("Product Updated sucessfully");
			}
			con->Close();

		}
		catch (Exception^ ex)
		{
			if (ex->Message == "Input string was not in a correct format.") {
				MessageBox::Show("Inputs given are incorrect!");
			}
			else {
				MessageBox::Show(ex->Message);
			}
		}
	}

	private: System::Void remove_button_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Visible = true;
		String^ opt_selected = (comboBox1->SelectedItem)->ToString();
		if (opt_selected == "Category") {
			if (category_comboBox->SelectedIndex == -1) {
				MessageBox::Show("please fill all fields");
				return;
			}
		}
		else if (new_data_txtbox->Text == "") {
			MessageBox::Show("please fill all fields");
			return;
		}
		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=inventory";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			String^ sql_query;
			String^ sql_query_select;
			if (opt_selected == "Name") {
				String^ new_data = new_data_txtbox->Text;
				sql_query = "delete from stock WHERE product_name='" + new_data + "'";
				sql_query_select = "select * from stock where product_name='"+new_data+"'";
			}
			else if (opt_selected == "Description") {
				String^ new_data = new_data_txtbox->Text;
				sql_query = "delete from stock WHERE Description='" + new_data + "'";
				sql_query_select = "select * from stock where Description='" + new_data + "'";

			}
			else if (opt_selected == "Category") {
				String^ new_data = (category_comboBox->SelectedItem)->ToString();
				sql_query = "delete from stock WHERE product_category='" + new_data + "'";
				sql_query_select = "select * from stock where product_category='" + new_data + "'";

			}
			else if (opt_selected == "Quantity") {
				int new_data = Int32::Parse(new_data_txtbox->Text);
				sql_query = "delete from stock WHERE product_qty=" + new_data + "";
				sql_query_select = "select * from stock where product_qty=" + new_data + "";
			}
			else if (opt_selected == "ID") {
				double new_data = double::Parse(new_data_txtbox->Text);
				sql_query = "delete from stock WHERE product_id=" + new_data + "";
				sql_query_select = "select * from stock where product_id=" + new_data + "";
			}
			MySqlDataAdapter^ cmd = gcnew MySqlDataAdapter(sql_query_select+ ";" +sql_query , con);
			con->Open();
			DataTable^ dt = gcnew DataTable();
			cmd->Fill(dt);
			if (dt->Rows->Count == 0) {
				MessageBox::Show("No products found for given data");
				return;
			}
			else {
				bindingSource1->DataSource = dt;
				dataGridView1->DataSource = bindingSource1;
				MessageBox::Show("Product removed sucessfully");
			}
			con->Close();

		}
		catch (Exception^ ex)
		{
			if (ex->Message == "Input string was not in a correct format.") {
				MessageBox::Show("Inputs given are incorrect!");
			}
			else {
				MessageBox::Show(ex->Message);
			}
		}
	}
	private: System::Void update_product_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Visible = false;
		update->Visible = false;
		remove_button->Visible = false;
	}
private: System::Void back_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Visible = false;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void back_pictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void id_textBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char ch = e->KeyChar;
	if (!Char::IsDigit(ch) && ch != 8 && ch != 46) {
		e->Handled = true;
	}
}
};
}

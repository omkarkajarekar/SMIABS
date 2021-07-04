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
	public ref class add_product : public System::Windows::Forms::Form
	{
	public:
		add_product(void)
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
		~add_product()
		{
			if (components)
			{
				delete components;
				
			}
		}
	private: System::Windows::Forms::Button^ save_btn;
	protected:

	private: System::Windows::Forms::TextBox^ id_textbox;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ name_textbox;





	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ price_textbox;

	private: System::Windows::Forms::TextBox^ qty_textbox;


	private: System::Windows::Forms::Label^ label5;



	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ description_label;
	private: System::Windows::Forms::TextBox^ description_textBox;
	private: System::Windows::Forms::TextBox^ sell_price_textbox;


	private: System::Windows::Forms::Label^ sell_price_label;
	private: System::Windows::Forms::BindingSource^ bindingSource1;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(add_product::typeid));
			this->save_btn = (gcnew System::Windows::Forms::Button());
			this->id_textbox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->name_textbox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->price_textbox = (gcnew System::Windows::Forms::TextBox());
			this->qty_textbox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->description_label = (gcnew System::Windows::Forms::Label());
			this->description_textBox = (gcnew System::Windows::Forms::TextBox());
			this->sell_price_textbox = (gcnew System::Windows::Forms::TextBox());
			this->sell_price_label = (gcnew System::Windows::Forms::Label());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
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
			this->save_btn->Location = System::Drawing::Point(624, 126);
			this->save_btn->Name = L"save_btn";
			this->save_btn->Size = System::Drawing::Size(161, 27);
			this->save_btn->TabIndex = 8;
			this->save_btn->Text = L"ADD PRODUCT";
			this->save_btn->UseVisualStyleBackColor = false;
			this->save_btn->Click += gcnew System::EventHandler(this, &add_product::button1_Click);
			// 
			// id_textbox
			// 
			this->id_textbox->Location = System::Drawing::Point(15, 47);
			this->id_textbox->Name = L"id_textbox";
			this->id_textbox->Size = System::Drawing::Size(131, 20);
			this->id_textbox->TabIndex = 0;
			this->id_textbox->TextChanged += gcnew System::EventHandler(this, &add_product::id_textbox_TextChanged);
			this->id_textbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &add_product::id_textbox_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label1->Location = System::Drawing::Point(12, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 20);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Product ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label2->Location = System::Drawing::Point(192, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 20);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Product Name";
			// 
			// name_textbox
			// 
			this->name_textbox->Location = System::Drawing::Point(197, 47);
			this->name_textbox->Name = L"name_textbox";
			this->name_textbox->Size = System::Drawing::Size(161, 20);
			this->name_textbox->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label3->Location = System::Drawing::Point(620, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 20);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Category";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label4->Location = System::Drawing::Point(193, 91);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 20);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Purchase Price";
			this->label4->Click += gcnew System::EventHandler(this, &add_product::label4_Click);
			// 
			// price_textbox
			// 
			this->price_textbox->Location = System::Drawing::Point(197, 133);
			this->price_textbox->Name = L"price_textbox";
			this->price_textbox->Size = System::Drawing::Size(161, 20);
			this->price_textbox->TabIndex = 4;
			this->price_textbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &add_product::price_textbox_KeyPress);
			// 
			// qty_textbox
			// 
			this->qty_textbox->Location = System::Drawing::Point(16, 133);
			this->qty_textbox->Name = L"qty_textbox";
			this->qty_textbox->Size = System::Drawing::Size(131, 20);
			this->qty_textbox->TabIndex = 7;
			this->qty_textbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &add_product::qty_textbox_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label5->Location = System::Drawing::Point(26, 92);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 20);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Quantity";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Grocery", L"Dairy & Beverages", L"Packaged Food",
					L"Fruits & Vegetables", L"Home & Kitchen", L"Personal Care", L"Baby & Kids", L"Appliances", L"Footwear", L"Clothing & Accessories",
					L"School Supplies", L"Specials"
			});
			this->comboBox1->Location = System::Drawing::Point(624, 46);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(161, 21);
			this->comboBox1->TabIndex = 6;
			// 
			// description_label
			// 
			this->description_label->AutoSize = true;
			this->description_label->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->description_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->description_label->Location = System::Drawing::Point(403, 16);
			this->description_label->Name = L"description_label";
			this->description_label->Size = System::Drawing::Size(85, 20);
			this->description_label->TabIndex = 11;
			this->description_label->Text = L"Description";
			// 
			// description_textBox
			// 
			this->description_textBox->Location = System::Drawing::Point(407, 46);
			this->description_textBox->Name = L"description_textBox";
			this->description_textBox->Size = System::Drawing::Size(161, 20);
			this->description_textBox->TabIndex = 3;
			// 
			// sell_price_textbox
			// 
			this->sell_price_textbox->Location = System::Drawing::Point(407, 133);
			this->sell_price_textbox->Name = L"sell_price_textbox";
			this->sell_price_textbox->Size = System::Drawing::Size(161, 20);
			this->sell_price_textbox->TabIndex = 5;
			this->sell_price_textbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &add_product::sell_price_textbox_KeyPress);
			// 
			// sell_price_label
			// 
			this->sell_price_label->AutoSize = true;
			this->sell_price_label->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sell_price_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->sell_price_label->Location = System::Drawing::Point(403, 91);
			this->sell_price_label->Name = L"sell_price_label";
			this->sell_price_label->Size = System::Drawing::Size(90, 20);
			this->sell_price_label->TabIndex = 13;
			this->sell_price_label->Text = L"Selling Price";
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
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(38, 36);
			this->pictureBox1->TabIndex = 25;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &add_product::pictureBox1_Click);
			// 
			// button5
			// 
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(898, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(40, 33);
			this->button5->TabIndex = 1;
			this->button5->Text = L"X";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &add_product::button5_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->label7->Location = System::Drawing::Point(36, 53);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(133, 30);
			this->label7->TabIndex = 22;
			this->label7->Text = L"New Product";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->sell_price_label);
			this->groupBox1->Controls->Add(this->sell_price_textbox);
			this->groupBox1->Controls->Add(this->description_textBox);
			this->groupBox1->Controls->Add(this->description_label);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->qty_textbox);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->price_textbox);
			this->groupBox1->Controls->Add(this->name_textbox);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->id_textbox);
			this->groupBox1->Controls->Add(this->save_btn);
			this->groupBox1->Location = System::Drawing::Point(41, 106);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(849, 200);
			this->groupBox1->TabIndex = 23;
			this->groupBox1->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->label9->Location = System::Drawing::Point(37, 326);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(159, 20);
			this->label9->TabIndex = 24;
			this->label9->Text = L"Added Product Details";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(41, 364);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(849, 158);
			this->dataGridView1->TabIndex = 25;
			// 
			// add_product
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->ClientSize = System::Drawing::Size(933, 550);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"add_product";
			this->Load += gcnew System::EventHandler(this, &add_product::add_product_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &add_product::add_product_KeyDown);
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
		float gst_array[10] = { 1.2,2.0,2.1,2.5,1.5,4.2,4.5,5,4.7,5.0 };
		double product_id;
		String^ product_name;
		String^ description;
		String^ product_category;
		float product_purchase_price, product_sell_price, product_gst;
		int product_qty;

		//if to check empty textboxes
		if (id_textbox->Text == "" || name_textbox->Text == "" || price_textbox->Text == "" || sell_price_textbox->Text == "" || qty_textbox->Text == "" || comboBox1->SelectedIndex == -1)
		{
			MessageBox::Show("Please fill all fields");
		}
		else {
			try
			{
				String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=inventory";
				MySqlConnection^ con = gcnew MySqlConnection(constr);

				//extracting input and checking for inproper inputs
				try {
					product_id = double::Parse(id_textbox->Text);
					product_name = name_textbox->Text;
					description = description_textBox->Text;
					product_purchase_price = float::Parse(price_textbox->Text);
					product_sell_price = float::Parse(sell_price_textbox->Text);
					if (product_purchase_price >= product_sell_price) {
						MessageBox::Show("Purchase price is should be \n less than selling price!!");
						return;
					}
					product_category = (comboBox1->SelectedItem)->ToString();
					//float product_gst = float::Parse(gst_txtbox->Text);
					product_gst = gst_array[comboBox1->SelectedIndex];
					product_qty = Int32::Parse(qty_textbox->Text);
				}
				catch (Exception^ ex) {
					MessageBox::Show("One or more inputs are Wrong!");
					return;
				}
				MySqlDataAdapter^ cmd;
				try {
					cmd = gcnew MySqlDataAdapter("insert into stock values(" + product_id + ",'" + product_name + "', '" + description + "'," + product_purchase_price + "," + product_sell_price + ",'" + product_category + "'," + product_gst + "," + product_qty + ");select * from stock where product_id=" + product_id + "", con);
				}
				catch(Exception^ ex){
					MessageBox::Show("Unable to create sql command!");
					return;
				}
				DataTable^ dt = gcnew DataTable();
				cmd->Fill(dt);
				bindingSource1->DataSource = dt;
				dataGridView1->DataSource = bindingSource1;
				id_textbox->Text = "";
				name_textbox->Text = "";
				description_textBox->Text = "";
				qty_textbox->Text = "";
				price_textbox->Text = "";
				sell_price_textbox->Text = "";
				comboBox1->SelectedIndex = -1;
				MessageBox::Show("Product Added sucessfully");
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
	private: System::Void add_product_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Visible = false;
	}
	private: System::Void back_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
	private: System::Void add_product_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	}
	private: System::Void id_textbox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		char ch = e->KeyChar;
		if (!Char::IsDigit(ch) && ch!=8 && ch!=46 ){
			e->Handled = true;
		}
	}
	private: System::Void qty_textbox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		char ch = e->KeyChar;
		if (!Char::IsDigit(ch) && ch != 8 && ch != 46) {
			e->Handled = true;
		}
	}
	private: System::Void price_textbox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		char ch = e->KeyChar;
		if (!Char::IsDigit(ch) && ch != 8 && ch != 46) {
			e->Handled = true;
		}
	}
	private: System::Void sell_price_textbox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		char ch = e->KeyChar;
		if (!Char::IsDigit(ch) && ch != 8 && ch != 46) {
			e->Handled = true;
		}
	}
private: System::Void id_textbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};


}

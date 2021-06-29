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
	/// Summary for display_products
	/// </summary>
	public ref class display_products : public System::Windows::Forms::Form
	{
	public:
		display_products(void)
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
		~display_products()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ display_options_label;
	protected:

	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ new_data_label;
	private: System::Windows::Forms::TextBox^ data_textBox;


	private: System::Windows::Forms::Button^ fetch_btn;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
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
			this->display_options_label = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->new_data_label = (gcnew System::Windows::Forms::Label());
			this->data_textBox = (gcnew System::Windows::Forms::TextBox());
			this->fetch_btn = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// display_options_label
			// 
			this->display_options_label->AutoSize = true;
			this->display_options_label->Location = System::Drawing::Point(333, 81);
			this->display_options_label->Name = L"display_options_label";
			this->display_options_label->Size = System::Drawing::Size(80, 13);
			this->display_options_label->TabIndex = 0;
			this->display_options_label->Text = L"Display Options";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Display All", L"Search by ID", L"Search by Name",
					L"Search by Category", L"Search by Quantity"
			});
			this->comboBox1->Location = System::Drawing::Point(476, 78);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(238, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &display_products::comboBox1_SelectedIndexChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::DeepSkyBlue;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->Location = System::Drawing::Point(66, 263);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(843, 170);
			this->dataGridView1->TabIndex = 2;
			// 
			// new_data_label
			// 
			this->new_data_label->AutoSize = true;
			this->new_data_label->Location = System::Drawing::Point(333, 138);
			this->new_data_label->Name = L"new_data_label";
			this->new_data_label->Size = System::Drawing::Size(56, 13);
			this->new_data_label->TabIndex = 3;
			this->new_data_label->Text = L"Enter data";
			// 
			// data_textBox
			// 
			this->data_textBox->Enabled = false;
			this->data_textBox->Location = System::Drawing::Point(476, 135);
			this->data_textBox->Name = L"data_textBox";
			this->data_textBox->Size = System::Drawing::Size(238, 20);
			this->data_textBox->TabIndex = 4;
			// 
			// fetch_btn
			// 
			this->fetch_btn->Enabled = false;
			this->fetch_btn->Location = System::Drawing::Point(336, 196);
			this->fetch_btn->Name = L"fetch_btn";
			this->fetch_btn->Size = System::Drawing::Size(378, 23);
			this->fetch_btn->TabIndex = 5;
			this->fetch_btn->Text = L"Fetch Data";
			this->fetch_btn->UseVisualStyleBackColor = true;
			this->fetch_btn->Click += gcnew System::EventHandler(this, &display_products::fetch_btn_Click);
			// 
			// display_products
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->ClientSize = System::Drawing::Size(983, 472);
			this->Controls->Add(this->fetch_btn);
			this->Controls->Add(this->data_textBox);
			this->Controls->Add(this->new_data_label);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->display_options_label);
			this->Name = L"display_products";
			this->Text = L"display_products";
			this->Load += gcnew System::EventHandler(this, &display_products::display_products_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void display_products_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void fetch_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=inventory";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			String^ opt_selected = (comboBox1->SelectedItem)->ToString();
			String^ sql_query;

			if (opt_selected == "Search by ID") {
				double product_id = double::Parse(data_textBox->Text);
				sql_query = "select * from stock where product_id=" + product_id + "";
			}
			else if (opt_selected == "Search by Name") {
				String^ product_name = data_textBox->Text;
				sql_query = "select * from stock where product_name='" + product_name + "'";
			}
			else if (opt_selected == "Search by Category") {
				String^ category = data_textBox->Text;
				sql_query = "select * from stock where product_category='" + category + "'";
			}
			else if (opt_selected == "Search by Quantity") {
				int quantity = Int32::Parse(data_textBox->Text);
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
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
			MessageBox::Show("Database table fetched");
			con->Close();
		}
		catch (Exception^ ex) {
				   MessageBox::Show(ex->Message);
		}
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	data_textBox->Enabled = true;
	fetch_btn->Enabled = true;
	data_textBox->Clear();
	String^ opt_selected = (comboBox1->SelectedItem)->ToString();

	if (opt_selected == "Search by Name") {
		new_data_label->Text = "fetch products \nof Name";
	}
	else if (opt_selected == "Search by Description") {
		new_data_label->Text = "fetch products \nof Description ";
	}
	else if (opt_selected == "Search by Category") {
		new_data_label->Text = "fetch products \nof Category ";
	}
	else if (opt_selected == "Search by Quantity") {
		new_data_label->Text = "fetch products \nof Quantity";
	}
	else if (opt_selected == "Search by ID") {
		new_data_label->Text = "fetch products \nof ID";
	}
	else if (opt_selected == "Display All") {
		new_data_label->Text = "Data";
		data_textBox->Enabled = false;
	}
}
};
}

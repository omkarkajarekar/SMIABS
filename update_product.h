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
	private: System::Windows::Forms::ComboBox^ operation_comboBox;
	private: System::Windows::Forms::Label^ operation_label;
	private: System::Windows::Forms::Button^ remove_button;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::DataGridView^ dataGridView_1;
	private: System::Windows::Forms::Label^ gridview_label;
	private: System::Windows::Forms::Label^ after_operation_label;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::BindingSource^ bindingSource2;
	private: System::Windows::Forms::ComboBox^ category_comboBox;

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
			this->operation_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->operation_label = (gcnew System::Windows::Forms::Label());
			this->remove_button = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataGridView_1 = (gcnew System::Windows::Forms::DataGridView());
			this->gridview_label = (gcnew System::Windows::Forms::Label());
			this->after_operation_label = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->category_comboBox = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->SuspendLayout();
			// 
			// update
			// 
			this->update->Enabled = false;
			this->update->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->update->Location = System::Drawing::Point(244, 313);
			this->update->Name = L"update";
			this->update->Size = System::Drawing::Size(214, 23);
			this->update->TabIndex = 0;
			this->update->Text = L"update";
			this->update->UseVisualStyleBackColor = true;
			this->update->Click += gcnew System::EventHandler(this, &update_product::update_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Enabled = false;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(418, 123);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(274, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &update_product::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(241, 124);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 15);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Select filed to update :";
			// 
			// id_textBox
			// 
			this->id_textBox->Enabled = false;
			this->id_textBox->Location = System::Drawing::Point(418, 183);
			this->id_textBox->Name = L"id_textBox";
			this->id_textBox->Size = System::Drawing::Size(274, 20);
			this->id_textBox->TabIndex = 3;
			// 
			// new_data_txtbox
			// 
			this->new_data_txtbox->Enabled = false;
			this->new_data_txtbox->Location = System::Drawing::Point(418, 251);
			this->new_data_txtbox->Name = L"new_data_txtbox";
			this->new_data_txtbox->Size = System::Drawing::Size(274, 20);
			this->new_data_txtbox->TabIndex = 4;
			// 
			// id_label
			// 
			this->id_label->AutoSize = true;
			this->id_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id_label->Location = System::Drawing::Point(244, 184);
			this->id_label->Name = L"id_label";
			this->id_label->Size = System::Drawing::Size(19, 15);
			this->id_label->TabIndex = 5;
			this->id_label->Text = L"ID";
			// 
			// new_data_label
			// 
			this->new_data_label->AutoSize = true;
			this->new_data_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->new_data_label->Location = System::Drawing::Point(241, 252);
			this->new_data_label->Name = L"new_data_label";
			this->new_data_label->Size = System::Drawing::Size(87, 15);
			this->new_data_label->TabIndex = 6;
			this->new_data_label->Text = L"Data to update";
			// 
			// operation_comboBox
			// 
			this->operation_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->operation_comboBox->FormattingEnabled = true;
			this->operation_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Update", L"Remove" });
			this->operation_comboBox->Location = System::Drawing::Point(418, 65);
			this->operation_comboBox->Name = L"operation_comboBox";
			this->operation_comboBox->Size = System::Drawing::Size(274, 21);
			this->operation_comboBox->TabIndex = 7;
			this->operation_comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &update_product::operation_comboBox_SelectedIndexChanged);
			// 
			// operation_label
			// 
			this->operation_label->AutoSize = true;
			this->operation_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->operation_label->Location = System::Drawing::Point(241, 66);
			this->operation_label->Name = L"operation_label";
			this->operation_label->Size = System::Drawing::Size(98, 15);
			this->operation_label->TabIndex = 8;
			this->operation_label->Text = L"Select Operation";
			// 
			// remove_button
			// 
			this->remove_button->Enabled = false;
			this->remove_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->remove_button->Location = System::Drawing::Point(478, 313);
			this->remove_button->Name = L"remove_button";
			this->remove_button->Size = System::Drawing::Size(214, 23);
			this->remove_button->TabIndex = 9;
			this->remove_button->Text = L"Remove";
			this->remove_button->UseVisualStyleBackColor = true;
			this->remove_button->Click += gcnew System::EventHandler(this, &update_product::remove_button_Click);
			// 
			// dataGridView_1
			// 
			this->dataGridView_1->BackgroundColor = System::Drawing::Color::DeepSkyBlue;
			this->dataGridView_1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_1->Location = System::Drawing::Point(58, 403);
			this->dataGridView_1->Name = L"dataGridView_1";
			this->dataGridView_1->Size = System::Drawing::Size(846, 115);
			this->dataGridView_1->TabIndex = 10;
			// 
			// gridview_label
			// 
			this->gridview_label->AutoSize = true;
			this->gridview_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gridview_label->Location = System::Drawing::Point(58, 372);
			this->gridview_label->Name = L"gridview_label";
			this->gridview_label->Size = System::Drawing::Size(126, 15);
			this->gridview_label->TabIndex = 11;
			this->gridview_label->Text = L"Data before operation";
			// 
			// after_operation_label
			// 
			this->after_operation_label->AutoSize = true;
			this->after_operation_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->after_operation_label->Location = System::Drawing::Point(58, 559);
			this->after_operation_label->Name = L"after_operation_label";
			this->after_operation_label->Size = System::Drawing::Size(115, 15);
			this->after_operation_label->TabIndex = 12;
			this->after_operation_label->Text = L"Data after operation";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::DeepSkyBlue;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(58, 587);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(846, 125);
			this->dataGridView1->TabIndex = 13;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &update_product::dataGridView1_CellContentClick);
			// 
			// category_comboBox
			// 
			this->category_comboBox->FormattingEnabled = true;
			this->category_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Convenience goods", L"Shopping goods",
					L"Speciality goods", L"Impulse goods", L"Emergancy goods", L"Raw materials", L"Installations", L"Accessory Equipments", L"Supplies",
					L"Services"
			});
			this->category_comboBox->Location = System::Drawing::Point(418, 251);
			this->category_comboBox->Name = L"category_comboBox";
			this->category_comboBox->Size = System::Drawing::Size(274, 21);
			this->category_comboBox->TabIndex = 14;
			this->category_comboBox->Visible = false;
			// 
			// update_product
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->ClientSize = System::Drawing::Size(972, 728);
			this->Controls->Add(this->category_comboBox);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->after_operation_label);
			this->Controls->Add(this->gridview_label);
			this->Controls->Add(this->dataGridView_1);
			this->Controls->Add(this->remove_button);
			this->Controls->Add(this->operation_label);
			this->Controls->Add(this->operation_comboBox);
			this->Controls->Add(this->new_data_label);
			this->Controls->Add(this->id_label);
			this->Controls->Add(this->new_data_txtbox);
			this->Controls->Add(this->id_textBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->update);
			this->Name = L"update_product";
			this->Text = L"update_product";
			this->Load += gcnew System::EventHandler(this, &update_product::update_product_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void operation_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ opt_selected = (operation_comboBox->SelectedItem)->ToString();
		comboBox1->Enabled = true;
		new_data_txtbox->Enabled = false;
		id_textBox->Enabled = false;
		update->Enabled = false;
		remove_button->Enabled = false;
		
		
		if (opt_selected == "Update") {
			after_operation_label->Visible = true;
			dataGridView1->Visible = true;
			label1->Text = "Select field to \nupdate product";
			this->comboBox1->Items->Clear();
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"ID", L"Name", L"Purchase Price", L"Sell Price", L"Gst",
					L"Description", L"Category", L"Quantity"
			});
		}
		else if (opt_selected == "Remove") {
			after_operation_label->Visible = false;
			dataGridView1->Visible = false;
			label1->Text = "Select field to \nremove products";
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
			label1->Text = "Select field to \nupdate product";
			new_data_txtbox->Enabled = true;
			id_textBox->Enabled = true;
			update->Enabled = true;
			remove_button->Enabled = false;
		}
		else if (opt_selected1 == "Remove") {
			label1->Text = "Select field to \nremove products";
			update->Enabled = false;
			id_textBox->Enabled = false;
			new_data_txtbox->Enabled = true;
			remove_button->Enabled = true;
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
		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=inventory";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			double product_id = double::Parse(id_textBox->Text);

			MySqlDataAdapter^ cmd = gcnew MySqlDataAdapter("select * from stock where product_id = " + product_id + "", con);
			con->Open();
			DataTable^ dt = gcnew DataTable();
			cmd->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView_1->DataSource = bindingSource1;
			con->Close();
			
			String^ opt_selected = (comboBox1->SelectedItem)->ToString();
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
			}
			MySqlDataAdapter^ cmd1 = gcnew MySqlDataAdapter(sql_query+";select * from stock where product_id="+product_id+"", con);
			con->Open();
			DataTable^ dt1 = gcnew DataTable();
			cmd1->Fill(dt1);
			bindingSource2->DataSource = dt1;
			dataGridView1->DataSource = bindingSource2;
			MessageBox::Show("Product Updated sucessfully");
			con->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

	private: System::Void remove_button_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=inventory";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			String^ opt_selected = (comboBox1->SelectedItem)->ToString();
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
			bindingSource1->DataSource = dt;
			dataGridView_1->DataSource = bindingSource1;
			MessageBox::Show("Product removed sucessfully");

			con->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void update_product_Load(System::Object^ sender, System::EventArgs^ e) {
		after_operation_label->Visible = false;
		dataGridView1->Visible = false;
	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}

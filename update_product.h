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




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
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
			this->SuspendLayout();
			// 
			// update
			// 
			this->update->Enabled = false;
			this->update->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->update->Location = System::Drawing::Point(58, 316);
			this->update->Name = L"update";
			this->update->Size = System::Drawing::Size(128, 23);
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
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"ID", L"Name", L"Description", L"Price", L"Category",
					L"Gst", L"Quantity"
			});
			this->comboBox1->Location = System::Drawing::Point(173, 124);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(153, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &update_product::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(55, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Select filed to update :";
			// 
			// id_textBox
			// 
			this->id_textBox->Enabled = false;
			this->id_textBox->Location = System::Drawing::Point(173, 184);
			this->id_textBox->Name = L"id_textBox";
			this->id_textBox->Size = System::Drawing::Size(153, 20);
			this->id_textBox->TabIndex = 3;
			// 
			// new_data_txtbox
			// 
			this->new_data_txtbox->Enabled = false;
			this->new_data_txtbox->Location = System::Drawing::Point(173, 252);
			this->new_data_txtbox->Name = L"new_data_txtbox";
			this->new_data_txtbox->Size = System::Drawing::Size(153, 20);
			this->new_data_txtbox->TabIndex = 4;
			// 
			// id_label
			// 
			this->id_label->AutoSize = true;
			this->id_label->Location = System::Drawing::Point(58, 187);
			this->id_label->Name = L"id_label";
			this->id_label->Size = System::Drawing::Size(18, 13);
			this->id_label->TabIndex = 5;
			this->id_label->Text = L"ID";
			// 
			// new_data_label
			// 
			this->new_data_label->AutoSize = true;
			this->new_data_label->Location = System::Drawing::Point(55, 255);
			this->new_data_label->Name = L"new_data_label";
			this->new_data_label->Size = System::Drawing::Size(78, 13);
			this->new_data_label->TabIndex = 6;
			this->new_data_label->Text = L"Data to update";
			// 
			// operation_comboBox
			// 
			this->operation_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->operation_comboBox->FormattingEnabled = true;
			this->operation_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Update", L"Remove" });
			this->operation_comboBox->Location = System::Drawing::Point(173, 69);
			this->operation_comboBox->Name = L"operation_comboBox";
			this->operation_comboBox->Size = System::Drawing::Size(153, 21);
			this->operation_comboBox->TabIndex = 7;
			this->operation_comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &update_product::operation_comboBox_SelectedIndexChanged);
			// 
			// operation_label
			// 
			this->operation_label->AutoSize = true;
			this->operation_label->Location = System::Drawing::Point(61, 69);
			this->operation_label->Name = L"operation_label";
			this->operation_label->Size = System::Drawing::Size(86, 13);
			this->operation_label->TabIndex = 8;
			this->operation_label->Text = L"Select Operation";
			// 
			// remove_button
			// 
			this->remove_button->Enabled = false;
			this->remove_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->remove_button->Location = System::Drawing::Point(193, 316);
			this->remove_button->Name = L"remove_button";
			this->remove_button->Size = System::Drawing::Size(133, 23);
			this->remove_button->TabIndex = 9;
			this->remove_button->Text = L"Remove";
			this->remove_button->UseVisualStyleBackColor = true;
			this->remove_button->Click += gcnew System::EventHandler(this, &update_product::remove_button_Click);
			// 
			// update_product
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->ClientSize = System::Drawing::Size(412, 424);
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
			label1->Text = "Select field to \nupdate product";
		}
		else if (opt_selected == "Remove") {
			label1->Text = "Select field to \nremove products";
		}
	
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ opt_selected1 = (operation_comboBox->SelectedItem)->ToString();
		String^ opt_selected = (comboBox1->SelectedItem)->ToString();

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
			else if (opt_selected == "Price") {
				new_data_label->Text = "New Price";
			}
			else if (opt_selected == "Description") {
				new_data_label->Text = "New Description ";
			}
			else if (opt_selected == "Category") {
				new_data_label->Text = "New Category ";
			}
			else if (opt_selected == "Gst") {
				new_data_label->Text = "New Gst";
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
			else if (opt_selected == "Price") {
				new_data_label->Text = "Remove products \nof Price";
			}
			else if (opt_selected == "Description") {
				new_data_label->Text = "Remove products \nof Description ";
			}
			else if (opt_selected == "Category") {
				new_data_label->Text = "Remove products \nof Category ";
			}
			else if (opt_selected == "Gst") {
				new_data_label->Text = "Remove products \nof Gst";
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
			else if (opt_selected == "Price") {
				float new_data = float::Parse(new_data_txtbox->Text);
				sql_query = "update stock set product_price=" + new_data + " WHERE product_id=" + product_id + "";
			}
			else if (opt_selected == "Category") {
				String^ new_data = new_data_txtbox->Text;
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
			MySqlCommand^ cmd = gcnew MySqlCommand(sql_query, con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("Product saved");
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
			if (opt_selected == "Name") {
				String^ new_data = new_data_txtbox->Text;
				sql_query = "delete from stock WHERE product_name='" + new_data + "'";
			}
			else if (opt_selected == "Description") {
				String^ new_data = new_data_txtbox->Text;
				sql_query = "delete from stock WHERE Description='" + new_data + "'";
			}
			else if (opt_selected == "Price") {
				float new_data = float::Parse(new_data_txtbox->Text);
				sql_query = "delete from stock WHERE product_price=" + new_data + "";
			}
			else if (opt_selected == "Category") {
				String^ new_data = new_data_txtbox->Text;
				sql_query = "delete from stock WHERE product_category='" + new_data + "'";
			}
			else if (opt_selected == "Gst") {
				float new_data = float::Parse(new_data_txtbox->Text);
				sql_query = "delete from stock WHERE product_gst=" + new_data + "";
			}
			else if (opt_selected == "Quantity") {
				int new_data = Int32::Parse(new_data_txtbox->Text);
				sql_query = "delete from stock WHERE product_qty=" + new_data + "";
			}
			else if (opt_selected == "ID") {
				double new_data = double::Parse(new_data_txtbox->Text);
				sql_query = "delete from stock WHERE product_id=" + new_data + "";
			}
			MySqlCommand^ cmd = gcnew MySqlCommand(sql_query, con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("Product saved");
			con->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
};
}

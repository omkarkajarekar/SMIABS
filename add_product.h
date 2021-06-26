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

	private: System::Windows::Forms::TextBox^ category_textbox;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ price_textbox;

	private: System::Windows::Forms::TextBox^ qty_textbox;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ gst_txtbox;
	private: System::Windows::Forms::Label^ label7;
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
			this->save_btn = (gcnew System::Windows::Forms::Button());
			this->id_textbox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->name_textbox = (gcnew System::Windows::Forms::TextBox());
			this->category_textbox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->price_textbox = (gcnew System::Windows::Forms::TextBox());
			this->qty_textbox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->gst_txtbox = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// save_btn
			// 
			this->save_btn->Cursor = System::Windows::Forms::Cursors::Default;
			this->save_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->save_btn->Location = System::Drawing::Point(64, 352);
			this->save_btn->Name = L"save_btn";
			this->save_btn->Size = System::Drawing::Size(276, 23);
			this->save_btn->TabIndex = 0;
			this->save_btn->Text = L"Save";
			this->save_btn->UseVisualStyleBackColor = true;
			this->save_btn->Click += gcnew System::EventHandler(this, &add_product::button1_Click);
			// 
			// id_textbox
			// 
			this->id_textbox->Location = System::Drawing::Point(164, 84);
			this->id_textbox->Name = L"id_textbox";
			this->id_textbox->Size = System::Drawing::Size(176, 20);
			this->id_textbox->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(61, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(61, 131);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Name";
			// 
			// name_textbox
			// 
			this->name_textbox->Location = System::Drawing::Point(164, 127);
			this->name_textbox->Name = L"name_textbox";
			this->name_textbox->Size = System::Drawing::Size(176, 20);
			this->name_textbox->TabIndex = 4;
			// 
			// category_textbox
			// 
			this->category_textbox->Location = System::Drawing::Point(164, 212);
			this->category_textbox->Name = L"category_textbox";
			this->category_textbox->Size = System::Drawing::Size(176, 20);
			this->category_textbox->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(61, 212);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Category";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(61, 173);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Price";
			// 
			// price_textbox
			// 
			this->price_textbox->Location = System::Drawing::Point(164, 169);
			this->price_textbox->Name = L"price_textbox";
			this->price_textbox->Size = System::Drawing::Size(176, 20);
			this->price_textbox->TabIndex = 5;
			// 
			// qty_textbox
			// 
			this->qty_textbox->Location = System::Drawing::Point(164, 296);
			this->qty_textbox->Name = L"qty_textbox";
			this->qty_textbox->Size = System::Drawing::Size(176, 20);
			this->qty_textbox->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(61, 300);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Quantity";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(61, 257);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"GST Taxable";
			// 
			// gst_txtbox
			// 
			this->gst_txtbox->Location = System::Drawing::Point(164, 253);
			this->gst_txtbox->Name = L"gst_txtbox";
			this->gst_txtbox->Size = System::Drawing::Size(176, 20);
			this->gst_txtbox->TabIndex = 9;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(134, 40);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(145, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Add new Product";
			// 
			// add_product
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->ClientSize = System::Drawing::Size(428, 424);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->qty_textbox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->gst_txtbox);
			this->Controls->Add(this->category_textbox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->price_textbox);
			this->Controls->Add(this->name_textbox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->id_textbox);
			this->Controls->Add(this->save_btn);
			this->Name = L"add_product";
			this->Text = L"add_product";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=inventory";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			//extracting input
			int product_id = Int32::Parse(id_textbox->Text);
			String^ product_name = name_textbox->Text;
			float product_price = float::Parse(price_textbox->Text);
			String^ product_category = category_textbox->Text;
			float product_gst = float::Parse(gst_txtbox->Text);
			int product_qty = Int32::Parse(qty_textbox->Text);
			MySqlCommand^ cmd = gcnew MySqlCommand("insert into stock values(" + product_id + ",'" + product_name + "', " + product_price + ",'" + product_category + "'," + product_gst + "," + product_qty + ")", con);
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

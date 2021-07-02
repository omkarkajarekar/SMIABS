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
	/// Summary for sales_report
	/// </summary>
	public ref class sales_report : public System::Windows::Forms::Form
	{
	public:
		sales_report(void)
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
		~sales_report()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox1;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(636, 67);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 33);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Display Report";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &sales_report::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(60, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Starting Date";
			this->label1->Visible = false;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(158, 71);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(126, 20);
			this->dateTimePicker1->TabIndex = 10;
			this->dateTimePicker1->Value = System::DateTime(2021, 7, 2, 0, 0, 0, 0);
			this->dateTimePicker1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(358, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Ending Date";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(52, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Total bills generated";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(179, 149);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 14;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(179, 186);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 16;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(52, 189);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Total Sales Amount";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(444, 71);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(126, 20);
			this->dateTimePicker2->TabIndex = 19;
			this->dateTimePicker2->Value = System::DateTime(2021, 7, 2, 0, 0, 0, 0);
			this->dateTimePicker2->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(60, 27);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Select Type";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Specific Date", L"Range of Dates" });
			this->comboBox1->Location = System::Drawing::Point(158, 24);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 21;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &sales_report::comboBox1_SelectedIndexChanged);
			// 
			// sales_report
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(789, 395);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"sales_report";
			this->Text = L"sales_report";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedIndex == 0) {
			try {
				String^ date1 = dateTimePicker1->Text;
				String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=bill";
				MySqlConnection^ con = gcnew MySqlConnection(constr);
				MySqlCommand^ cmd = gcnew MySqlCommand("select SUM(Total) AS sum_total,COUNT(BillID) as total_bills FROM billing_index WHERE DATE(Date) = '" + date1 + "'", con);
				con->Open();
				MySqlDataReader^ dr = cmd->ExecuteReader();
				while (dr->Read())
				{
					textBox2->Text = dr->GetString(0);
					textBox1->Text = dr->GetString(1);
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		}
		else if (comboBox1->SelectedIndex == 1) {
			try {
				String^ date1 = dateTimePicker1->Text;
				String^ date2 = dateTimePicker2->Text;
				String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=bill";
				MySqlConnection^ con = gcnew MySqlConnection(constr);
				MySqlCommand^ cmd = gcnew MySqlCommand("select SUM(Total) AS sum_total,COUNT(BillID) as total_bills FROM billing_index WHERE Date BETWEEN '" + date1 + "' AND '" + date2 + "'", con);
				con->Open();
				MySqlDataReader^ dr = cmd->ExecuteReader();
				while (dr->Read())
				{
					textBox2->Text = dr->GetString(0);
					textBox1->Text = dr->GetString(1);
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		}
	}


private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox1->SelectedIndex == 0) {
		label1->Text = "Select Date";
		label1->Visible = true;
		dateTimePicker1->Visible = true;
		label2->Visible = false;
		dateTimePicker2->Visible = false;
		button1->Visible = true;
	}
	else if (comboBox1->SelectedIndex == 1) {
		label1->Visible = true;
		label2->Visible = true;
		dateTimePicker1->Visible = true;
		dateTimePicker2->Visible = true;
		button1->Visible = true;
		
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}

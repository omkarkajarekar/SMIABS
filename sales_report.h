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
			this->StartPosition = FormStartPosition::CenterScreen;
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



	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panel2;




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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(sales_report::typeid));
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
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(735, 31);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(162, 67);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Display Report";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &sales_report::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(40, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 21);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Starting Date";
			this->label1->Visible = false;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(189, 77);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(162, 20);
			this->dateTimePicker1->TabIndex = 10;
			this->dateTimePicker1->Value = System::DateTime(2021, 7, 2, 0, 0, 0, 0);
			this->dateTimePicker1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(382, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 21);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Ending Date";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(66, 220);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(148, 21);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Total bills generated";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(247, 223);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(162, 20);
			this->textBox1->TabIndex = 14;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(247, 289);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(162, 20);
			this->textBox2->TabIndex = 16;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(65, 286);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(142, 21);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Total Sales Amount";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(507, 77);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(162, 20);
			this->dateTimePicker2->TabIndex = 19;
			this->dateTimePicker2->Value = System::DateTime(2021, 7, 2, 0, 0, 0, 0);
			this->dateTimePicker2->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(40, 17);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 21);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Select Type";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Specific Date", L"Range of Dates" });
			this->comboBox1->Location = System::Drawing::Point(189, 17);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(162, 21);
			this->comboBox1->TabIndex = 21;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &sales_report::comboBox1_SelectedIndexChanged);
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::Transparent;
			chartArea1->Area3DStyle->Enable3D = true;
			chartArea1->AxisX->MajorGrid->LineColor = System::Drawing::Color::LightGray;
			chartArea1->AxisY->MajorGrid->LineColor = System::Drawing::Color::LightGray;
			chartArea1->BackColor = System::Drawing::Color::Transparent;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(646, 214);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->IsValueShownAsLabel = true;
			series1->IsVisibleInLegend = false;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(373, 290);
			this->chart1->TabIndex = 22;
			this->chart1->Text = L"chart1";
			this->chart1->Visible = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1100, 36);
			this->panel1->TabIndex = 23;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(0, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(36, 36);
			this->pictureBox3->TabIndex = 24;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &sales_report::pictureBox3_Click);
			// 
			// button5
			// 
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(1060, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(40, 36);
			this->button5->TabIndex = 24;
			this->button5->Text = L"X";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &sales_report::button5_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->comboBox1);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->dateTimePicker2);
			this->panel2->Controls->Add(this->dateTimePicker1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Location = System::Drawing::Point(58, 66);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(961, 130);
			this->panel2->TabIndex = 24;
			// 
			// sales_report
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1100, 550);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"sales_report";
			this->Text = L"sales_report";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedIndex == 0) {
			try {
				chart1->Visible = true;
				chart1->Series["Series1"]->Points->Clear();
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
				con->Close();
				cmd = gcnew MySqlCommand("select BillID,Total FROM billing_index WHERE DATE(Date) = '" + date1 + "'", con);
				con->Open();
				dr = cmd->ExecuteReader();
				while (dr->Read())
				{
					chart1->Series["Series1"]->Points->AddXY(dr->GetString(0), Math::Round(System::Convert::ToDouble(dr->GetString(1)), 2));
				}
				con->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		}
		else if (comboBox1->SelectedIndex == 1) {
			try {
				chart1->Visible=true;
				chart1->Series["Series1"]->Points->Clear();
				String^ date1 = dateTimePicker1->Text;
				String^ date2 = dateTimePicker2->Text;
				String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=bill";
				MySqlConnection^ con = gcnew MySqlConnection(constr);
				MySqlCommand^ cmd = gcnew MySqlCommand("select SUM(Total) AS sum_total,COUNT(BillID) as total_bills FROM billing_index WHERE Date BETWEEN '" + date1 + "' AND '" + date2 + "'", con);
				con->Open();
				MySqlDataReader^ dr = cmd->ExecuteReader();
				while (dr->Read())
				{
					textBox2->Text = System::Convert::ToString(Math::Round(System::Convert::ToDouble(dr->GetString(0)),2));
					textBox1->Text = dr->GetString(1);
				}
				con->Close();


				cmd = gcnew MySqlCommand("select distinct(Date(Date)) FROM billing_index WHERE Date BETWEEN '" + date1 + "' AND '" + date2 + "'", con);
				con->Open();
				dr = cmd->ExecuteReader();
				while (dr->Read())
				{
					DateTime date = System::Convert::ToDateTime(dr->GetString(0));
					String^ formatted = date.ToString("yyyy-MM-dd");
					MySqlConnection^ con1 = gcnew MySqlConnection(constr);
					MySqlCommand^ cmd1 = gcnew MySqlCommand("select SUM(Total) AS sum_total FROM billing_index WHERE Date(Date)='" + formatted + "'", con1);
					con1->Open();
					MySqlDataReader^ dr1 = cmd1->ExecuteReader();
					while (dr1->Read())
					{
						formatted = date.ToString("dd-MM-yyyy");
						chart1->Series["Series1"]->Points->AddXY(formatted, Math::Round(System::Convert::ToDouble(dr1->GetString(0)),2));
					}
					con1->Close();
				}
				con->Close();
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
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}

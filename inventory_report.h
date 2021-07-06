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
	/// Summary for inventory_report
	/// </summary>
	public ref class inventory_report : public System::Windows::Forms::Form
	{
	public:
		inventory_report(void)
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
		~inventory_report()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ back_pictureBox;
	private: System::Windows::Forms::Button^ button1;









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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(inventory_report::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->back_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->back_pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(30, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Total Products";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(339, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Total Investment";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(144, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(131, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(469, 39);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(131, 20);
			this->textBox2->TabIndex = 3;
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::Transparent;
			chartArea1->Area3DStyle->Enable3D = true;
			chartArea1->BackColor = System::Drawing::Color::Transparent;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(121, 244);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(346, 269);
			this->chart1->TabIndex = 4;
			this->chart1->Text = L"Categories";
			// 
			// chart2
			// 
			this->chart2->BackColor = System::Drawing::Color::Transparent;
			chartArea2->Area3DStyle->Enable3D = true;
			chartArea2->AxisX->MajorGrid->LineColor = System::Drawing::Color::LightGray;
			chartArea2->AxisY->MajorGrid->LineColor = System::Drawing::Color::LightGray;
			chartArea2->BackColor = System::Drawing::Color::Transparent;
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(609, 244);
			this->chart2->Name = L"chart2";
			series2->ChartArea = L"ChartArea1";
			series2->IsValueShownAsLabel = true;
			series2->IsXValueIndexed = true;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			series2->ShadowOffset = 1;
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(357, 283);
			this->chart2->TabIndex = 5;
			this->chart2->Text = L"Invest per Category";
			this->chart2->Click += gcnew System::EventHandler(this, &inventory_report::chart2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(118, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(163, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Quantity Percentage by Category";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(585, 136);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(138, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Invested Price per Category";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(838, 76);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(131, 20);
			this->textBox3->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(838, 40);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(131, 20);
			this->textBox4->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(660, 79);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(169, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Estimated Profit Percentage";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(660, 43);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 17);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Estimated Profit";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(469, 76);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(131, 20);
			this->textBox5->TabIndex = 15;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(144, 76);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(131, 20);
			this->textBox6->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(338, 76);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(124, 17);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Estimated Sell Value";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(30, 76);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(103, 17);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Total Categories";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Location = System::Drawing::Point(42, 85);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1001, 127);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->label9->Location = System::Drawing::Point(37, 43);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(193, 30);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Inventory Overview";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->back_pictureBox);
			this->panel1->Location = System::Drawing::Point(0, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1100, 36);
			this->panel1->TabIndex = 18;
			// 
			// back_pictureBox
			// 
			this->back_pictureBox->BackColor = System::Drawing::Color::White;
			this->back_pictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"back_pictureBox.BackgroundImage")));
			this->back_pictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->back_pictureBox->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"back_pictureBox.InitialImage")));
			this->back_pictureBox->Location = System::Drawing::Point(0, 0);
			this->back_pictureBox->Name = L"back_pictureBox";
			this->back_pictureBox->Size = System::Drawing::Size(35, 36);
			this->back_pictureBox->TabIndex = 0;
			this->back_pictureBox->TabStop = false;
			this->back_pictureBox->Click += gcnew System::EventHandler(this, &inventory_report::back_pictureBox_Click);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1060, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(40, 36);
			this->button1->TabIndex = 19;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// inventory_report
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->ClientSize = System::Drawing::Size(1100, 550);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"inventory_report";
			this->Text = L"inventory_report";
			this->Load += gcnew System::EventHandler(this, &inventory_report::inventory_report_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->back_pictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void inventory_report_Load(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			chart2->Series["Series1"]->IsVisibleInLegend = false;
			chart1->Series["Series1"]->Points->Clear();
			chart2->Series["Series1"]->Points->Clear();
			int i = 0;
			float total_products,percent;
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=inventory";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlCommand^ cmd = gcnew MySqlCommand("select sum(product_qty),sum(product_purchase_price*product_qty),count(distinct(product_category)),sum(product_selling_price*product_qty),sum(product_selling_price*product_qty)-sum(product_purchase_price*product_qty) from stock", con);
			con->Open();
			MySqlDataReader^ dr = cmd->ExecuteReader();
			while (dr->Read()) {
				textBox1->Text = dr->GetString(0);
				total_products = System::Convert::ToInt32(dr->GetString(0));
				textBox2->Text = dr->GetString(1);
				textBox6->Text = dr->GetString(2);
				textBox5->Text = dr->GetString(3);
				textBox4->Text = dr->GetString(4);
				percent = Math::Round(System::Convert::ToDouble(dr->GetString(4)) / System::Convert::ToDouble(dr->GetString(1)) * 100, 2);
				textBox3->Text = System::Convert::ToString(percent)+"%";
			}
			con->Close();
			cmd = gcnew MySqlCommand("select distinct(product_category) from stock", con);
			con->Open();
			dr = cmd->ExecuteReader();
			while (dr->Read()) {
				MySqlConnection^ con1 = gcnew MySqlConnection(constr);
				MySqlCommand^ cmd1 = gcnew MySqlCommand("select sum(product_qty) as count,sum(product_purchase_price*product_qty) as price from stock where product_category = '"+ dr->GetString(0) +"'", con1);
				MySqlDataReader^ dr1;
				con1->Open();
				dr1 = cmd1->ExecuteReader();
				while (dr1->Read()) {
					percent = Math::Round(System::Convert::ToInt32(dr1->GetString(0))/total_products*100,2);
					chart1->Series["Series1"]->Points->AddXY(System::Convert::ToString(percent)+"%", dr1->GetString(0));
					chart1->Series["Series1"]->Points[i]->LegendText = dr->GetString(0);
					chart2->Series["Series1"]->Points->AddXY(dr->GetString(0), dr1->GetString(1));
					chart2->Series["Series1"]->Points[i]->LegendText = dr->GetString(0);
					i++;
				}
				
				con1->Close();
			}
			con->Close();
		}
		catch (Exception^ ex) {
			if (System::Convert::ToString(ex->Message) == "Input string was not in a correct format.") {
				MessageBox::Show("Enter all Fields properly");
			}
			else {
				MessageBox::Show(ex->Message);
			}
		}
	}
private: System::Void chart2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void back_pictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

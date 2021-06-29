#pragma once

namespace SupermarketInventoryandBillingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for NewBill
	/// </summary>
	public ref class NewBill : public System::Windows::Forms::Form
	{
	public:
		NewBill(void)
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
		~NewBill()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;







	private: System::Windows::Forms::Label^ label7;


	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;


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
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->panel5->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->button2);
			this->panel5->Controls->Add(this->panel6);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel5->Location = System::Drawing::Point(0, 598);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(912, 51);
			this->panel5->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(708, 14);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 25);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Generate Bill";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// panel6
			// 
			this->panel6->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel6->Location = System::Drawing::Point(0, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(31, 51);
			this->panel6->TabIndex = 2;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(912, 25);
			this->panel1->TabIndex = 4;
			// 
			// panel2
			// 
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(31, 25);
			this->panel2->TabIndex = 2;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 25);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(912, 59);
			this->panel3->TabIndex = 6;
			// 
			// panel4
			// 
			this->panel4->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(31, 59);
			this->panel4->TabIndex = 2;
			// 
			// panel7
			// 
			this->panel7->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel7->Location = System::Drawing::Point(0, 84);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(31, 514);
			this->panel7->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(7, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 17);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Product ID";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(10, 47);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(77, 20);
			this->textBox1->TabIndex = 9;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &NewBill::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(103, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 17);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Product Name";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(106, 47);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(141, 20);
			this->textBox2->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(274, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 17);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Category";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(277, 47);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(132, 20);
			this->textBox3->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(440, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 17);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Unit Price";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(443, 47);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(77, 20);
			this->textBox4->TabIndex = 15;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Location = System::Drawing::Point(37, 90);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(863, 111);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(737, 47);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(93, 20);
			this->textBox7->TabIndex = 23;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(549, 16);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(72, 17);
			this->label8->TabIndex = 22;
			this->label8->Text = L"GST ( in %)";
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(767, 82);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 23);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Add To List";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(645, 47);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(69, 20);
			this->textBox6->TabIndex = 19;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(734, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 17);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Total";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(552, 47);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(64, 20);
			this->textBox5->TabIndex = 17;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(642, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 17);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Qty";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeight = 30;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8
			});
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->Location = System::Drawing::Point(42, 224);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(813, 189);
			this->dataGridView1->TabIndex = 17;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column1->HeaderText = L"ID";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 43;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column2->HeaderText = L"Item #";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 62;
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column3->HeaderText = L"Name";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column4->HeaderText = L"Category";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column5->HeaderText = L"Unit Price";
			this->Column5->Name = L"Column5";
			this->Column5->Width = 78;
			// 
			// Column6
			// 
			this->Column6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column6->HeaderText = L"Qty";
			this->Column6->Name = L"Column6";
			this->Column6->Width = 48;
			// 
			// Column7
			// 
			this->Column7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column7->HeaderText = L"GST";
			this->Column7->Name = L"Column7";
			this->Column7->Width = 54;
			// 
			// Column8
			// 
			this->Column8->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column8->HeaderText = L"Total Amount";
			this->Column8->Name = L"Column8";
			this->Column8->Width = 95;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(650, 428);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 17);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Sub Total";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(722, 428);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(93, 20);
			this->textBox8->TabIndex = 22;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(614, 476);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(102, 17);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Other Charges";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(722, 475);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(93, 20);
			this->textBox9->TabIndex = 24;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(623, 542);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(93, 16);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Total Amount";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(722, 538);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(93, 20);
			this->textBox10->TabIndex = 26;
			// 
			// NewBill
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(912, 649);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel5);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"NewBill";
			this->panel5->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		int Qty,Other_Charges;
		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=inventory";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			int ProductID = Int32::Parse(textBox1->Text);

			MySqlDataReader^ dr;
			MySqlCommand^ cmd = gcnew MySqlCommand("select ProductName,Category,UnitPrice, GST from stock WHERE ProductID=" + ProductID + " ", con);
			con->Open();

			dr = cmd->ExecuteReader();
			/*while (dr->Read()) {
				textBox2->Text = dr->GetString(0);
				textBox3->Text = dr->GetString(1);
				textBox5->Text = dr->GetString(2);
				textBox8->Text = dr->GetString(3);
				Qty = Int32::Parse(textBox4->Text);
			}*/
			dr->Read();
			textBox2->Text = dr->GetString(0);
			textBox3->Text = dr->GetString(1);

			textBox4->Text = dr->GetString(2);
			int UnitPrice = Int32::Parse(textBox4->Text);

			textBox5->Text = dr->GetString(3);
			float GST = float::Parse(textBox5->Text);

			textBox6->Text = "0";
			String^ q = textBox6->Text;
			int Qty = Int32::Parse(textBox6->Text);

			float total_amount = Qty * UnitPrice;
			total_amount = total_amount * GST / 100;
			textBox7->Text = System::Convert::ToString(total_amount);

			textBox8->Text = textBox7->Text;

			textBox9->Text = "0";
			String^ other = textBox9->Text;
			int Other_Charges = 0;
			Other_Charges = Int32::Parse(textBox9->Text);

			float bill_amount = total_amount + Other_Charges;
			textBox10->Text = System::Convert::ToString(bill_amount);

			con->Close();

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		
	}

};
}

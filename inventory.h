#pragma once
#include "add_product.h"
#include "update_product.h"

namespace SupermarketInventoryandBillingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for inventory
	/// </summary>
	public ref class inventory : public System::Windows::Forms::Form
	{
	public:
		inventory(void)
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
		~inventory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(115, 110);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add new Product";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &inventory::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(139, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Inventory";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(115, 149);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Update product info";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &inventory::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(115, 194);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(135, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Remove Product";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(115, 239);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(135, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Available Stock";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(115, 283);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(135, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Running out of stock";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// inventory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(364, 376);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"inventory";
			this->Text = L"inventory";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		add_product^ obj = gcnew add_product();
		obj->Visible = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		update_product^ obj = gcnew update_product();
		obj->Visible = true;
	}
};
}

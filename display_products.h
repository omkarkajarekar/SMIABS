#pragma once

namespace SupermarketInventoryandBillingSystem {

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
			this->SuspendLayout();
			// 
			// display_products
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(417, 359);
			this->Name = L"display_products";
			this->Text = L"display_products";
			this->Load += gcnew System::EventHandler(this, &display_products::display_products_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void display_products_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}

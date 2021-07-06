#pragma once
#include "inventory.h"
#include "billing.h"
#include "manager_dashboard.h"

namespace SupermarketInventoryandBillingSystem {

	using namespace MySql::Data::MySqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Main_access_window
	/// </summary>
	public ref class Main_access_window : public System::Windows::Forms::Form
	{
	public:
		Main_access_window(void)
		{
			InitializeComponent();
			this->StartPosition = FormStartPosition::CenterScreen;
			//
			//TODO: Add the constructor code here
			//
		}

		Main_access_window(int userid)
		{
			InitializeComponent();
			User_Id = userid;
			this->StartPosition = FormStartPosition::CenterScreen;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Main_access_window()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ inventory_panel;
	private: System::Windows::Forms::PictureBox^ inventory_pictureBox;
	protected:

	protected:

	private: System::Windows::Forms::Button^ inventory_button;
	private: System::Windows::Forms::Panel^ billing_panel;


	private: System::Windows::Forms::PictureBox^ billing_pictureBox;
	private: System::Windows::Forms::Button^ billing_button;
	private: System::Windows::Forms::Panel^ admin_panel;
	private: System::Windows::Forms::PictureBox^ admin_pictureBox;
	private: System::Windows::Forms::Button^ admin_button;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::PictureBox^ back_pictureBox;
	private: System::Windows::Forms::Button^ close_button;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main_access_window::typeid));
			this->inventory_panel = (gcnew System::Windows::Forms::Panel());
			this->inventory_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->inventory_button = (gcnew System::Windows::Forms::Button());
			this->billing_panel = (gcnew System::Windows::Forms::Panel());
			this->billing_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->billing_button = (gcnew System::Windows::Forms::Button());
			this->admin_panel = (gcnew System::Windows::Forms::Panel());
			this->admin_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->admin_button = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->back_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->close_button = (gcnew System::Windows::Forms::Button());
			this->inventory_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inventory_pictureBox))->BeginInit();
			this->billing_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->billing_pictureBox))->BeginInit();
			this->admin_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->admin_pictureBox))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->back_pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// inventory_panel
			// 
			this->inventory_panel->Controls->Add(this->inventory_pictureBox);
			this->inventory_panel->Controls->Add(this->inventory_button);
			this->inventory_panel->Location = System::Drawing::Point(142, 189);
			this->inventory_panel->Name = L"inventory_panel";
			this->inventory_panel->Size = System::Drawing::Size(200, 100);
			this->inventory_panel->TabIndex = 0;
			// 
			// inventory_pictureBox
			// 
			this->inventory_pictureBox->Location = System::Drawing::Point(17, 15);
			this->inventory_pictureBox->Name = L"inventory_pictureBox";
			this->inventory_pictureBox->Size = System::Drawing::Size(54, 72);
			this->inventory_pictureBox->TabIndex = 1;
			this->inventory_pictureBox->TabStop = false;
			// 
			// inventory_button
			// 
			this->inventory_button->Enabled = false;
			this->inventory_button->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inventory_button->Location = System::Drawing::Point(77, 15);
			this->inventory_button->Name = L"inventory_button";
			this->inventory_button->Size = System::Drawing::Size(109, 72);
			this->inventory_button->TabIndex = 0;
			this->inventory_button->Text = L"Inventory";
			this->inventory_button->UseVisualStyleBackColor = true;
			this->inventory_button->Click += gcnew System::EventHandler(this, &Main_access_window::inventory_button_Click);
			// 
			// billing_panel
			// 
			this->billing_panel->Controls->Add(this->billing_pictureBox);
			this->billing_panel->Controls->Add(this->billing_button);
			this->billing_panel->Location = System::Drawing::Point(419, 189);
			this->billing_panel->Name = L"billing_panel";
			this->billing_panel->Size = System::Drawing::Size(200, 100);
			this->billing_panel->TabIndex = 2;
			// 
			// billing_pictureBox
			// 
			this->billing_pictureBox->Location = System::Drawing::Point(17, 15);
			this->billing_pictureBox->Name = L"billing_pictureBox";
			this->billing_pictureBox->Size = System::Drawing::Size(54, 72);
			this->billing_pictureBox->TabIndex = 1;
			this->billing_pictureBox->TabStop = false;
			// 
			// billing_button
			// 
			this->billing_button->Enabled = false;
			this->billing_button->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->billing_button->Location = System::Drawing::Point(77, 15);
			this->billing_button->Name = L"billing_button";
			this->billing_button->Size = System::Drawing::Size(102, 72);
			this->billing_button->TabIndex = 0;
			this->billing_button->Text = L"Billing";
			this->billing_button->UseVisualStyleBackColor = true;
			this->billing_button->Click += gcnew System::EventHandler(this, &Main_access_window::billing_button_Click);
			// 
			// admin_panel
			// 
			this->admin_panel->Controls->Add(this->admin_pictureBox);
			this->admin_panel->Controls->Add(this->admin_button);
			this->admin_panel->Location = System::Drawing::Point(697, 189);
			this->admin_panel->Name = L"admin_panel";
			this->admin_panel->Size = System::Drawing::Size(200, 100);
			this->admin_panel->TabIndex = 2;
			// 
			// admin_pictureBox
			// 
			this->admin_pictureBox->Location = System::Drawing::Point(17, 15);
			this->admin_pictureBox->Name = L"admin_pictureBox";
			this->admin_pictureBox->Size = System::Drawing::Size(54, 72);
			this->admin_pictureBox->TabIndex = 1;
			this->admin_pictureBox->TabStop = false;
			// 
			// admin_button
			// 
			this->admin_button->Enabled = false;
			this->admin_button->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->admin_button->Location = System::Drawing::Point(77, 15);
			this->admin_button->Name = L"admin_button";
			this->admin_button->Size = System::Drawing::Size(105, 72);
			this->admin_button->TabIndex = 0;
			this->admin_button->Text = L"Admin Dashboard";
			this->admin_button->UseVisualStyleBackColor = true;
			this->admin_button->Click += gcnew System::EventHandler(this, &Main_access_window::admin_button_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->close_button);
			this->panel1->Controls->Add(this->back_pictureBox);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1100, 36);
			this->panel1->TabIndex = 3;
			// 
			// back_pictureBox
			// 
			this->back_pictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"back_pictureBox.BackgroundImage")));
			this->back_pictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->back_pictureBox->Location = System::Drawing::Point(0, 0);
			this->back_pictureBox->Name = L"back_pictureBox";
			this->back_pictureBox->Size = System::Drawing::Size(41, 36);
			this->back_pictureBox->TabIndex = 4;
			this->back_pictureBox->TabStop = false;
			this->back_pictureBox->Click += gcnew System::EventHandler(this, &Main_access_window::back_pictureBox_Click);
			// 
			// close_button
			// 
			this->close_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->close_button->Location = System::Drawing::Point(1060, 0);
			this->close_button->Name = L"close_button";
			this->close_button->Size = System::Drawing::Size(40, 36);
			this->close_button->TabIndex = 4;
			this->close_button->Text = L"X";
			this->close_button->UseVisualStyleBackColor = true;
			this->close_button->Click += gcnew System::EventHandler(this, &Main_access_window::close_button_Click);
			// 
			// Main_access_window
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->ClientSize = System::Drawing::Size(1100, 500);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->admin_panel);
			this->Controls->Add(this->billing_panel);
			this->Controls->Add(this->inventory_panel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Main_access_window";
			this->Text = L"Main_access_window";
			this->Load += gcnew System::EventHandler(this, &Main_access_window::Main_access_window_Load);
			this->inventory_panel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inventory_pictureBox))->EndInit();
			this->billing_panel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->billing_pictureBox))->EndInit();
			this->admin_panel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->admin_pictureBox))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->back_pictureBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		int User_Id;
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
private: System::Void back_pictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void Main_access_window_Load(System::Object^ sender, System::EventArgs^ e) {
	int result;
	String^ Designation;
	try {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=users";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		MySqlCommand^ cmd = gcnew MySqlCommand("select EXISTS(select Password,Designation from employee WHERE UserID=" + User_Id + ")", con);
		MySqlDataReader^ dr;
		con->Open();
		dr = cmd->ExecuteReader();
		while (dr->Read()) {
			result = Int32::Parse(dr->GetString(0));
		}
		con->Close();
		if (result == 0) {
			MessageBox::Show("Invalid UserID");
		}
		else {
			cmd = gcnew MySqlCommand("select Password,Designation from employee WHERE UserID=" + User_Id + "", con);
			con->Open();
			dr = cmd->ExecuteReader();
			while (dr->Read())
			{
				Designation = dr->GetString(1);
			}
			con->Close();
			
			if (Designation == "Manager") {
				inventory_button->Enabled = true;
				billing_button->Enabled = true;
				admin_button->Enabled = true;
			}
			else if (Designation == "Inventory Executive") {
				inventory_button->Enabled = true;

				
			}
			else if (Designation == "Sales Executive") {
				billing_button->Enabled = true;

				
			}
			else {
				MessageBox::Show("Invalid Password");
			}

		}
	}
	catch (Exception^ ex) {
		if (System::Convert::ToString(ex->Message) == "Input string was not in a correct format.") {

		}
		else {
			MessageBox::Show(ex->Message);
		}

	}

}
private: System::Void inventory_button_Click(System::Object^ sender, System::EventArgs^ e) {
	inventory^ module1 = gcnew inventory(User_Id);
	module1->Visible = true;
}
private: System::Void billing_button_Click(System::Object^ sender, System::EventArgs^ e) {
	billing^ module1 = gcnew billing(User_Id);
	module1->Visible = true;
}
private: System::Void admin_button_Click(System::Object^ sender, System::EventArgs^ e) {
	manager_dashboard^ module1 = gcnew manager_dashboard(User_Id);
	module1->Visible = true;
}
private: System::Void close_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
};
}

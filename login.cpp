#include "login.h"
using namespace System;
using namespace System::Windows::Forms;
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SupermarketInventoryandBillingSystem::login form;
	Application::Run(% form);
}

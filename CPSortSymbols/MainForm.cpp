#include "MainForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]

int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CPSortSymbols::MainForm mainForm;
	Application::Run(%mainForm);
	return 0;
}
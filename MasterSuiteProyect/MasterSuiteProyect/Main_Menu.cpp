#include "Main_Menu.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]//leave this as is
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MasterSuiteProyect::Main_Menu form;
	Application::Run(%form);

	//Info about proyect creation from: https://es.slideshare.net/Metaconta2/crear-formulario-windows-form-con-visual-c-2015
}

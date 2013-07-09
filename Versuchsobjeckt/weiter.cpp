#include "start.h" //the header name for your form
#include "weiter.h"

using namespace Versuchsobjeckt; //the project name in your header file

[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,PSTR szCmdLine, int iCmdShow)
{

	Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew weiter());
    return 0;
}
#include "ConvForm.h"

using namespace Kursach2;

int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew ConvForm());
	return 0;
}
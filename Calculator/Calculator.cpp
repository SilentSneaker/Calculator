#include "Calculator.h"
#include "wx/wx.h"

wxIMPLEMENT_APP(Calculator);

Calculator::Calculator() 
{

}

Calculator::~Calculator()
{

}

bool Calculator::OnInit()
{
	frame1 = new Main();
	frame1->Show();
	return true;
}
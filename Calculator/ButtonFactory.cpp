#include "ButtonFactory.h"
#include "wx/wx.h"

ButtonFactory::ButtonFactory()
{

}

ButtonFactory::ButtonFactory(wxFrame* x)
{

}

ButtonFactory::~ButtonFactory()
{

}

void ButtonFactory::CreateButton(wxFrame* x)
{
	mbtn1 = new wxButton(x, 1, "1", wxPoint(0, 150), wxSize(100, 50));
	mbtn2 = new wxButton(x, 2, "2", wxPoint(100, 150), wxSize(100, 50));
	mbtn3 = new wxButton(x, 3, "3", wxPoint(200, 150), wxSize(100, 50));
	mbtn4 = new wxButton(x, 4, "4", wxPoint(0, 200), wxSize(100, 50));
	mbtn5 = new wxButton(x, 5, "5", wxPoint(100, 200), wxSize(100, 50));
	mbtn6 = new wxButton(x, 6, "6", wxPoint(200, 200), wxSize(100, 50));
	mbtn7 = new wxButton(x, 7, "7", wxPoint(0, 250), wxSize(100, 50));
	mbtn8 = new wxButton(x, 8, "8", wxPoint(100, 250), wxSize(100, 50));
	mbtn9 = new wxButton(x, 9, "9", wxPoint(200, 250), wxSize(100, 50));
	mbtn0 = new wxButton(x, 0, "0", wxPoint(100, 300), wxSize(100, 50));
	mbtn10 = new wxButton(x, 10, "+", wxPoint(0, 350), wxSize(100, 50));
	mbtn11 = new wxButton(x, 11, "-", wxPoint(100, 350), wxSize(100, 50));
	mbtn12 = new wxButton(x, 12, "*", wxPoint(200, 350), wxSize(100, 50));
	mbtn13 = new wxButton(x, 13, "÷", wxPoint(200, 300), wxSize(100, 50));
	mbtn14 = new wxButton(x, 14, "=", wxPoint(200, 100), wxSize(100, 50));
	mbtn15 = new wxButton(x, 15, "mod", wxPoint(0, 300), wxSize(100, 50));
	mbtn16 = new wxButton(x, 16, "bin", wxPoint(0, 50), wxSize(100, 50));
	mbtn17 = new wxButton(x, 17, "hex", wxPoint(100, 50), wxSize(100, 50));
	mbtn18 = new wxButton(x, 18, "dec", wxPoint(200, 50), wxSize(100, 50));
	mbtn19 = new wxButton(x, 19, "C", wxPoint(0, 100), wxSize(100, 50));
	mbtn20 = new wxButton(x, 20, "+/-", wxPoint(100, 100), wxSize(100, 50));
	mtxt = new wxTextCtrl(x, wxID_ANY, "", wxPoint(0, 0), wxSize(300, 50));

};
#include "Main.h"
#include "wx/wx.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
EVT_BUTTON(0, OnButtonClicked)
EVT_BUTTON(1, OnButtonClicked)
EVT_BUTTON(2, OnButtonClicked)
EVT_BUTTON(3, OnButtonClicked)
EVT_BUTTON(4, OnButtonClicked)
EVT_BUTTON(5, OnButtonClicked)
EVT_BUTTON(6, OnButtonClicked)
EVT_BUTTON(7, OnButtonClicked)
EVT_BUTTON(8, OnButtonClicked)
EVT_BUTTON(9, OnButtonClicked)
EVT_BUTTON(10, OnButtonClicked)
EVT_BUTTON(11, OnButtonClicked)
EVT_BUTTON(12, OnButtonClicked)
EVT_BUTTON(13, OnButtonClicked)
EVT_BUTTON(14, OnButtonClicked)
EVT_BUTTON(15, OnButtonClicked)
EVT_BUTTON(16, OnButtonClicked)
EVT_BUTTON(17, OnButtonClicked)
EVT_BUTTON(18, OnButtonClicked)
EVT_BUTTON(19, OnButtonClicked)
EVT_BUTTON(20, OnButtonClicked)


wxEND_EVENT_TABLE()


Main::Main() :wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(0, 0), wxSize(317, 440))
{

 mbtn1 = new wxButton(this, 1, "1", wxPoint(0, 150), wxSize(100, 50));
 mbtn2 = new wxButton(this, 2, "2", wxPoint(100, 150), wxSize(100, 50));
 mbtn3 = new wxButton(this, 3, "3", wxPoint(200, 150), wxSize(100, 50));
 mbtn4 = new wxButton(this, 4, "4", wxPoint(0, 200), wxSize(100, 50));
 mbtn5 = new wxButton(this, 5, "5", wxPoint(100, 200), wxSize(100, 50));
 mbtn6 = new wxButton(this, 6, "6", wxPoint(200, 200), wxSize(100, 50));
 mbtn7 = new wxButton(this, 7, "7", wxPoint(0, 250), wxSize(100, 50));
 mbtn8 = new wxButton(this, 8, "8", wxPoint(100, 250), wxSize(100, 50));
 mbtn9 = new wxButton(this, 9, "9", wxPoint(200, 250), wxSize(100, 50));
 mbtn0 = new wxButton(this, 0, "0", wxPoint(100, 300), wxSize(100, 50));
 mbtn10 = new wxButton(this, 10, "+", wxPoint(0, 350), wxSize(100, 50));
 mbtn11 = new wxButton(this, 11, "-", wxPoint(100, 350), wxSize(100, 50));
 mbtn12 = new wxButton(this, 12, "*", wxPoint(200, 350), wxSize(100, 50));
 mbtn13 = new wxButton(this, 13, "÷", wxPoint(200, 300), wxSize(100, 50));
 mbtn14 = new wxButton(this, 14, "=", wxPoint(200, 100), wxSize(100, 50));
 mbtn15 = new wxButton(this, 15, "mod", wxPoint(0, 300), wxSize(100, 50));
 mbtn16 = new wxButton(this, 16, "bin", wxPoint(0, 50), wxSize(100, 50));
 mbtn17 = new wxButton(this, 17, "hex", wxPoint(100, 50), wxSize(100, 50));
 mbtn18 = new wxButton(this, 18, "dec", wxPoint(200, 50), wxSize(100, 50));
 mbtn19 = new wxButton(this, 19, "C", wxPoint(0, 100), wxSize(100, 50));
 mbtn20 = new wxButton(this, 20, "+/-", wxPoint(100, 100), wxSize(100, 50));
 mtxt = new wxTextCtrl(this, wxID_ANY, "", wxPoint(0, 0), wxSize(300, 50));

}
Main::~Main()
{

}
void Main::OnButtonClicked(wxCommandEvent& evt)
{

	switch (evt.GetId())
	{
	case 1:
	{
		mtxt->AppendText("1");
		break;
	}
	case 2:
	{
		mtxt->AppendText("2");
		break;
	}
	case 3:
	{
		mtxt->AppendText("3");
		break;
	}
	case 4:
	{
		mtxt->AppendText("4");
		break;
	}
	case 5:
	{
		mtxt->AppendText("5");
		break;
	}
	case 6:
	{
		mtxt->AppendText("6");
		break;
	}
	case 7:
	{
		mtxt->AppendText("7");
		break;
	}
	case 8:
	{
		mtxt->AppendText("8");
		break;
	}
	case 9:
	{
		mtxt->AppendText("9");
		break;
	}
	case 10:
	{
		mtxt->AppendText("+");
		break;
	}
	case 11:
	{
		mtxt->AppendText("-");
		break;
	}
	case 12:
	{
		mtxt->AppendText("*");
		break;
	}
	case 13:
	{
		mtxt->AppendText("÷");
		break;
	}
	case 14:
	{
		mtxt->AppendText("=");
		break;
	}
	case 15:
	{
		mtxt->AppendText("mod");
		break;
	}
	case 16:
	{
		mtxt->AppendText("bin");
		break;
	}
	case 17:
	{
		mtxt->AppendText("hex");
		break;
	}
	case 18:
	{
		mtxt->AppendText("dec");
		break;
	}
	case 19:
	{
		mtxt->AppendText("C");
		break;
	}
	case 20:
	{
		mtxt->AppendText("+/-");
		break;
	}
	case 21:
	{
		mtxt->AppendText("1");
		break;
	}


	default:
		break;
	}

	evt.Skip();
}





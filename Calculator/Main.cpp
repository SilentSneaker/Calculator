#include "Main.h"
#include "wx/wx.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
EVT_BUTTON()

wxEND_EVENT_TABLE()


Main::Main() :wxFrame(nullptr, wxID_ANY, "Calculator",wxPoint(0,0), wxSize(317, 440))
{
	
	wxButton* mbtn1 = new wxButton(this, 1, "1", wxPoint(0,150),wxSize(100,50));
	wxButton* mbtn2 = new wxButton(this, 2, "2", wxPoint(100,150), wxSize(100,50));
	wxButton* mbtn3 = new wxButton(this, 3, "3", wxPoint(200,150),wxSize(100,50));
	wxButton* mbtn4 = new wxButton(this, 4, "4", wxPoint(0,200), wxSize(100, 50));
	wxButton* mbtn5 = new wxButton(this, 5, "5", wxPoint(100,200), wxSize(100, 50));
	wxButton* mbtn6 = new wxButton(this, 6, "6", wxPoint(200, 200), wxSize(100, 50));
	wxButton* mbtn7 = new wxButton(this, 7, "7", wxPoint(0,250), wxSize(100, 50));
	wxButton* mbtn8 = new wxButton(this, 8, "8", wxPoint(100,250), wxSize(100, 50));
	wxButton* mbtn9 = new wxButton(this, 9, "9", wxPoint(200,250), wxSize(100, 50));
	wxButton* mbtn0 = new wxButton(this, 0, "0", wxPoint(100,300), wxSize(100,50));
	wxButton* mbtn10 = new wxButton(this, 10, "+",wxPoint(0,350),wxSize(100,50));
	wxButton* mbtn11 = new wxButton(this, 11, "-",wxPoint(100,350), wxSize(100, 50));
	wxButton* mbtn12 = new wxButton(this, 12, "*", wxPoint(200,350), wxSize(100, 50));
	wxButton* mbtn13 = new wxButton(this, 13, "÷", wxPoint(200,300), wxSize(100, 50));
	wxButton* mbtn14 = new wxButton(this, 14, "=", wxPoint(200,100), wxSize(100, 50));
	wxButton* mbtn15 = new wxButton(this, 15, "mod",wxPoint(0, 300), wxSize(100, 50));
	wxButton* mbtn16 = new wxButton(this, 16, "bin", wxPoint(0, 50), wxSize(100, 50));
	wxButton* mbtn17 = new wxButton(this, 17, "hex", wxPoint(100, 50), wxSize(100, 50));
	wxButton* mbtn18 = new wxButton(this, 18, "dec", wxPoint(200, 50), wxSize(100, 50));
	wxButton* mbtn19 = new wxButton(this, 19, "C", wxPoint(0, 100), wxSize(100, 50));
	wxButton* mbtn20 = new wxButton(this, 20, "+/-", wxPoint(100,100), wxSize(100, 50));
	wxTextCtrl* mtxt = new wxTextCtrl(this, wxID_ANY,"",wxPoint(0,0), wxSize(300,50));

}
Main::~Main()
{

}
void Main::OnButtonClicked(wxCommandEvent& evt)
{
	mtxt->AppendText("0");

	evt.Skip();
}





#include "Main.h"
#include "wx/wx.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)

	EVT_BUTTON(1,OnButtonClicked1)

wxEND_EVENT_TABLE()

Main::Main() :wxFrame(nullptr, wxID_ANY, "Calculator")
{
}
Main::~Main()
{

}




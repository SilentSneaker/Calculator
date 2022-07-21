#pragma once
#include <string>
#include "wx/wx.h"
class ButtonFactory
{
public:
	ButtonFactory(wxFrame* x);
	ButtonFactory();
	~ButtonFactory();
	wxButton* mbtn0 = nullptr;
	wxButton* mbtn1 = nullptr;
	wxButton* mbtn2 = nullptr;
	wxButton* mbtn3 = nullptr;
	wxButton* mbtn4 = nullptr;
	wxButton* mbtn5 = nullptr;
	wxButton* mbtn6 = nullptr;
	wxButton* mbtn7 = nullptr;
	wxButton* mbtn8 = nullptr;
	wxButton* mbtn9 = nullptr;
	wxButton* mbtn10 = nullptr;
	wxButton* mbtn11 = nullptr;
	wxButton* mbtn12 = nullptr;
	wxButton* mbtn13 = nullptr;
	wxButton* mbtn14 = nullptr;
	wxButton* mbtn15 = nullptr;
	wxButton* mbtn16 = nullptr;
	wxButton* mbtn17 = nullptr;
	wxButton* mbtn18 = nullptr;
	wxButton* mbtn19 = nullptr;
	wxButton* mbtn20 = nullptr;
	wxTextCtrl* mtxt = nullptr;
public:
	void CreateButton(wxFrame* x);

};


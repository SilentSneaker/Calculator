#pragma once
#include "wx/wx.h"
#include "ButtonFactory.h"

class Main : public wxFrame
{
public:
	Main();
	~Main();
	ButtonFactory btn;
	float First;
	float Second;
	std::string sym;
	bool hex = false;
	bool bin = false;
	bool dec = true;

	void OnButtonClicked(wxCommandEvent& evt);
	wxDECLARE_EVENT_TABLE();
};


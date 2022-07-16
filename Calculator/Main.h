#pragma once
#include "wx/wx.h"
#include "ButtonFactory.h"

class Main : public wxFrame
{
public:
	Main();
	~Main();
	ButtonFactory btn;
	int* mField = nullptr;
	int First;
	int Second;
	std::string sym;

	void OnButtonClicked(wxCommandEvent& evt);
	wxDECLARE_EVENT_TABLE();
};


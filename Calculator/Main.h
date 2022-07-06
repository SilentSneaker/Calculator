#pragma once
#include "wx/wx.h"

class Main : public wxFrame
{
public:
	Main();
	~Main();
	wxButton* mbtn1 = nullptr;
	wxTextCtrl* mtxt = nullptr;
	wxListBox* mlist = nullptr;

	void OnButtonClicked1(wxCommandEvent& evt);
	void OnButtonClicked0(wxCommandEvent& evt);
	wxDECLARE_EVENT_TABLE();
};


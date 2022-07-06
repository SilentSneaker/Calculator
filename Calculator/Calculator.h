#pragma once
#include "wx/wx.h"
#include "Main.h"

class Calculator : public wxApp
{
public:
	Calculator();
	~Calculator();
	int mWidth = 3;
	int mHeight = 7;
	wxButton** btn;

	virtual bool OnInit();

private:
	Main* frame1 = nullptr;
};


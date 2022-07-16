#pragma once
#include "wx/wx.h"
#include "Main.h"

class Calculator : public wxApp
{
public:
	Calculator();
	~Calculator();
	virtual bool OnInit();

private:
	Main* frame1 = nullptr;
};


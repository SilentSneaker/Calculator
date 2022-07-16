#include "Main.h"
#include "wx/wx.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"
#include <iostream>
#include <bitset>
#include <sstream>
#include <string>

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
	btn.CreateButton(this);
}
Main::~Main()
{

}
void Main::OnButtonClicked(wxCommandEvent& evt)
{


	switch (evt.GetId())
	{
	case 0:
	{

		btn.mtxt->AppendText("0");
		break;
	}
	case 1:
	{
		btn.mtxt->AppendText("1");
		break;
	}
	case 2:
	{
		btn.mtxt->AppendText("2");
		break;
	}
	case 3:
	{
		btn.mtxt->AppendText("3");
		break;
	}
	case 4:
	{
		btn.mtxt->AppendText("4");
		break;
	}
	case 5:
	{
		btn.mtxt->AppendText("5");
		break;
	}
	case 6:
	{
		btn.mtxt->AppendText("6");
		break;
	}
	case 7:
	{
		btn.mtxt->AppendText("7");
		break;
	}
	case 8:
	{
		btn.mtxt->AppendText("8");
		break;
	}
	case 9:
	{
		btn.mtxt->AppendText("9");
		break;
	}
	case 10:
	{

		std::string b;
		b = btn.mtxt->GetLineText(12);
		if (First == NULL)
			First = std::stoi(b);
		else
			Second = std::stoi(b);
		sym = "+";
		btn.mtxt->Clear();
		break;
	}
	case 11:
	{
		std::string b;
		b = btn.mtxt->GetLineText(12);
		if (First == NULL)
			First = std::stoi(b);
		else
			Second = std::stoi(b);
		btn.mtxt->Clear();
		sym = "-";
		break;
	}
	case 12:
	{
		std::string b;
		b = btn.mtxt->GetLineText(12);
		if (First == NULL)
			First = std::stoi(b);
		else
			Second = std::stoi(b);
		btn.mtxt->Clear();
		sym = "*";
		break;
	}
	case 13:
	{
		std::string b;
		b = btn.mtxt->GetValue();
		if (First == NULL)
			First = std::stoi(b);
		else
			Second = std::stoi(b);
		btn.mtxt->Clear();
		sym = "÷";
		break;
	}
	case 14:
	{
		std::string b;
		b = btn.mtxt->GetValue();
		if (First == NULL)
			First = std::stoi(b);
		else
			Second = std::stoi(b);
		btn.mtxt->Clear();
		btn.mtxt->AppendText(std::to_string(CalculatorProcessor::getInstance()->Solve(First, Second, sym)));
		First = std::stoi((btn.mtxt->GetValue().ToStdString()));
		Second = NULL;
		sym = "";
		break;
	}
	case 15:
	{
		std::string b;
		b = btn.mtxt->GetValue();
		if (First == NULL)
			First = std::stoi(b);
		else
			Second = std::stoi(b);
		btn.mtxt->Clear();
		sym = "mod";
		break;
	}
	case 16:
	{
		if (bin)
			break;
		int b;
		b = std::stoi(btn.mtxt->GetValue().ToStdString());
		btn.mtxt->SetValue(std::bitset<32>(b).to_string());
		bin = true;
		hex = false;
		dec = false;
		break;
	}
	case 17:
	{
		if (hex)
			break;
		std::ostringstream a;
		int b;
		b = std::stoi(btn.mtxt->GetValue().ToStdString());
		a << std::hex << b;
		btn.mtxt->SetValue(a.str());
		hex = true;
		bin = false;
		dec = false;
		break;
	}
	case 18:
	{
		if (dec)
			break;
		if(hex == true)
		{
			btn.mtxt->SetValue("Dec");
		}
		else if (bin == true)
		{
			std::string a = btn.mtxt->GetValue().ToStdString();
			btn.mtxt->SetValue(std::to_string(std::stoi(a,nullptr,2)));
			
		}
			bin = false;
			hex = false;
			dec = true;
			break;
	}
	case 19:
	{
		btn.mtxt->Clear();
		First = NULL;
		Second = NULL;
		sym = "";
		bin, hex = false;
		dec = true;
		break;
	}
	case 20:
	{
		btn.mtxt->AppendText("+/-");
		break;
	}
	default:
		break;
	}

	evt.Skip();
}





#pragma once
#include <string>
#include "wx/wx.h"
class CalculatorProcessor
{
		CalculatorProcessor();
	~CalculatorProcessor();
	static CalculatorProcessor* obj;

public:
	static CalculatorProcessor* getInstance();
	int Solve(int a,int b, std::string _opp);
};


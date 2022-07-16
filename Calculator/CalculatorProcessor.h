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
	float Solve(float a,float b, std::string _opp);
};


#include "CalculatorProcessor.h"
#include "Main.h"


CalculatorProcessor *CalculatorProcessor::obj = nullptr;
CalculatorProcessor::CalculatorProcessor()
{
	
}
CalculatorProcessor::~CalculatorProcessor()
{

}
CalculatorProcessor* CalculatorProcessor::getInstance()
{
	if (obj == nullptr)
		obj = new CalculatorProcessor();
	return obj;
}
int CalculatorProcessor::Solve(int a, int b, std::string _opp)
{
	
	if (_opp == "+")
		return a + b;
	else if (_opp == "-")
		return a - b;
	else if (_opp == "*")
		return a * b;
	else if (_opp == "mod")
		a% b;
	else
		return a / b;
	
}
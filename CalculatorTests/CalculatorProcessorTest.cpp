#include "pch.h"
#include "CalculatorProcessorTest.h"
#include "../Calculator/CalculatorProcessor.h"
#include "wx/wx.h"
#include "../Calculator/Main.h"




bool CalculatorProcessorTest::Multiply1Decimal(float x, float y, float z)
{
	if (x * y == z)
		return true;
	else
		return false;
}
bool CalculatorProcessorTest::Multiply2Decimal(float x, float y, float z)
{
	if (x * y == z)
		return true;
	else
		return false;
}
bool CalculatorProcessorTest::Multiply3Decimal(float x, float y, float z)
{
	if (x * y == z)
		return true;
	else
		return false;
}
bool CalculatorProcessorTest::Sub1Dec(float x, float y, float z)
{
	if (x - y == z)
		return true;
	else
		return false;
}
bool CalculatorProcessorTest::Sub2Dec(float x, float y, float z)
{
	if (x - y == z)
		return true;
	else
		return false;
}
bool CalculatorProcessorTest::Sub3Dec(float x, float y, float z)
{
	if (x - y == z)
		return true;
	else
		return false;
}
bool CalculatorProcessorTest::Add1Dec(float x, float y, float z)
{
	if (x + y == z)
		return true;
	else
		return false;
}
bool CalculatorProcessorTest::Add2Dec(float x, float y, float z)
{
	if (x + y == z)
		return true;
	else
		return false;
}
bool CalculatorProcessorTest::Add3Dec(float x, float y, float z)
{
	if (x + y == z)
		return true;
	else
		return false;
}
bool CalculatorProcessorTest::Divide1Dec(float x, float y, float z)
{
	if (x / y == z)
		return true;
	else
		return false;
}
bool CalculatorProcessorTest::Divide2Dec(float x, float y, float z)
{
	if (x / y == z)
		return true;
	else
		return false;
}
bool CalculatorProcessorTest::Divide3Dec(float x, float y, float z)
{
	if (x / y == z)
		return true;
	else
		return false;
}
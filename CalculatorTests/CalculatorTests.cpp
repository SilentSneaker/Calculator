#include "pch.h"
#include "CppUnitTest.h"
#include "../Calculator/ButtonFactory.h"
#include "../CalculatorTests/ButtonFactoryTest.h"
#include "../CalculatorTests/CalculatorProcessorTest.h"
#include "../Calculator/CalculatorProcessor.h"
#include "wx/wx.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorTests
{



	TEST_CLASS(CalculatorTests)
	{
	public:
		ButtonFactory* F = new ButtonFactory();
		wxFrame* x = new wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(0, 0), wxSize(317, 440));
		TEST_METHOD(ID10)
		{
			F->CreateButton(x);
			bool result = ButtonFactoryTest::ButtonID10(*F);
			Assert::IsTrue(result);
		}
		TEST_METHOD(ID9)
		{
			F->CreateButton(x);
			bool result = ButtonFactoryTest::ButtonID9(*F);
			Assert::IsTrue(result);
		}
		TEST_METHOD(ID8)
		{
			F->CreateButton(x);
			bool result = ButtonFactoryTest::ButtonID8(*F);
			Assert::IsTrue(result);
		}
		TEST_METHOD(ID7)
		{
			F->CreateButton(x);
			bool result = ButtonFactoryTest::ButtonID7(*F);
			Assert::IsTrue(result);
		}
		TEST_METHOD(ID6)
		{
			F->CreateButton(x);
			bool result = ButtonFactoryTest::ButtonID6(*F);
			Assert::IsTrue(result);
		}
		TEST_METHOD(ID5)
		{
			F->CreateButton(x);
			bool result = ButtonFactoryTest::ButtonID5(*F);
			Assert::IsTrue(result);
		}
		TEST_METHOD(ID4)
		{
			F->CreateButton(x);
			bool result = ButtonFactoryTest::ButtonID4(*F);
			Assert::IsTrue(result);
		}
		TEST_METHOD(ID3)
		{
			F->CreateButton(x);
			bool result = ButtonFactoryTest::ButtonID3(*F);
			Assert::IsTrue(result);
		}
		TEST_METHOD(ID2)
		{
			F->CreateButton(x);
			bool result = ButtonFactoryTest::ButtonID2(*F);
			Assert::IsTrue(result);
		}
		TEST_METHOD(ID1)
		{
			F->CreateButton(x);
			bool result = ButtonFactoryTest::ButtonID1(*F);
			Assert::IsTrue(result);
		}


	};

	TEST_CLASS(Processor)
	{
	public:
		TEST_METHOD(Multi1Dec)
		{
			Assert::IsTrue(CalculatorProcessorTest::Multiply1Decimal(3.5, 4.6, CalculatorProcessor::getInstance()->Solve(3.5, 4.6, "*")));
		}
		TEST_METHOD(Multi2Dec)
		{
			Assert::IsTrue(CalculatorProcessorTest::Multiply2Decimal(3.52, 4.62, CalculatorProcessor::getInstance()->Solve(3.52, 4.62, "*")));
		}
		TEST_METHOD(Multi3Dec)
		{
			Assert::IsTrue(CalculatorProcessorTest::Multiply2Decimal(3.522, 4.622, CalculatorProcessor::getInstance()->Solve(3.522, 4.622, "*")));
		}
		TEST_METHOD(Sub1Dec)
		{
			Assert::IsTrue(CalculatorProcessorTest::Sub1Dec(9.3, 6.4, CalculatorProcessor::getInstance()->Solve(9.3, 6.4, "-")));
		}
		TEST_METHOD(Sub2Dec)
		{
			Assert::IsTrue(CalculatorProcessorTest::Sub2Dec(9.33, 6.43, CalculatorProcessor::getInstance()->Solve(9.33, 6.43, "-")));
		}
		TEST_METHOD(Sub3Dec)
		{
			Assert::IsTrue(CalculatorProcessorTest::Sub3Dec(9.34, 6.44, CalculatorProcessor::getInstance()->Solve(9.34, 6.44, "-")));
		}
		TEST_METHOD(Add1Dec)
		{
			Assert::IsTrue(CalculatorProcessorTest::Add1Dec(3.2, 5.6, CalculatorProcessor::getInstance()->Solve(3.2, 5.6, "+")));
		}
		TEST_METHOD(Add2Dec)
		{
			Assert::IsTrue(CalculatorProcessorTest::Add2Dec(3.25, 5.65, CalculatorProcessor::getInstance()->Solve(3.25, 5.65, "+")));
		}
		TEST_METHOD(Add3Dec)
		{
			Assert::IsTrue(CalculatorProcessorTest::Add3Dec(3.266, 5.655, CalculatorProcessor::getInstance()->Solve(3.266, 5.655, "+")));
		}
		TEST_METHOD(Div1Dec)
		{
			Assert::IsTrue(CalculatorProcessorTest::Divide1Dec(3.2, 6.5, CalculatorProcessor::getInstance()->Solve(3.2, 6.5, "÷")));
		}
		TEST_METHOD(Div2Dec)
		{
			Assert::IsTrue(CalculatorProcessorTest::Divide2Dec(3.24, 6.54, CalculatorProcessor::getInstance()->Solve(3.24, 6.54, "÷")));
		}
		TEST_METHOD(Div3Dec)
		{
			Assert::IsTrue(CalculatorProcessorTest::Divide3Dec(3.256, 6.556, CalculatorProcessor::getInstance()->Solve(3.256, 6.556, "÷")));
		}
	};
}

#include "pch.h"
#include "ButtonFactoryTest.h"
#include "../Calculator/ButtonFactory.h"
#include "wx/wx.h"
#include "../Calculator/Main.h"





bool ButtonFactoryTest::ButtonID10(ButtonFactory F)
{

	if (F.mbtn10->GetId() == 10)
		return true;
	else
		return false;
}
bool ButtonFactoryTest::ButtonID9(ButtonFactory F)
{

	if (F.mbtn9->GetId() == 9)
		return true;
	else
		return false;
}

bool ButtonFactoryTest::ButtonID8(ButtonFactory F)
{

	if (F.mbtn8->GetId() == 8)
		return true;
	else
		return false;
}
bool ButtonFactoryTest::ButtonID7(ButtonFactory F)
{

	if (F.mbtn7->GetId() == 7)
		return true;
	else
		return false;
}
bool ButtonFactoryTest::ButtonID6(ButtonFactory F)
{

	if (F.mbtn6->GetId() == 6)
		return true;
	else
		return false;
}
bool ButtonFactoryTest::ButtonID5(ButtonFactory F)
{

	if (F.mbtn5->GetId() == 5)
		return true;
	else
		return false;
}
bool ButtonFactoryTest::ButtonID4(ButtonFactory F)
{

	if (F.mbtn4->GetId() == 4)
		return true;
	else
		return false;
}
bool ButtonFactoryTest::ButtonID3(ButtonFactory F)
{

	if (F.mbtn3->GetId() == 3)
		return true;
	else
		return false;
}
bool ButtonFactoryTest::ButtonID2(ButtonFactory F)
{

	if (F.mbtn2->GetId() == 2)
		return true;
	else
		return false;
}
bool ButtonFactoryTest::ButtonID1(ButtonFactory F)
{

	if (F.mbtn1->GetId() == 1)
		return true;
	else
		return false;
}





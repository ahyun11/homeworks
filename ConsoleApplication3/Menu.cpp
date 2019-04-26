#include "pch.h"
#include "Menu.h"

Menu::Menu()
{
	m_CoffeeName[0] = "¾Æ¸Þ¸®Ä«³ë ";
	m_CoffeeName[1] = "Ä«Æä¶ó¶¼";
	m_CoffeeName[2] = "Ä«¶ó¸á¸¶³¢¾Æ¶Ç";
	m_CoffeeName[3] = "¹Ù´Ò¶ó¶ó¶¼";

	Price[0] = 5000;
	Price[1] = 5500;
	Price[2] = 6000;
	Price[3] = 6500;
}

Menu::~Menu()
{
}

void Menu::Show()
{
	for (int i = 0; i < 4; ++i)
	{
		cout << m_CoffeeName[i] << "  " << Price[i] << endl;
	}
	
}

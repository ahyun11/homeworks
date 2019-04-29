#include "pch.h"
#include "Machine.h"


Machine::Machine()
{
	Balance = 0;

	DrinkArray[1].m_Drinkname = "1.사이다";
	DrinkArray[1].m_Price= 500;
	DrinkArray[2].m_Drinkname= "2.콜라";
	DrinkArray[2].m_Price= 700;
	DrinkArray[3].m_Drinkname= "3.환타";
	DrinkArray[3].m_Price = 600;
	DrinkArray[4].m_Drinkname= "4.레드불";
	DrinkArray[4].m_Price= 1000;

	for (int i = 1; i < 5; i++) {
		DrinkArray[i].m_Count = 5;
	}
}

void Machine::BalancePrint()
{
	cout << "현재 잔액 : " << Balance << endl;
}

void Machine::input_Money(int Price)
{
	Balance += Price;
}

void Machine::DrinkPrint()
{
	cout << "----------------------------" << endl;
	cout << "	" << "이름" << "	" << "가격" << "	" << "남은수량" << endl;
	cout << "----------------------------" << endl;
	for (int i = 1; i < 5; i++)
	{
		cout << "	" << DrinkArray[i].m_Drinkname <<"	" << DrinkArray[i].m_Price << "	" << DrinkArray[i].m_Count<< endl;
	}
	cout << "----------------------------" << endl;
}

void Machine::DrinkChoice(int a_Kind)
{
	if (DrinkArray[a_Kind].m_Price <= Balance)
	{
		if (DrinkArray[a_Kind].m_Count == 0)
		{
			cout << "해당 음료수는 품절되었습니다." << endl;
		}
		else
		{
			DrinkArray[a_Kind].m_Count--;
			Balance -= DrinkArray[a_Kind].m_Price;
			cout << DrinkArray[a_Kind].m_Drinkname << "을(를) 반환하였습니다." << endl;
		}
	}
	else
	{
		cout << "현재 잔액이 부족합니다." << endl;
	}
}

void Machine::Give_Money()
{
	cout << Balance << "원을 반환하였습니다." << endl;

	Balance = 0;
}
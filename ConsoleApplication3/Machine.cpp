#include "pch.h"
#include "Machine.h"


Machine::Machine()
{
	Balance = 0;

	DrinkArray[1].m_Drinkname = "1.���̴�";
	DrinkArray[1].m_Price= 500;
	DrinkArray[2].m_Drinkname= "2.�ݶ�";
	DrinkArray[2].m_Price= 700;
	DrinkArray[3].m_Drinkname= "3.ȯŸ";
	DrinkArray[3].m_Price = 600;
	DrinkArray[4].m_Drinkname= "4.�����";
	DrinkArray[4].m_Price= 1000;

	for (int i = 1; i < 5; i++) {
		DrinkArray[i].m_Count = 5;
	}
}

void Machine::BalancePrint()
{
	cout << "���� �ܾ� : " << Balance << endl;
}

void Machine::input_Money(int Price)
{
	Balance += Price;
}

void Machine::DrinkPrint()
{
	cout << "----------------------------" << endl;
	cout << "	" << "�̸�" << "	" << "����" << "	" << "��������" << endl;
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
			cout << "�ش� ������� ǰ���Ǿ����ϴ�." << endl;
		}
		else
		{
			DrinkArray[a_Kind].m_Count--;
			Balance -= DrinkArray[a_Kind].m_Price;
			cout << DrinkArray[a_Kind].m_Drinkname << "��(��) ��ȯ�Ͽ����ϴ�." << endl;
		}
	}
	else
	{
		cout << "���� �ܾ��� �����մϴ�." << endl;
	}
}

void Machine::Give_Money()
{
	cout << Balance << "���� ��ȯ�Ͽ����ϴ�." << endl;

	Balance = 0;
}
#include "pch.h"
#include "Menu.h"
#include "Barista.h"
#include <Windows.h>

Barista::Barista()
{
}

Barista::~Barista()
{
}

void Barista::MakeCoffee(string CoffeeName)
{
	bool Check;
	for(int i= 0 ; i <4;++i) 
	{
		
		if(CoffeeName == menu.m_CoffeeName[i] )
		{
			Check = true ;
		}
		
	}
	if (Check)
	{
		cout << "���� �޴� �Դϴ�." <<endl;
		return ;
	}
	for(int j=0; j<5;++j)
	{
		
		for (int i = 0; i < j; ++i)
		{
			cout << "��";
		}
		cout << "������"<<endl;
		Sleep(500);
		system("cls");
	}
	cout << CoffeeName <<"���Խ��ϴ�" <<endl; 
   //���� - > Ŀ������ 

}
string Barista::ShowOrder()
{
	string Coffee;
	cout << "������ �ֹ� �Ͻðڽ��ϱ� ?" << endl;
	cin >> Coffee;
	
	return Coffee;
}
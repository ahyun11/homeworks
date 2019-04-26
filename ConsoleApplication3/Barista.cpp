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
		cout << "없는 메뉴 입니다." <<endl;
		return ;
	}
	for(int j=0; j<5;++j)
	{
		
		for (int i = 0; i < j; ++i)
		{
			cout << "▶";
		}
		cout << "제조중"<<endl;
		Sleep(500);
		system("cls");
	}
	cout << CoffeeName <<"나왔습니다" <<endl; 
   //오더 - > 커피제조 

}
string Barista::ShowOrder()
{
	string Coffee;
	cout << "무엇을 주문 하시겠습니까 ?" << endl;
	cin >> Coffee;
	
	return Coffee;
}
#include "pch.h"
#include "Machine.h"
#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
	Machine a1;
	char menu;
	int  Price;
	int  Kind;

	do {
		cout << "메뉴" << endl;
		cout << "---------------------" << endl;
		a1.BalancePrint();
		cout << "1. 돈 넣기" << endl;
		cout << "2. 음료수 선택" << endl;
		cout << "3. 잔돈 반환" << endl;
		cout << "q. 종료" << endl;
		cout << "메뉴 선택 : ";
		cin >> menu;

		switch (menu) {
		case '1':
			cout << "금액 입력 : ";
			cin >> Price;
			a1.input_Money(Price);
			break;
		case '2':
			a1.DrinkPrint();
			cout << "종류 선택 : ";
			cin >> Kind;
			a1.DrinkChoice(Kind);
			break;
		case '3':
			a1.Give_Money();
			break;
		case 'q':
			break;
		default:
			cout << "잘못된 메뉴를 선택하셨습니다." << endl;
		}



		system("cls");
	} while (menu != 'q');

	return 0;
}
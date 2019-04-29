#pragma once
#include <iostream>
#include <iomanip>
using namespace std;
#include <string>

typedef struct {
	string m_Drinkname;
	int m_Price;
	int m_Count;
} Drink;

class Machine {
private:
	int Balance;
	Drink DrinkArray[5];

public:
	Machine();
	void BalancePrint();
	void input_Money (int Price);
	void DrinkPrint();
	void DrinkChoice(int Kind);
	void Give_Money();
};
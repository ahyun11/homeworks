#pragma once

class Barista
{
public :
	Barista(Menu);
	~Barista();
	void MakeCoffee(string CoffeeName);
	string ShowOrder();
private :
	Menu  menu;

};
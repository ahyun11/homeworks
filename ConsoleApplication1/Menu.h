#pragma once
#include <string>

class customer {
public :
	void order(string menuName) {};
private : 
	int Money;

};

class MenuItem {
public :

private : 

};
class Menu {
public :
	MenuItem choose(string name) {};

private :

};
class Barista {
public :
	Coffee makeCoffee(MenuItem menuItem) {};
private :

};
class Coffee
{
public :
	Coffee();
	~Coffee();
private : 
};
#include "pch.h"
#include "Customer.h"
#include "Barista.h"


Customer::Customer()
{

}

Customer ::~Customer()
{

}

void Customer::Order(string m_coffee,Barista & a)
{
	a.MakeCoffee(m_coffee);
}

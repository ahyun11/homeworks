#pragma once

class Customer
{
private :
	int m_Money;
	
public :
	Customer();
	~Customer();
	void Order(string m_coffee , Barista & a);
	
};
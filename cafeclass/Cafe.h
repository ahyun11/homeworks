#pragma once

#include "Info.h"

class Cafe : public Info
{
public :
	using BuyCount = int;
	using PriceVal = int;
	 
public :
	Cafe();
	~Cafe() = default;

	void AddConSumer(class Barista * a_nBarista);
	std::tuple<bool, PriceVal, BuyCount>Buy(int a_nCount);

	int Price(int a_nCount);

	virtual void Print() override;
	
private :

	PriceVal Sell(class Barista * a_pBarista, int a_nCount);

	std::vector<class Barista *>  m_vcBarista);
	float m_fTax;
	int m_nMoney = 0;
};
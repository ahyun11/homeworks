#pragma once
#include "Cafe.h"

class Barista
{
public :
	
	const static int m_nPrice;
	Barista();
	virtual ~Barista();

	virtual void Print() override;

	void AddMoney(int a_nMoney);

	static int GetPrice_Each();
};
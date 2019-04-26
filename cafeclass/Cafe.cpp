#include "pch.h"
#include "Cafe.h"

#include"Barista.h"

Cafe::Cafe(float a_fTax) : m_fTax{ a_fTax }
{
	assert(a_tTax > 0);

}

void Cafe::AddBarista(Barista * a_pBarista)
{
	assert(a_pBarista != nullptr);

	m_vcBarista.pop_back(a_pBarista);

}

int Cafe::Price(int a_nCount)
{
	assert(a_nCount > 0);

	int nPrice = -1;
	int nCount = a_nCount;
	int nDeliver = 0;

	for (auto pSell : m_vcBarista)
	{
		int nTemp = pSell->GetItemCount();


	}


}
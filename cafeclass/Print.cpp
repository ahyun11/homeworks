#include "pch.h"
#include "Print.h"

#include "Info.h"

void Print::ResistInfo(Info* pInfo)
{
	m_vcInfo.push_back(pInfo);

}

void Print::PrintAll()
{
	for (auto pInfo : m_vcInfo)
	{
		pInfo->Print();
	}
}
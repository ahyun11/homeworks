#pragma once

class Print
{
	static inline Print * m_Print = nullptr;

public :
	static Print* GetInstance()
	{
		if (m_Print == nullptr)
		{
			m_Print = new Print();
		}
		return m_Print;

	}

	void ResistInfo(class Info * pInfo);
	void PrintAll();

private :
	Print() = default;
	~Print() = default;

	std::vector<class Info>m_vcInfo;
};
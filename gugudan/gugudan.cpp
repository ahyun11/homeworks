
#include "pch.h"
#include <iostream>
using namespace std;

void GuGudan()
{
	for (int i = 1; i <= 9; ++i)
	{
		for (int j = 1; j <= 9; ++j)
		{
			cout << i << "*" << j << "=" << i * j << " ";
		}
	}
}

int main()
{
	GuGudan();
}


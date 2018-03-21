#include "stdafx.h"
#include "Czynnosc.h"
#include <iostream>



Czynnosc::Czynnosc()
{
	cout << "konstruktor czynnosc";
}


Czynnosc::~Czynnosc()
{
}
void Czynnosc::zabijSie()
{
	std::cout << "JESTEM MARTWY" << endl;
}

void Czynnosc::GetTime()
{
	std::cout << "nie dam" << endl;
}

vector<int> Czynnosc::Fibonacii(int n)
{
	vector<int> vec;
	for (int i = 0; i < n; i++)
	{
		if (i <= 2) vec.push_back(1);
		else vec.push_back(vec[i-1] + vec[i-2]);
	}
	return vec;
}

deque<int> Czynnosc::Silnia()
{

}


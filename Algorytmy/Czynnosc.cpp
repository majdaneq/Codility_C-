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
void Czynnosc::zjedz()
{
	std::cout << "Omnomnomnom" << endl;
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

deque<int> Czynnosc::Silnia(int n)
{
	deque<int> deq;
	if (n <= 2) { 
		deq.push_back(n);
		return deq;
	}
	double silnia = 2;
	for (int i = 3; i <= n; i++)
	{
		silnia *= i;
		deq.push_back(silnia);
	}
	return deq;
}

int Czynnosc::SilniaRek(int n)
{	
	if (n < 2)return 1;
	else return n*SilniaRek(n - 1);


}


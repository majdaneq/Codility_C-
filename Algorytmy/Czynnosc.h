#pragma once
#include <algorithm>
#include<cstdio>
#include<chrono>
#include<vector>
#include <deque>
using namespace std;
class Czynnosc
{
public:
	Czynnosc();
	~Czynnosc();
	void zabijSie();
	int a = 0;
	void GetTime();
	vector<int> Fibonacii(int n);
	deque<int> Silnia();
};


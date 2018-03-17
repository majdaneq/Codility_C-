#include "stdafx.h"
#include "MaxProfit.h"

#include <algorithm>
#include<vector>
using namespace std;
//1)https://app.codility.com/demo/results/training3FPUTA-UQZ/
//
//2)https://app.codility.com/demo/results/training9CMG9M-3F8/
//Task Score
//66 %
//Correctness
//100 %
//Performance
//25 %

MaxProfit::MaxProfit()
{
}


MaxProfit::~MaxProfit()
{
}


int MaxProfit::solution(vector<int> &A) {
	int diff = 0;


	auto max = max_element(A.begin(), A.end());
	int posmax = distance(A.begin(), max);
	//cout<<"MAX: " <<*max<< "POZYCJA: "<<posmax<<endl; 

	auto min = min_element(A.begin(), A.end());
	int posmin = distance(A.begin(), min);
	// cout<<"MAX: " <<*min<< "POZYCJA: "<<posmin<<endl;

	//cout<<*max-*min;

	if (posmin<posmax) return *max - *min;


	int sq = A.size() - 1;
	for (int i = sq; i>0; i--)
	{
		for (int j = i - 1; j>-1; j--)
		{
			if (A[i] - A[j]>diff) diff = A[i] - A[j];
		}

	}
	return diff;
}

#include "stdafx.h"
#include "PassingCars.h"

#include <vector>
//https://app.codility.com/demo/results/trainingHX4M8D-SDG/
//Task Score
//60 %
//Correctness
//100 %
//Performance
//20 %

using namespace std;
PassingCars::PassingCars()
{
}


PassingCars::~PassingCars()
{
}

// you can use includes, for example:
#include <algorithm>
#include<iostream>
#include <vector>       


int PassingCars::solution(vector<int> &A) {

	int passed = 0;
	int position = 0;
	for (int i = 0; i<A.size() - 1; i++)
	{
		if (passed>1000000000) return -1;
		if (A[i] == 0)
		{
			for (int j = i + 1; j<A.size(); j++)
				if (A[j] == 1)  passed++;
		}
	}

	return passed;
	
}

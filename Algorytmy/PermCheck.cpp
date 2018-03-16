#include "stdafx.h"
#include "PermCheck.h"
#include <algorithm>
//Task Score
//100 %
//Correctness
//100 %
//Performance
//100 %
//https://app.codility.com/demo/results/trainingYP64YW-5GR/
PermCheck::PermCheck()
{
}


PermCheck::~PermCheck()
{
}
int PermCheck::solution(vector<int> &A)
{
	if (A.size() == 0) return 0;
	if (A.size() == 1 && A[0] == 1) return 1;

	sort(A.begin(), A.end());
	for (int i = 0; i<A.size(); i++)
	{
		if (A[i] != i + 1) return 0;
	}
	return 1;
}


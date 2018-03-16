#include "stdafx.h"
#include "CountFactors.h"
//https://app.codility.com/demo/results/trainingZPF2CW-Z89/
//Task Score
//71 %
//Correctness
//100 %
//Performance
//33%

CountFactors::CountFactors()
{
}


CountFactors::~CountFactors()
{
}

int CountFactors::solution(int N)
{
	int divider = 0;

	for (int i = 1; i <= N; i++)
		if (N%i == 0) divider++;

	return divider;
}

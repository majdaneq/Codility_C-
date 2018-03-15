#include "stdafx.h"
#include "OddOccurrencesInArray.h"

//https://app.codility.com/demo/results/trainingR7VEAT-STB/ correctness 80% performance 25%
OddOccurrencesInArray::OddOccurrencesInArray()
{
}


OddOccurrencesInArray::~OddOccurrencesInArray()
{
}

int OddOccurrencesInArray::solution(vector<int>& A)
{
	int i = 0;
	int notodd = 0;
	while (count(A.begin(), A.end(), i) != 1)
	{
		i++;
	}

	return i;
}



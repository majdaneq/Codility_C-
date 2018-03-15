#include "stdafx.h"
#include "CyclicRotation.h"
#include "vector"
#include "algorithm"
using namespace std;
//https://app.codility.com/demo/results/training5YM373-EWW/ 62%
//https://app.codility.com/demo/results/trainingSM56VH-N4K/ 75&

CyclicRotation::CyclicRotation()
{
}


CyclicRotation::~CyclicRotation()
{
}

vector<int> CyclicRotation::solution(vector<int>& A, int K)
{
	if (A.empty()) return A;

	int *tab = new int[A.size()];	

	for (int i = 0; i<K; i++)
	{
		int Size = A.size();
		for (int i = 0; i<Size; i++)
		{
			tab[i + 1] = A[i];
		}
		tab[0] = A[Size - 1];
		A.clear();
		for (int i = 0; i<Size; i++)
		{
			A.push_back(tab[i]);
		}
	}
	return A;
}




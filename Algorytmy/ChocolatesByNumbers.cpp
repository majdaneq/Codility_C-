#include "stdafx.h"
#include "ChocolatesByNumbers.h"
//Task Score
//50 %
//Correctness
//100 %
//Performance
//0 %
//https://app.codility.com/demo/results/trainingY42CE4-CGC/

ChocolatesByNumbers::ChocolatesByNumbers()
{
}


ChocolatesByNumbers::~ChocolatesByNumbers()
{
}

int ChocolatesByNumbers::solution(int N, int M) {
	bool eaten = false;
	int *tab = new int[1000000];
	if (N == 1) return 1;
	int choc = 0;
	int i = 0;
	int num = 0;
	int X = 0;
	while (!eaten)
	{
		num = (X + M) % N;
		tab[i] = num;
		X = num;

		for (int j = 0; j<i; j++)
		{
			if (tab[j] == num)
			{
				delete[]tab;
				return choc;
			}
		}
		choc++;
		i++;
	}
}

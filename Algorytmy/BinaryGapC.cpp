#include "stdafx.h"
#include "BinaryGapC.h"
#include "stdafx.h"
#include "algorithm"
#include "iostream"
#include "string"
#include <math.h>
//https://app.codility.com/demo/results/trainingGGK6G8-E2X/ 100%

using namespace std;
BinaryGapC::BinaryGapC()
{
}


BinaryGapC::~BinaryGapC()
{
}

int BinaryGapC::solution(int N)
{
	std::string binary;
	if (N<1) return 0;
	while (N != 0)
	{
		binary += to_string(N % 2);
		N = N / 2;
	}
	int countermax[20]{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	int counter = 0;
	int cc = 0;

	for (int i = 0; i<binary.length(); i++)
	{
		if (binary[i] == '0') counter++;
		else
		{
			countermax[cc] = counter;
			counter = 0;
			cc++;
		}
	}
	int maxx = 0;
	if (binary[0] == '0') countermax[0] = 0;

	for (int j = 0; j < cc; j++)
	{
		if (countermax[j] > maxx) maxx = countermax[j];
	}
	return maxx;
}



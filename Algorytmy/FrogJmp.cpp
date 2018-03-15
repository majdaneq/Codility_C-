#include "stdafx.h"
#include "FrogJmp.h"


FrogJmp::FrogJmp()
{
}


FrogJmp::~FrogJmp()
{
}

int FrogJmp::solution(int X, int Y, int D) {
	int jumps = 0;
	if (X >= Y) return 0;
	while (X<Y)
	{
		X += D; jumps++;
	}
	return jumps;
}
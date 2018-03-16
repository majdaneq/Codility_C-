#pragma once
#include "stdafx.h"
#include "algorithm"
#include "iostream"
#include "string"
#include <math.h>
#include "vector"
class CyclicRotation
{
public:
	CyclicRotation();
	~CyclicRotation();
	vector <int> solution(vector<int> &A, int K);
};


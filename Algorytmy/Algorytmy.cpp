#include "stdafx.h"
#include "algorithm"
#include "iostream"
#include "string"
#include <math.h>
#include "BinaryGapC.h"
#include "vector"
#include "CyclicRotation.h"

using namespace std;

string liczbyPierwsze(int tester)
{
	if (tester < 2) return "NIE";
	for (int i = 2; i*i <= tester; i++)
		if (tester%i == 0) return "NIE";
	return "TAK";
}

int nwd(int a, int b)
{
	do
	{
		if (a>b) a = a - b;
		else b = b - a;
	} while (a != b);

	return a;
}

char lastDigitOfPower(int a, int b)
{
	int x = 0;
	x = pow(a, b);
	string d = to_string(x);
	int num = d.length() - 1;
	
	char lastDigit = d.at(num);
		return lastDigit;	
}

int solution(int N) {
	// write your code in C++14 (g++ 6.2.0)
	//double x=N;
	string binary;
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


int main()
{

#pragma region wywolania_main
	/*LICZBY PIERWSZE
	int n = 0;
	while (n < 100000)
	{
	cout << liczbyPierwsze(n) << endl;
	n++;
	}
	*/

/* NWD
int test;
	int a, b;
	cin >> test;
	for (int i = 0; i < test; i++)
	{
		cin >> a >> b;
		cout << nwd(a, b) << endl;
	}
*/

	//int test;
	//cin >> test;
	//int a=0, b=0;
	//for (int i = 0; i < test; i++)
	//{
	//	cin >> a>> b;
	//	cout << lastDigitOfPower(a, b) << endl;		
	//}
#pragma endregion

	BinaryGapC obj;								//1
	cout<<obj.solution(1024);
	CyclicRotation objx;						//2
	vector<int> vec = {0, 0, 1, 2, 4};
	objx.solution(vec,10);


	int a;
	cin >> a;
	return 0;
}


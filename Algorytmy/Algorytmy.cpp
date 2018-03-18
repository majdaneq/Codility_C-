#include "stdafx.h"
#include "algorithm"
#include "iostream"
#include "string"
#include <math.h>
#include "BinaryGapC.h"
#include "vector"
#include "CyclicRotation.h"
#include <memory>

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
bool czyParzysta(int n) {
	return (n % 2 ? false : true);
}
int *size(int rozmiar)
{

	unique_ptr<int[]> uptr(new int[rozmiar]);

	return uptr.release();
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
	cout << obj.solution(1024);
	CyclicRotation objx;						//2
	vector<int> vec = { 0, 0, 1, 2, 4 };
	objx.solution(vec, 10);
	int c = 2;
	int b = 3;
	cout << "DLA INT" << min(c, b) << endl;
	string A = "AAA";
	string B = "BBB";
	cout << "DLA STRING" << min(A, B) << endl;



	vector<int> u;
	for (int i = 0; i < 10; i++)
	{
		u.push_back(i);
		cout << u[i];
	}
	cout <<endl<< "COUNT" << count(u.begin(), u.end(), 0) << endl;
	cout << "COUNTIF" << count_if(u.begin(), u.end(), czyParzysta) << endl;
	
	unique_ptr<int> uptr(new int);
	unique_ptr<int> uptr2;


	std::cout << "uptr: " << (uptr != nullptr) << " uptr2: " << (uptr2 != nullptr) << '\n' << endl;
	uptr2 = std::move(uptr);
	std::cout << "uptr: " << (uptr != nullptr) << " uptr2: " << (uptr2 != nullptr) << '\n' << endl;

	cout << *size(4) << endl;


	int a;
	cin >> a;	
	return 0;
}


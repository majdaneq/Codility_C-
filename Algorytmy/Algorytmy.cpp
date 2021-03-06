#include "stdafx.h"
#include "algorithm"
#include "iostream"
#include "string"
#include <math.h>
#include "BinaryGapC.h"
#include "CyclicRotation.h"
#include "Osoba.h"
#include "Czynnosc.h"
#include <memory>

#include "vector"
#include <functional>
#include <numeric>

#include <list>

using namespace std;

class Figura
{
public:
	Figura();
	~Figura();	
	double virtual pole();
	void foo();
private:
	double a = 0, b = 0;
};

Figura::Figura()
{
}

Figura::~Figura()
{
}
double Figura::pole()
{
	cout << "figura" << endl;
	double result = 0;
	return result;
}
void Figura::foo()
{
	cout << "figura foo" << endl;
}

class Kwadrat: public Figura
{
public:
	Kwadrat();
	~Kwadrat();
	double virtual pole();
	void setNum(int _a);
private:
	int a=0, b = 0;
};

Kwadrat::Kwadrat(){
}

Kwadrat::~Kwadrat()
{
}
void Kwadrat::setNum(int _a)
{
	a = _a;	
}
double Kwadrat::pole(){
	cout << "kwadrat" << endl;
	return a*a;
}
class Trojkat:Figura
{
public:
	int a = 0;
	Trojkat();
	~Trojkat();
	double pole();
	const void foo2();
	void setNum(int _a, int _h);
	bool operator==(Trojkat const &obj) { return obj.a == obj.h;	
	}
private:
	int h = 0;
};

Trojkat::Trojkat(){}
Trojkat::~Trojkat()
{
}
void Trojkat::setNum(int _a, int _h)
{
	a = _a;
	h = _h;
}
double Trojkat::pole()
{
	cout << "trojkat" << endl;
	
	return a*h / 2;
}
const void Trojkat::foo2()
{
	a++;
	h++;
}


void showNum(int num)
{
	cout << num << endl;
}

bool Ten(int num)
{
	if (num < 1) return true;
	else return true;
}

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

string sol(string &S)
{
	int founda = 0, foundc = 0, foundb = 0;
	const string str = "  ";
	founda = S.find("AA");
	foundb = S.find("BB");
	foundc = S.find("CC");

	while(true)
	{
		if (founda < 0 && foundb < 0 && foundc < 0) return S;
		if (founda == 0)S.replace(founda, 2, str);
		if (foundb == 0)S.replace(foundb, 2, str);
		if (foundc == 0)S.replace(foundc, 2, str);

		S.erase(remove(S.begin(), S.end(), ' '), S.end());

		founda = S.find("AA");
		foundb = S.find("BB");
		foundc = S.find("CC");
	}
}
//------------------CONST
const int con= 2;
int h = 0;


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

	//BinaryGapC obj;								//1
	//cout << obj.solution(1024);
	//CyclicRotation objx;						//2
	//vector<int> vec = { 0, 0, 1, 2, 4 };
	//objx.solution(vec, 10);
	//int c = 2;
	//int b = 3;
	//cout << "DLA INT" << min(c, b) << endl;
	//string A = "AAA";
	//string B = "BBB";
	//cout << "DLA STRING" << min(A, B) << endl;



	//vector<int> u;
	//for (int i = 0; i < 10; i++)
	//{
	//	u.push_back(i);
	//	cout << u[i];
	//}
	//cout <<endl<< "COUNT" << count(u.begin(), u.end(), 0) << endl;
	//cout << "COUNTIF" << count_if(u.begin(), u.end(), czyParzysta) << endl;
	//
	//unique_ptr<int> uptr(new int);
	//unique_ptr<int> uptr2;

	//std::cout << "uptr: " << (uptr != nullptr) << " uptr2: " << (uptr2 != nullptr) << '\n' << endl;
	//uptr2 = std::move(uptr);
	//std::cout << "uptr: " << (uptr != nullptr) << " uptr2: " << (uptr2 != nullptr) << '\n' << endl;
	//cout << *size(4) << endl;

#pragma region Osoba, fibonaci, silnia
	//Osoba osoba;
	//Osoba osoba1("adam", "plata", 21);
	//Osoba osoba3;
	//Osoba osoba4(osoba1);			//konstruktor kopiujacy
	//osoba3 = osoba1;
	//cout << osoba1.GetAge() << endl;
	//cout << osoba1.GetName() << endl;
	//cout << osoba3.GetAge() << endl;
	//cout << osoba3.GetName() << endl;
	//osoba1.SetName("szymon"); osoba1.SetAge(22);
	//cout << osoba1.GetAge() << endl;
	//cout << osoba1.GetName() << endl;
	//cout << osoba3.GetAge() << endl;
	//cout << osoba3.GetName() << endl;
	//osoba1.zjedz();
	//osoba1.GetTime();
	//int fiboNum = 15;
	//vector<int> a = osoba1.Fibonacii(fiboNum);

	//for (int i = 0; i < fiboNum; i++)
	//	cout << a[i] << endl;
	//int silnia = 0;
	//cout << "------------SILNIA------------" << endl;
	//deque<int>c = osoba1.Silnia(5);
	//for (int i = 0; i < c.size(); i++)
	//	cout << c[i] << endl;

	//cout << "--------SILNIA REKURENCYJNIE------------" << endl;
	//cout << osoba1.SilniaRek(5);

#pragma endregion

	Kwadrat *fig1 = new Kwadrat();
	fig1->setNum(2);
	cout << fig1->pole() << endl;

	Kwadrat fig;
	fig.pole();	

	Figura fi2;
	cout << fi2.pole();
	

	Trojkat troj;
	troj.setNum(4, 10);
	cout << troj.pole() << endl;
	

	//-----------------PRZECIAZANIE OPERATORA----------------
	Trojkat troj2;
	troj2.setNum(4, 10);
	cout << "przeciazony operator  " << (troj == troj2) << endl;
	troj2.setNum(4, 4);
	cout << "przeciazony operator  " << (troj == troj2) << endl;
	//---------------VIRTUAL FUNC-------------------------
	Figura *f2;	
	Kwadrat kw;
	f2 = &fi2;
	f2->pole();
	f2 = &kw;
	f2->pole();
	//------------VECTOR OBIEKTOW-------------------
	vector<Trojkat> trojkaty;
	Trojkat t3;
	Trojkat t4;
	Trojkat t5;
	Trojkat t6;

	t3.setNum(1, 2);
	t4.setNum(2, 2);
	t5.setNum(3, 2);
	t6.setNum(4, 2);
	trojkaty.push_back(t3);
	trojkaty.push_back(t4);
	trojkaty.push_back(t5);
	trojkaty.push_back(t6);
	cout << trojkaty[1].a;
	//----------------STL algorytmy----------------------
	vector<int> *numbers = new vector<int>();
	numbers->push_back(1);
	numbers->push_back(4);
	numbers->push_back(9);	
	//FOREACH
	for_each(numbers->begin(), numbers->end(), showNum); 
	for (int i=0;i<4;i++) numbers->push_back(1);
	//COUNT,COUNTIF
	cout << "liczba powtorzonych 1: " << count(numbers->begin(), numbers->end(), 1) << endl;
	cout << "Liczby parzyste w vectorze" << count_if(numbers->begin(), numbers->end(), czyParzysta) << endl;

	//equal	bool equal( iterator początek, iterator koniec, iterator początek_drugiego ) porownuje pierwsze elementy 1 i drugiego 
	//		bool equal(iterator początek, iterator koniec, iterator początek_drugiego, funkcja_porownująca)
	//SORT
	sort(numbers->begin(),numbers->end());
	vector<int> kopia(numbers->size());
	//COPY
	copy(numbers->begin(), numbers->end(), kopia.begin());
	cout << "Posortowany vector" << endl;
	for (int i = 1; i < kopia.size(); i++) { cout << kopia[i] << endl; }
	vector<int>::iterator maxElem;
	vector<int>::iterator minElem;
	maxElem = max_element(kopia.begin(), kopia.end());	
	cout << "Max element na pozycji: " << distance(kopia.begin(), maxElem) << endl;
	minElem = min_element(kopia.begin(), kopia.end());
	cout << "Max element na pozycji: " << distance(kopia.begin(), minElem) << endl;

	int sum = accumulate(kopia.begin(), kopia.end(), 0);
	cout << "Suma elementow w wektorze: " << sum << endl;
	
	int x=inner_product(kopia.begin(), kopia.end(), numbers->begin(), 0);
		cout << "Iloczyn wszystkich elementow w 2 wektorach: " << x << endl;

	replace(kopia.begin(), kopia.end(), 1, 10);
	cout << "Zamienianie wartości w  wektorze: " << endl;
	for (int i = 1; i < kopia.size(); i++) { cout << kopia[i] << endl; }

	cout << "Usuwanie wartości w  wektorze: " << endl;
	kopia.erase(kopia.begin(), kopia.begin()+2);
	for (int i = 1; i < kopia.size(); i++) { cout << kopia[i] << endl; }
	//------------------------------LISTA-------------------
	list<int> lista;

	for (int i=0;i<10;i++) lista.push_front(i);
	for (int i = 0; i<10; i++) lista.push_back(i);
	cout << "----------LISTA---------------" << endl;
	for (list<int>::const_iterator i = lista.begin(); i != lista.end(); i++) cout << *i<< endl;
	
	//-------------------------WYRAŻENIA LAMBDA-----------------

	auto z = [](int x)->int {cout << "wyrażenie lambda: " << x + 1 << endl;  return x + 1; };
	auto d = [](int a, int b)->void { cout << "Dodawanie lambda: " << a + b << endl; };

	z(2);
	d(3, 4);
	d(333, 421);

	//--------------------SMART POINTERS------------
	cout << "-------------------SMART POINTERS----------------" << endl;
	unique_ptr<Kwadrat> kwa(new Kwadrat());	

	unique_ptr<int> a(new int(10));
	unique_ptr<int> c = unique_ptr<int>(a.get());
	cout << *c << endl;
	*a = 20;
	cout << *a << "    " << *c << endl;


	shared_ptr<Kwadrat> shp = make_shared<Kwadrat>();
	shared_ptr<Kwadrat> shp2(shp);							//2 wskazniki wskazujace na ten sam obiekt

	weak_ptr<Kwadrat> wp(shp);
	wp.lock();


	string b;
	cin >>b;
	return 0;
}


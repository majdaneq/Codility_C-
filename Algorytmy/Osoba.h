#pragma once
#include<iostream>
#include<string>
#include "Czynnosc.h"
using namespace std;
class Osoba:public Czynnosc
{

public:
	Osoba();
	~Osoba();
	Osoba(const Osoba &osoba);
	Osoba(string imie, string nazwisko, int wiek);
	string GetName();
	int GetAge();
	void SetName(string _name);
	void SetAge(int _wiek);
private:
	string imie;
	string nazwisko;
	int wiek;
};


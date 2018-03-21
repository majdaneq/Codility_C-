#include "stdafx.h"
#include "Osoba.h"
#include"Czynnosc.h"


Osoba::Osoba()
{
	cout << "konstruktor domyslny" << endl;
}

Osoba::~Osoba()
{
}

Osoba::Osoba(const Osoba &osoba)
{
	imie = osoba.imie;
	nazwisko = osoba.nazwisko;
	wiek = osoba.wiek;
	a = 2;
	cout << "konstruktor kopiujacy" << endl;
}

Osoba::Osoba(string _imie, string _nazwisko, int _wiek)
{
	imie = _imie;
	nazwisko = _nazwisko;
	wiek = _wiek;
	cout << "konstruktor parametryczny" << endl;
}

int Osoba::GetAge()
{	
	return wiek;
}

string Osoba::GetName()
{
	return imie;
}

void Osoba::SetName(string _imie)
{
	imie = _imie;
}

void Osoba::SetAge(int _wiek)
{
	wiek = _wiek;
}


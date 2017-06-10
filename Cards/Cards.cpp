// Cards.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

#include <iostream>
#include "karty.h"

using std::cout;
using std::endl;
using namespace oko;

int main()
{
	balicek blackjack;
	hrac hrac1("Bankar"), hrac2("Jozef");

	cout << blackjack.VypisBalicek();
	while ((hrac1.VratSkore() < 15) && (!blackjack.Prazdny()))
		hrac1.PrijataKarta(blackjack.DalsiaKarta());
	while ((hrac2.VratSkore() < 14) && (!blackjack.Prazdny()))
		hrac2.PrijataKarta(blackjack.DalsiaKarta());
	cout << hrac1.VypisHraca();
	cout << hrac2.VypisHraca();
	cout << "Vyhral hrac:" << endl;
	cout << (hrac1 < hrac2).VypisHraca();
	return 0;
}
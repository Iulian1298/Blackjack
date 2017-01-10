#include<iostream>
#include<ctime>
#include<stdlib.h>
#include<Windows.h>
#include<string.h>
#include<conio.h>


using namespace std;

#define max 21


void titlu()
{
	cout << "\t\t    ||||||||||||||||||||||||||||||||||||||||| \n";
	cout << "\t\t    |||||| ***     Black Jack      *** |||||| \n";
	cout << "\t\t    ||||||||||||||||||||||||||||||||||||||||| \n\n\n";
}



void Refill(int &cont)
{
	while (cont < 50 || cont > 1000)
	{
		cout << "Introduceti suma de bani cu care intrati in joc (minim 50 si maxim 1000) : ";
		cin >> cont;

		if (cont >= 50 && cont <= 1000) break;

		system("cls");
		titlu();
		cout << "!!!! Ati ales gresit valoarea (numai intre 50 si 1000) !!!! \n";
	}
}


int PlayerBet(int &cont)
{
	int bet = 0;;

	while (cont == 0)
	{
		system("cls");
		titlu();
		cout << "Ati ramas fara BANI :)) !!! \n";
		cout << "Apasati ENTER pt a umple contul !!! \n";
		cin.get();
		//cin.get();
		Refill(cont);
	}

	if (cont < 250)
	{
		while (bet < 1 || bet > cont)
		{
			cout << "Introduceti pariul (intre 1 si " << cont << ") : ";
			cin >> bet;

			if (bet >= 1 && bet <= cont) break;

			system("cls");
			titlu();

			cout << "!!! Ati ales gresit valoarea !!! \n";
		}
	}
	else if (cont >= 250)
	{
		while (bet < 1 || bet > 250)
		{
			cout << "Introduceti pariul (intre 1 si 250) : ";
			cin >> bet;

			if (bet >= 1 && bet <= 250) break;

			system("cls");
			titlu();

			cout << "!!! Ati ales gresit valoarea !!! \n";
		}
	}
	cont -= bet;

	return bet;
}




void PlayerCont(int &cont)
{
	system("cls");
	titlu();

	while (cont < 50 || cont > 1000)
	{
		cout << "Introduceti suma de bani cu care intrati in joc (minim 50 si maxim 1000) : ";
		cin >> cont;

		if (cont >= 50 && cont <= 1000) break;

		system("cls");
		titlu();
		cout << "!!!! Ati ales gresit valoarea (numai intre 50 si 1000) !!!! \n";
	}
}



int ModJoc()
{
	int mod = 0;
	system("cls");
	titlu();
	while (mod < 1 || mod > 2)
	{
		cout << "Alegeti modul in care doriti sa jucati !!! \n";
		cout << "1.Dealer vs. Player \n";
		cout << "2.Dealer vs. Player vs. Cpu Player \n";
		cin >> mod;

		if (mod == 1 || mod == 2)
		{
			if (mod == 1)
			{
				cout << "Ati ales sa jucati : Dealer vs. Player  !\n\n";
			}
			if (mod == 2)
			{
				cout << "Ati ales sa jucati : Dealer vs. Player vs. Cpu Player  !\n\n";
			}
		}
		else
		{
			system("cls");
			titlu();
			cout << "Ati introdus o valoare eronata ! Va rugam sa alegeti din nou ! \n";
		}
	}

	return mod;
}

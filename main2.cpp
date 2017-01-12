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
    HANDLE nume=GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(nume,9);
    cout << "\t\t                                                                                                             \n";
    cout << "\t\t                                '@                      @:                                               @,                  \n";
    cout << "\t\t                                #@                      @'                                               @;                  \n";
    cout << "\t\t                     @@@@@@     #@                      @'                       @@                      @;                  \n";
    cout << "\t\t                     @@@@@@@    #@                      @'                       @@                      @;                  \n";
    cout << "\t\t                     @@   @@;   #@                      @'                       @@                      @;                  \n";
    cout << "\t\t                     @@    @@   #@                      @'                       @@                      @;                  \n";
    cout << "\t\t                     @@    @@   #@                      @'                       @@                      @;                  \n";
    cout << "\t\t                     @@    @@   #@     ``         ``    @'                       @@     ``         ``    @;                  \n";
    cout << "\t\t                     @@    @@   #@    @@@@'     ,@@@#   @'   @@                  @@    @@@@'     :@@@#   @;   @@             \n";
    cout << "\t\t                     @@    @@   #@   @@@@@@`    @@@@@:  @'  ,@#                  @@   @@@@@@     @@@@@,  @;  :@#             \n";
    cout << "\t\t                     @@    @+   #@   @@  '@+   #@' `@'  @'  @@                   @@   @#  +@+   @@; .@;  @;  @@              \n";
    cout << "\t\t                     @@   @@    #@   ;    @@   @@    ;  @' :@'                   @@   :    @@   @@    :  @; ;@;              \n";
    cout << "\t\t                    @@@@@@:    #@        @@   @'       @' @@                    @@        @@  `@;       @; @@                \n";
    cout << "\t\t                     @@@@@@@.   #@        @@  .@`       @':@,                    @@        @@  ,@`       @;;@.               \n";
    cout << "\t\t                     @@...@@@   #@        @@  ;@        @'@@                     @@        @@  '@        @;@@                \n";
    cout << "\t\t                     @@    @@.  #@     @@@@@  +@        @@@'                     @@     @@@@@  +@        @@@;                \n";
    cout << "\t\t                     @@    `@#  #@   .@@@@@@  +@        @'@@                     @@   ,@@@@@@  #@        @;@@                \n";
    cout << "\t\t                     @@     @@  #@   @@;  @@  +@        @'#@.                    @@   @@;  @@  +@        @;#@`               \n";
    cout << "\t\t                     @@     @@  #@  `@;   @@  '@        @' @@                    @@  `@:   @@  +@        @;`@@               \n";
    cout << "\t\t                     @@     @@  #@  :@    @@  :@`       @' @@                    @@  ;@    @@  ;@        @; @@               \n";
    cout << "\t\t                     @@     @#  #@  ;@    @@  `@;       @' `@#                   @@  '@    @@  .@,       @; .@#              \n";
    cout << "\t\t                     @@    +@,  #@  ,@`   @@   @@    '  @'  @@                   @#  ;@   `@@   @@    ;  @;  @@              \n";
    cout << "\t\t                     @@   '@@   #@  `@@  @@@   @@,  @+  @'  :@+               @ '@+  .@#  @@@   @@.  @'  @;  ;@'             \n";
    cout << "\t\t                     @@@@@@@'   #@   @@@@@:@   ,@@@@@;  @'   @@               @@@@`   @@@@@;@   :@@@@@,  @;   @@             \n";
    cout << "\t\t                     @@@@@@'    #@   ,@@@;:@    #@@@#   @'   +@.              @@@@    :@@@:;@    #@@@#   @;   #@`            \n\n\n\n\n\n\n\n";

    SetConsoleTextAttribute(nume,7);




    }



    void Refill(int &cont)
    {
        while (cont < 50 || cont > 1000)
        {HANDLE nume=GetStdHandle(STD_OUTPUT_HANDLE);
            cout<<"                                                      ";
            cout << "Introduceti suma de bani cu care intrati in joc (minim 50 si maxim 1000) : ";
            SetConsoleTextAttribute(nume,12);
            cin >> cont;
            SetConsoleTextAttribute(nume,7);

            if (cont >= 50 && cont <= 1000) break;

            system("cls");
            titlu();
            cout<<"                                                      ";
            cout << "!!!! Ati ales gresit valoarea (numai intre 50 si 1000) !!!! \n";
        }
    }


    int PlayerBet(int &cont)
    {HANDLE nume=GetStdHandle(STD_OUTPUT_HANDLE);
        int bet = 0;;

        while (cont == 0)
        {
            system("cls");
            titlu();
            cout<<"                                                      ";
            cout << "Ati ramas fara BANI :)) !!! \n";
            cout<<"                                                      ";
            cout << "Apasati ENTER pt a umple contul !!! \n";
            cin.get();
            //cin.get();
            Refill(cont);
        }

        if (cont < 250)
        {
            while (bet < 1 || bet > cont)
            {
                cout<<"                                                      ";
                cout << "Introduceti pariul (intre 1 si " << cont << ") : ";
                SetConsoleTextAttribute(nume,12);
                cin >> bet;
                SetConsoleTextAttribute(nume,7);

                if (bet >= 1 && bet <= cont) break;

                system("cls");
                titlu();

                cout<<"                                                      ";
                cout << "!!! Ati ales gresit valoarea !!! \n";
            }
        }
        else if (cont >= 250)
        {
            while (bet < 1 || bet > 250)
            {
                cout<<"                                                      ";
                cout << "Introduceti pariul (intre 1 si 250) : ";
                SetConsoleTextAttribute(nume,12);
                cin >> bet;
                SetConsoleTextAttribute(nume,7);
                if (bet >= 1 && bet <= 250) break;

                system("cls");
                titlu();

                cout<<"                                                      ";
                cout << "!!! Ati ales gresit valoarea !!! \n";
            }
        }
        cont -= bet;

        return bet;
    }




    void PlayerCont(int &cont)
    {   HANDLE nume=GetStdHandle(STD_OUTPUT_HANDLE);
        system("cls");
        titlu();

        while (cont < 50 || cont > 1000)
        {
            cout<<"                                                      ";
            cout << "Introduceti suma de bani cu care intrati in joc (minim 50 si maxim 1000) : ";
            SetConsoleTextAttribute(nume,12);
            cin >> cont;

            if (cont >= 50 && cont <= 1000) break;

            system("cls");
            titlu();
            cout<<"                                                      ";
            cout << "!!!! Ati ales gresit valoarea (numai intre 50 si 1000) !!!! \n";
        }
    }



    int ModJoc()
    {
        int mod = 0;
        HANDLE nume=GetStdHandle(STD_OUTPUT_HANDLE);
        system("cls");
        titlu();
        while (mod < 1 || mod > 2)
        {
            cout<<"                                                      ";
            cout << "Alegeti modul in care doriti sa jucati !!! \n";
            cout<<"                                                      ";
            cout << "1.Dealer vs. Player \n";
            cout<<"                                                      ";
            cout << "2.Dealer vs. Player vs. Cpu Player \n";
            cout<<"                                                      ";
            cin >> mod;

            if (mod == 1 || mod == 2)
            {
                if (mod == 1)
                {
                    SetConsoleTextAttribute(nume,12);
                    cout<<"                                                      ";
                    cout << "Ati ales sa jucati : Dealer vs. Player  !\n\n";
                    SetConsoleTextAttribute(nume,7);
                }
                if (mod == 2)
                {
                    SetConsoleTextAttribute(nume,12);
                    cout<<"                                                      ";
                    cout << "Ati ales sa jucati : Dealer vs. Player vs. Cpu Player  !\n\n";
                    SetConsoleTextAttribute(nume,7);
                }
            }
            else
            {
                system("cls");
                titlu();
                cout<<"                                                      ";
                cout << "Ati introdus o valoare eronata ! Va rugam sa alegeti din nou ! \n";
            }
        }

        return mod;
    }



    int gen_bet(int BaniCpuPlayer)
    {
        if (BaniCpuPlayer > 250)
        {
            srand(time(0));
            return rand() % 250 + 1;
        }
        else
        {
            srand(time(0));
            return rand() % BaniCpuPlayer + 1;
        }
    }



    int gen_bani()
    {
        srand(time(0));
        return rand() % 1000 + 50;
    }


    int gen_random()
    {
        int x, y;
        srand(time(0));
        x = rand() % 4 + 1;
        srand(time(0));
        y = rand() % 13 + 1;
        return y * 10 + x;

    }



    void gen_dealer(int a[max], int b[max])
{
	int z, i;

	AgainHere:
	srand(time(0));
	z = gen_random();
	for (i = 0; i < max; i++)
	{
		if (a[i] == z && a[i] != 0) goto AgainHere;
		if (a[i] == 0)
		{
			a[i] = z;
			break;
		}
	}

	for (i = 0; i < max; i++)
	if (b[i] == 0)
	{
		b[i] = z;
		break;
	}
}


int VerifGen(int uz[max])
{
	int i, nr;

	Again:
	nr = gen_random();

	for (i = 0; i < max; i++)
	{
		if (uz[i] == nr) goto Again;

		if (uz[i] == 0)
		{
			uz[i] = nr;
			break;
		}
	}
	return nr;
}



void FirstGen(int aleg,int dealer[max],int player[max],int cpu_player[max],int uz[max],int &fgen)
{
	int nrgen;

	Regen:

	nrgen = VerifGen(uz);

	if (aleg == 1)
	{

		if (fgen >= 0 && fgen < 4)
		{
			if (fgen == 0) dealer[0] = nrgen;
			if (fgen == 1) player[0] = nrgen;
			if (fgen == 2) dealer[1] = nrgen;
			if (fgen == 3) player[1] = nrgen;
			fgen++;
			goto Regen;
		}
	}

	if (aleg == 2)
	{

		if (fgen >= 0 && fgen < 6)
		{
			if (fgen == 0) dealer[0] = nrgen;
			if (fgen == 1) player[0] = nrgen;
			if (fgen == 2) dealer[1] = nrgen;
			if (fgen == 3) player[1] = nrgen;
			if (fgen == 4) cpu_player[0] = nrgen;
			if (fgen == 5) cpu_player[1] = nrgen;
			fgen++;
			goto Regen;
		}
	}
}


int GenCpuPlayer(int uz[max],int cpu_play[max])
{
	int val = 0, scor = 0;

	while (scor < 17)
	{
		scor = 0;
		gen_dealer(uz, cpu_play);
		for (int i = 0; i < max; i++)
		{
			if (cpu_play[i] != 0)
			{
				val = cpu_play[i] / 10;
				if (val == 1) scor += 11;
				else if (val == 11) scor += 10;
				else if (val == 12) scor += 10;
				else if (val == 13) scor += 10;
				else scor += val;
			}
		}
	}
	return scor;

}

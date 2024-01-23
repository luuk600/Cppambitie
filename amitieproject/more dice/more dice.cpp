#include <iostream> // is used to be able to print stuff to the screen
#include <cstdlib>  // is for extra math like being able the time and the rand function

using namespace std; // will make it easier to print to the screen removes the std::



void dice()
{
	char player1;
	char player2;
	int number12 = 0;
	int number61 = 0;
	int number62 = 0;
	int numberp2 = 0;
	int yesp1;
	int yesp2;
	int playagain;


	int x = time(0); // zoekt tijd op in seconde
	srand(x); // is voor de seed die de rand gebruikt in volgende lijn dit zorgt ervoor dat het getal verandert

	cout << "Dit is een roll the dice game nummer 2 wat je moet doen is player 1 rolt een 12 zijdige dice en player 2 rolt 2 zes zijdige dice die bij elkaar op geteld worden de hoogst gooiende wint" << endl;
	cout << "Speler 1 wat is jouw voorletter vul hem hier in :";
	cin >> player1;
	cout << "Speler 2 wat is jouw voorletter vul hem hier in :";
	cin >> player2;
	cout << player1;
	cout << " & " << player2 << endl;
	cout << player1 << " Typ 1 om de dobbelsteen te rollen :";
	cin >> yesp1;
	if (yesp1 == 1)
	{
		number12 = 1 + rand() % 12;
		cout << number12 << endl;
	}
	while (yesp1 != 1)
	{
		cout << "Dat mag niet probeer het opnieuw" << endl;
		cin >> yesp1;
	}
	cout << player2 << " Ttyp 1 om de dobbelsteen te rollen :";
	cin >> yesp2;
	if (yesp2 == 1)
	{
		number61 = 1 + rand() % 6;
		cout << number61 << endl;
		number62 = 1 + rand() % 6;
		cout << number62 << endl;
		numberp2 = number61 + number62;
	}
	while (yesp2 != 1)
	{
		cout << "Dat mag niet probeer het opnieuw" << endl;
		cin >> yesp1;
	}
	cout << player1 << " Dit is jouw nummer" << number12 << endl;
	cout << player2 << " Dit is jouw nummer" << numberp2 << endl;
	if (number12 > numberp2)
	{
		cout << player1 << " you have won" << endl;
		cout << "Press 1 if you want to go again press 2 if you want to quit" << endl;
		cin >> playagain;
		if (playagain == 1)
		{
			dice();
		}
		else if (playagain == 2)
		{
			return;
		}
		while (playagain != 1 && playagain != 2)
		{
			cout << "Press 1 press 1 if you want to go again press 2 if you want to quit" << endl;
			cin >> playagain;
		}
	}
	if (number12 < numberp2)
	{
		cout << player2 << " You have won" << endl;
		cout << "Press 1 press 1 if you want to go again press 2 if you want to quit" << endl;
		cin >> playagain;
		if (playagain == 1)
		{
			dice();
		}
		else if (playagain == 2)
		{
			return;
		}
		while (playagain != 1 && playagain != 2)
		{
			cout << "Press 1 press 1 if you want to go again press 2 if you want to quit" << endl;
			cin >> playagain;
		}
	}

}
int main()
{
	dice();
}
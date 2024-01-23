#include <iostream>
#include <cstdlib>

using namespace std;
void myFunction() {
	int number = 0;
	char speler1;
	char speler2;
	int nummer1 = 0;
	int nummer2 = 0;
	char playagain;
	bool play = true;


	int x = time(0); // zoekt tijd op in seconde
	srand(x); // is voor de seed die de rand gebruikt in volgende lijn dit zorgt ervoor dat het getal verandert
	number = 1 + rand() % 6; // 1+ rand dus random number die gebruik maakt van de seed bij srand % = delen door 6

	cout << "Dit is een roll the dice game voor 2 spelers" << endl;
	cout << "speler 1 wat is jouw voorletter vul hem hier in :";
	cin >> speler1;
	cout << "speler 2 wat is jouw voorletter vul hem hier in :";
	cin >> speler2;
	cout << speler1;
	cout << " & " << speler2 << endl;
		cout << speler1 << " typ een getal tussen van 1 t/m 6" << endl;
		cin >> nummer1;
		if (nummer1 == number)
		{
			cout << "goed gedaan je hebt het getal geraden typ y om opnieuw te spelen of s om te stoppen : ";
			cin >> playagain;
			while (playagain != 'y' && playagain != 's')
			{
				cin >> playagain;
			}
			if (playagain == 'y')
			{

				myFunction();
			}
			else if (playagain == 's')
			{
				return;
			}
		}
		else
		{
			nummer1 = 0;
		}
		cout << speler2 << " typ een getal tussen van 1 t/m 6" << endl;
		cin >> nummer2;
		if (nummer1 == number)
		{
			cout << "goed gedaan je hebt het getal geraden typ y om opnieuw te spelen of s om te stoppen : ";
			cin >> playagain;
			while (playagain != 'y' && playagain != 's')
			{
				cin >> playagain;
			}
			if (playagain == 'y')
			{
				myFunction();
			}
			else if (playagain == 's')
			{
				return;
			}
		}
		else
		{
			nummer2 = 0;
		}
	
}
int main()
{

	myFunction();
	//cout << 1 + rand() % 6 << endl;
	// rand doesn't really generate random numbers because of the seed that is the same but it doesn't chance because it generates a pseudorandom number
}
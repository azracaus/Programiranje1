#include <iostream>
#include <iomanip> 

using namespace std;

/*Napisi program koji upotrebom for petlji ispisuje 
geometrijski lik kvadrat/pravougaonik uz pomo? nekog znaka. 
Korisnik bira znak, sirinu i visinu, 
ako se odluci za kvadrat sirina ce biti jednaka visini)*/


int main() {

	int s, v; 
	char znak, izbor; 

	cout << "Unesite znak ";
	cin >> znak;

	cout << "Unesite p za pravougaonik ili k za kvadrat ";
	cin >> izbor;

	if (izbor == 'k')
	{
		cout << "Izaberite visinu: ";
		cin >> v;

		for (int i = 1; i <= v; i++)
		{
			for (int j = 1; j <= v; j++)
				cout << setw(2) << znak; 

			cout << endl;
		}

	}

	else if (izbor == 'p')
	{
		cout << "Izaberite visinu ";
		cin >> v;
		cout << "Izaberite sirinu ";
		cin >> s;

		if (v == s)
			cout << "Velicine trebaju biti razlicite";

		else
		{
			for (int i = 1; i <= v; i++)
			{
				for (int j = 1; j <= s; j++)
					cout << znak;

				cout << endl;
			}

		}
	}

	else
		cout << "Izbor ne postoji."; 


	return 0; 
}
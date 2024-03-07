#include <iostream>

using namespace std;


int main() {

	int a, sifra, provjera, zamjena = 0;

	cout << "Unesite jedan prirodan broj koji zelite sifrirati" << endl;
	cin >> a;

	cout << "Unesite broj kojim zelite sifrirati prethodni" << endl;
	cin >> sifra;

	int pozicija = 1; 

	while (a > 0) 
	{
		provjera = a % 10;
		if (provjera % 3==0)
			zamjena += pozicija * sifra;

		else
			zamjena += pozicija * provjera;


		a/=10;
		pozicija *= 10;
	}

	cout << "Vas sifriran broj je: " << zamjena;

	return 0; 
}
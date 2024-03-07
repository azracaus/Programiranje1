#include <iostream>

using namespace std;

/*Napisite program u kojem cete omoguciti unos dva 
prirodna broja te izra?unati i ispisati njihov najveci 
zajednicki djeljitelj (npr. uneseni su 12 i 16 ispis 
treba biti 4).*/


int main() {

	int n, m, djeljitelj; 

	cout << "Unesite prvi broj ";
	cin >> n;

	cout << "Unesite drugi broj ";
	cin >> m;

	if (m && n <= 0)
		cout << "Brojevi moraju biti pozitivni.";

	else
	{
		int manji = (n < m) ? n : m;
		for (int i = 1; i <= manji; i++)
		{
			if (n % i == 0 && m % i == 0)
				djeljitelj = i;
		}
		if (djeljitelj == 1)
			cout << "Brojevi nemaju drugog NZD osim 1.";
		else
			cout << "NZD je " << djeljitelj;
	}

	return 0; 
}
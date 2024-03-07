#include <iostream>

using namespace std;


int main() {

	int n, pozicija = 1, binarni = 0;

	cout << "Unesite broj ";
	cin >> n;

	if (n < 0)
		cout << "Broj mora biti pozitivan";

	else
	{
		while (n > 0)
		{
			binarni += pozicija * (n % 2); 
			pozicija *= 10; 
			n /= 2; 
		}
		cout << "Binarni ekvivalent broja je "<< binarni; 
	}



	return 0; 
}
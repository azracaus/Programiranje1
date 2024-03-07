#include <iostream>
#include <iomanip> 
#include <cmath>

using namespace std;

int main() {

	int n, cifra=0;

	cout << "Unesite broj ";
	cin >> n;

	while (n > 0)
	{	
		cifra++;
		n = n / 10;
	}

	cout << "Broj cifara " << cifra;

	system("pause>0");
	return 0; 
}
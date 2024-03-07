#include <iostream>
#include <iomanip> 

using namespace std;

/*
	Unesite broj n. Ispisati sve brojeve koji su djeljivi sa 4 od 1 do n koriste?i for petlju.
	Input: n [int]
	Output: 4 8 12 ... (sve brojevi djeljivi sa 4 do n)
*/

int main() {

	int n;
	cout << "Unesite broj "; 
	cin >> n;

	for (int i = 0; i <= n; i++)
	{
		if (i % 4 == 0 && i != 0)
			cout << i << " ";
	}


	system("pause>0");
	return 0; 
}
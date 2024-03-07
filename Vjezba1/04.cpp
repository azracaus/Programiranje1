#include <iostream>
#include <iomanip> 
#include <cmath>

using namespace std;

/*
	Unesite broj n. Ispisati sve stepene broja 2 do 2^n koriste?i do-while petlju.
	Input: n [int]
	Output: 2^0 2^1 2^2 ... 2^n
*/

int main() {

	int n, broj=0, rez;

	cout << "Unesite broj "; 
	cin >> n;

	do
	{
		rez = pow(2,broj);
		cout << "2^" << broj << "=" << rez << " ";
		++broj;

	} while (broj <= n);


	system("pause>0");
	return 0; 
}
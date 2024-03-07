#include <iostream>
#include <iomanip> 
#include <cmath>

using namespace std;

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

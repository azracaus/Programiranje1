#include <iostream>
#include <iomanip> 

using namespace std;

/*
	Ispisati prvih n brojeva Fibonaccijevog niza koriste?i for petlju.
	Input: n [int]
	Output: 0 1 1 2 3 5 ...
*/

int main() {

	int n, prvi = 0, drugi = 1, treci;

	cout << "Unesite broj: ";
	cin >> n;

	cout << prvi << " " << drugi;

	for (int i = 1; i <= n; i++)
	{
		treci = prvi + drugi;
		prvi = drugi;
		drugi = treci;

		cout << " " << treci; 
	}


	system("pause>0");
	return 0; 
}
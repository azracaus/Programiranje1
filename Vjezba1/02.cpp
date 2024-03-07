#include <iostream>
#include <iomanip> 

using namespace std;

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

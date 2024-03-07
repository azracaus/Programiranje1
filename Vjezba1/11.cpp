#include <iostream>

using namespace std;


int main() {

	int n, sum = 1, sum2 = 0;

	cout << "Unesite broj ";
	cin >> n;


	for (int i = 1; i <= n; i++)
	{
		sum *= i;
		cout << "faktorijel " << sum << endl;
		sum2 += sum;
	}
	cout << "suma faktorijela je " << sum2;

	return 0; 
}
#include <iostream>

using namespace std;

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

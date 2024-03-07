#include <iostream>
#include <iomanip> 

using namespace std;

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

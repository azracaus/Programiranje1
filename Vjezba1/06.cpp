#include <iostream>
#include <iomanip> 
#include <cmath>

using namespace std;

int main() {

	int n;

	cout << "Od 1 do 100 brojevi djeljivi sa 3 i 5 su: ";

	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			cout << i << " "; 
	}

	system("pause>0");
	return 0; 
}

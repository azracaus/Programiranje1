#include <iostream>
#include <cmath>
#include <cstdint>

using namespace std;

int sumOfPrimeDigits(int x);
int isPrime(int x);

int main()
{   
    int x;

    do
    { 
    cout << "Unesite broj: ";
    cin >> x;
    } while (x < 0 || x >= INT16_MAX);

    cout << "Suma prostih cifara datog broja je: " << sumOfPrimeDigits(x) << endl; 

    system("pause<0");
    return 0;
}

int isPrime(int x)
{
    if (x <= 1)
        return false; 

    else
    {
        for (int i = 2; i < x; i++)
        {
            if (x % i == 0)
                return false;
        }
        return true; 
    }
}

int sumOfPrimeDigits(int x)
{
    int cifra = x, sum = 0;  

    for (int i = 0; x > 0; i++)
    {
        cifra = x % 10;

        if (isPrime(cifra))
            sum += cifra;

        x /= 10; 
    }
    return sum;
}

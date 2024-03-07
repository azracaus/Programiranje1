#include <iostream>
#include <cmath>

using namespace std;

bool isValid(int x)
{
    for (int i = 1; i <= x; i++)
    {
        int cifra = x % 10;
        if (cifra > 1)
            return false;
        x /= 10;
    } return true; 
}

int binaryToDecimal(int x)
{
    int mjesto = 0, dec = 0; 

    while (x > 0)
    {
        dec += (x % 10) * pow(2, mjesto);
        x /= 10;
        mjesto++;
    }
    return dec;
}

int main()
{   
    int n, b, najveciB = 0;
    do
    {
        cout << "Unesite broj: ";
        cin >> n;
    } while (n < 1);  

    for (int i = 1; i <= n; i++)
    {
        do
        {
            cout << "Unesite binarni broj [" << i << "]: ";
            cin >> b;
        } while (isValid(b) == false);

        if (najveciB <= b)
            najveciB = b;
    }

    cout << "Najveca vrijednost je: " << najveciB << endl;
    cout << "Decimalna vrijednost " << najveciB << " je: " << binaryToDecimal(najveciB);

    system("pause<0");
    return 0;
}
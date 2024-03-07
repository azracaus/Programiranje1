#include <iostream>
using namespace std;

int sati(int&);  
int dani(int&);

int main()
{
    int minuta;

    do 
    { 
    cout << "Unesite minute: ";
    cin >> minuta; 
    } while (minuta < 0); 

    cout << "Dana: " << dani(minuta) << endl;
    cout << "Sati: " << sati(minuta) << endl;
    cout << "Minuta: " << minuta << endl;

    system("pause<0");
    return 0;
}

int sati(int &minuta)
{
    int sati = minuta / 60;
    minuta = minuta % 60;

    return sati;
}

int dani(int &minuta)
{
    int dani = minuta / 1440;
    minuta = minuta % 1440;

    return dani;
}

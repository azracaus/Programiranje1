#include <iostream>
using namespace std;

/*Napisati program u kojem cete unijeti jedan prirodan broj 
koji predstavlja vrijeme u min, a izracunati i ispisati koliko 
je to vremena u danima, satima i minutama. Upotrijebite funkcije
int sati (int &); int dani (int &);
Npr ako korisnik unese 1520min program treba ispisati 
da je to 1 dan 1 sat i 20 min.
*/

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
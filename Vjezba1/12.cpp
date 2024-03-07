#include <iostream>
#include <cmath>
using namespace std;

void unos(int &); 
void sifra(int&);
int zamjena(int, int);

int main()
{
    int broj = 0, znamenka = 0;

    unos(broj); 
    sifra(znamenka);  
    cout << "Novi broj: " << zamjena(broj, znamenka);

    system("pause<0");
    return 0;
}

void unos(int &broj)
{
    do
    {
        cout << "Unesite cetverocifreni broj: ";
        cin >> broj;
    } while (broj < 999 || broj > 10000);
}

void sifra(int& znamenka)
{
    do
    {
        cout << "Unesite znamenku: ";
        cin >> znamenka; 
    } while (znamenka < 1 || znamenka > 9);
}

int zamjena(int br, int sfr)
{
    int novi = 0, pomocna = 0;

    for (int i = 0; br > 0; i++)
    {
        pomocna = br % 10;

        if (pomocna % 2 == 0)
            pomocna = sfr;

        novi += pomocna * pow(10, i);
        br /= 10;
    }

    return novi;
}

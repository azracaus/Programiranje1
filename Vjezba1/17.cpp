#include <iostream>
#include <cmath>

using namespace std;

void deposit(float& balance, float amount)
{    
    cout << "Unesite vrijednost uplate: ";
    cin >> amount;
    balance += amount;
    cout << "Uplaceno je: " << amount << "KM"<<endl;
}

void withdraw(float& balance, float amount)
{
    cout << "Unesite vrijednost isplate: ";
    cin >> amount;
    balance -= amount;
    cout << "Isplaceno je: " << amount << "KM"<<endl;
}

void checkBalance(float balance)
{
    cout << "Stanje na racunu: " << balance<<endl;
}

int main()
{   
    int choice;
    float balance = 0.0f, amount=0;

    do
    {
        cout << "[1] Uplata, [2] Isplata, [3] Provjera stanja, [4] Izlaz iz programa" << endl;
        cout << "Vas izbor: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            deposit(balance, amount);
            break;

        case 2:
            withdraw(balance, amount);
            break;

        case 3:
            checkBalance(balance);
            break;

        case 4:
            break;

        default: cout << "Niste unijeli validan izbor.";
            break;
        }
    } while (choice != 4);

    system("pause<0");
    return 0;
}
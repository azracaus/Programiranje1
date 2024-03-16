#include <iostream>
#include <cmath>

using namespace std;

bool h(int x)
{
    for (int i = 1; i <= x; i++)
    {
        int cifra = x % 10;
        if (cifra % 2 == 0)
            return true;

        x /= 10;
    } return false;
}

int s(int x)
{
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main()
{   
    int n, x;

    do
    {
        cout << "Unesite prvi broj: ";
        cin >> n;
    } while (n <= 0);

    do
    {
        cout << "Unesite drugi broj: ";
        cin >> x;
    } while (x <= 0);

    cout << "Ispis brojeva: ";

    for (int i = 1; i <= n; i++)
    {
        if (s(i) >= x && h(i) == false)
            cout << i << " ";
    }

    system("pause<0");
    return 0;
}

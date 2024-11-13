#include <iostream>
using namespace std;
int main()
{
int liczba;
cout << "Podaj liczbe: ";
cin >> liczba;

// Operator OR (||): Sprawdzanie, czy liczba jest mniejsza niż 5 lub większa niż 50
if ((liczba < 5) || (liczba > 50)) {
    cout << "Liczba jest mniejsza niz 5 lub wieksza niz 50." << endl;
} else {
    cout << "Liczba jest pomiedzy 5 a 50." << endl;
}
}
#include <iostream>
using namespace std;

int main() {

    int liczby[10];
    int minliczby;

    for (int i = 0; i < 10; i++) {
        cout << "Podaj liczbê nr " << i + 1 << ": ";
        cin >> liczby[i];
    }

    minliczby = liczby[0];

    for (int i = 1; i < 10; i++) {
        if (liczby[i] < minliczby) {
            minliczby = liczby[i];
        }
    }

    cout << "Najmniejsza liczba to: " << minliczby << endl;

    return 0;
}

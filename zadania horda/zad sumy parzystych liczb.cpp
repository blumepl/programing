#include <iostream>
using namespace std;

int main() {

    int liczby[10];
    int suma = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Podaj liczbê nr " << i + 1 << ": ";
        cin >> liczby[i];
    }

    cout << "Liczby parzyste: ";
    bool first = true;
    for (int i = 0; i < 10; i++) {
        if (liczby[i] % 2 == 0) {
            if (!first) {
                cout << ", ";
            }
            cout << liczby[i];
            suma += liczby[i];
            first = false;
        }
    }

    cout << endl << "Suma liczb parzystych: " << suma << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {

    int numbers[5];

    for (int i = 0; i < 5; i++) {
        cout << "Podaj liczbê " << i + 1 << ": ";
        cin >> numbers[i];
    }

    for (int i = 0; i < 5; i++) {
        if (numbers[i] < 0) {
            numbers[i] = 0;  
        }
    }

    cout << "Liczby ujemne zamienione na 0: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";  
    }
    cout << endl;

    return 0;
}

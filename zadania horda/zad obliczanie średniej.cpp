#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    int sum = 0;
    int srednia;
    int i = 0;

    for (i = 0; i < 5; i++) {
        cout << "Podaj liczbę " << i + 1 << ": ";
        cin >> numbers[i];
    }

    sum = 0;
    for (i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    srednia = sum / 5;

    cout << "Średnia z podanych liczb wynosi: " << srednia << endl;

    return 0;
}

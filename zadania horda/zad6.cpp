#include <iostream>

int main() {
    int liczba1, liczba2;

    // Wczytywanie liczb od u¿ytkownika
    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> liczba1;
    std::cout << "Podaj druga liczbe: ";
    std::cin >> liczba2;

    // Obliczanie sumy
    int suma = liczba1 + liczba2;

    // Wyœwietlanie sumy
    std::cout << "Suma: " << suma << std::endl;

    // Sprawdzanie, czy suma jest liczb¹ parzyst¹ czy nieparzyst¹
    if (suma % 2 == 0) {
        std::cout << "Suma jest liczba parzysta." << std::endl;
    } else {
        std::cout << "Suma jest liczba nieparzysta." << std::endl;
    }

    return 0;
}

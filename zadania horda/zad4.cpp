#include <iostream>

int main() {
    // Inicjalizacja zmiennych
    int zmiennaCalkowita = 10;
    float zmiennaZmiennoprzecinkowa = 3.14;
    char zmiennaZnakowa = 'A';
    bool zmiennaLogiczna = true;

    // Wyœwietlanie wartoœci zmiennych
    std::cout << "Zmienna calkowita: " << zmiennaCalkowita << std::endl;
    std::cout << "Zmienna zmiennoprzecinkowa: " << zmiennaZmiennoprzecinkowa << std::endl;
    std::cout << "Zmienna znakowa: " << zmiennaZnakowa << std::endl;
    std::cout << "Zmienna logiczna: " << std::boolalpha << zmiennaLogiczna << std::endl;

    return 0;
}

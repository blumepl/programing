#include <iostream>
using namespace std;
int main() {
    // Inicjalizacja zmiennych r�nych typ�w danych
    int integerzmienna = 2;          // Typ ca�kowity
    float floatzmienna = 20;       // Typ zmiennoprzecinkowy
    char charzmienna = 'lol';            // Typ znakowy
    bool boolzmienna = true;           // Typ logiczny

    // Wy�wietlenie warto�ci zmiennych
    std::cout << "Warto�� zmiennej typu int: " << integerzmienna << std::endl;
    std::cout << "Warto�� zmiennej typu float: " << floatzmienna << std::endl;
    std::cout << "Warto�� zmiennej typu char: " << charzmienna << std::endl;
    std::cout << "Warto�� zmiennej typu bool: " << (boolzmienna ? "prawda" : "falsze") << std::endl;

    return 0;
}

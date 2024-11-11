#include <iostream>
using namespace std;
int main() {
    // Inicjalizacja zmiennych ró¿nych typów danych
    int integerzmienna = 2;          // Typ ca³kowity
    float floatzmienna = 20;       // Typ zmiennoprzecinkowy
    char charzmienna = 'lol';            // Typ znakowy
    bool boolzmienna = true;           // Typ logiczny

    // Wyœwietlenie wartoœci zmiennych
    std::cout << "Wartoœæ zmiennej typu int: " << integerzmienna << std::endl;
    std::cout << "Wartoœæ zmiennej typu float: " << floatzmienna << std::endl;
    std::cout << "Wartoœæ zmiennej typu char: " << charzmienna << std::endl;
    std::cout << "Wartoœæ zmiennej typu bool: " << (boolzmienna ? "prawda" : "falsze") << std::endl;

    return 0;
}

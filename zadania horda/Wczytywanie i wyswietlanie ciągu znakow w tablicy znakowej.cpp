#include <iostream>
#include <string>
using namespace std;

int main() {
	char tekst[50];
cout << "Podaj tekst (max 20 znakow): ";
cin.getline(tekst, 20);
cout << "Wprowadzono tekst: " << tekst << endl;
}
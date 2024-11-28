#include <iostream>
using namespace std;
int main() {
	int pieniadze;
	int czas;
	char pojazd;
	cout << "Podaj liczbe godzin parkowania: " << endl;
	cin >> czas;
	cout << "Podaj rodaj pojazdu (s-samochud,m-motocykl,a-autobus): " << endl;
	cin >> pojazd;
	switch (pojazd){
		case 's':
			cout << "Oplata za parkowanie: " << (czas * 3) << endl;
			break;
		case 'm':
				cout << "Oplata za parkowanie: " << (czas * 5) << endl;
				break;
		case 'a':
				cout << "Oplata za parkowanie: " << (czas * 10) << endl;
				break;
	}
}

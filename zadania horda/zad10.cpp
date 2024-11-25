#include <iostream>
using namespace std;
int main(){
	int temperatura;
	char znak;
	cout << "Podaj temperature w Celsjuszach: " << endl;
	cin >> temperatura;
	cout << "Wybierz jednostke docelowa(k = kelvi, f = farenhait" << endl;
	cin >> znak;
	switch(znak) {
		case 'k':
			cout << "temperatura w stopniach kelvina: " << (temperatura + 273.15) << endl;
			break;
		case 'f':
			cout << "temperatura w stopniach farenfaitach: " << ((temperatura * 9/5) + 32) << endl;
			
	}
	
}
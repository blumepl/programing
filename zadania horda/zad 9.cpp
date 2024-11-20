# include <iostream>
using namespace std;

int main(){
	int liczba1;
	int liczba2;
	char znak;
	cout << "Podaj liczbe: " << endl;
	cin >> liczba1;
	cout << "Podaj druga liczbe: " << endl;
	cin >> liczba2;
	cout << "Podaj znak: " << endl;
	cin >> znak;
	switch(znak) {
		case '+':
			cout << "winik" << (liczba1 + liczba2) << endl;
			break;
		case '-':
			cout << "winik" << (liczba1 - liczba2) << endl;
			break;
		case '*':
			cout << "winik" << (liczba1 * liczba2) << endl;
			break;
		case ':':
			cout << "winik" << (liczba1 / liczba2) << endl;
			break;
	}
}
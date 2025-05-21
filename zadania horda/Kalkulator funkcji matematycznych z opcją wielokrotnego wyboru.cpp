#include <iostream>
using namespace std;

int suma(int a, int b){ 
return a + b;
}
int roznicz(int a, int b){
return a - b;
}
int iloczyn(int a, int b) {
return a * b;
}
int iloraz(int a, int b) {
return a / b;
}

int main (){
	int a;
	int b;
	int wybor;
	cout << "wybiez sposob liczenia: " << endl;
	cout << "1. Suma" << endl;
	cout << "2. roznica" << endl;
	cout << "3. iloczyn" << endl;
	cout << "4. iloraz" << endl;
	cout << "0. exit" << endl;
	cout << "wybrana funkcja: ";
	cin >> wybor;
	cout << "pierwsza liczba: ";
	cin >> a;
	cout << "druga liczba: ";
	cin >> b;
	switch(wybor) {
		case 1:
			
	}
}
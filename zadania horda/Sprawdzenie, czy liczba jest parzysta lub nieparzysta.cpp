#include <iostream>
using namespace std;

bool funkcja(int a) {
	if(a % 2 == 0) return true;
	else return false;
}
int main(){
	int a;
	cin >> a;
	bool wynik = funkcja(a);
	
	if(wynik == true) {
		cout << "liczba parzysta";
	}	else {
			cout << "liczba nieparzysta";
			}
}
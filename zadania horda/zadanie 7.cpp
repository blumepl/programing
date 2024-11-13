#include <iostream>
using namespace std;
int main(){
	int punkty;
	cout << "Podaj wynik egzaminu: ";
	cin >> punkty;
	if ( punkty < 50){
		cout << "Ocena niedostateczna" << endl;
	} else if (( punkty > 49) || ( punkty < 70)){
		cout << "Ocena dostateczna" << endl;
	}else if (( punkty > 69) || (punkty < 85)){
		cout << "Ocena dobra" << endl;
	} else if (( punkty > 84) || (punkty < 100)){
		cout << "Ocena bardzo dobra" << endl;
		}else if ( punkty == 100){
			cout << "Ocena Celująca" << endl;
		}
	


}
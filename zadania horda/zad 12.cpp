#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Podaj liczbe: " << endl;
	cin >> n;
	while (n <= 10)
	{
		if ((n %2) == 0){
		cout << n << endl;
		n -= 1;
		}
	}
}
#include <iostream>
using namespace std;

int main(){
	int a,b;
	do{
		cin.clear(); cin.sync();
		cout << "Podaj a: "; cin >> a;
	} while (cin.good() != true);
	do{
		cin.clear(); cin.sync();
		cout << "Podaj b: "; cin >> b;
	} while (cin.good() != true);
	return 0;
}

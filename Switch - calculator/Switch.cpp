#include <iostream>
using namespace std;

int main(){
	int a,b,opcja;
	cout << "Podaj a: "; cin >> a;
	cout << "Podaj b: "; cin >> b;
	
	cout << "Dostepne dzialania" << endl;
	cout << "1. Dodawanie" << endl;
	cout << "2. Odejmowanie" << endl;
	cout << "3. Mnozenie" << endl;
	cout << "4. Dzielenie" << endl << endl;
	cout << "Ktora opcje wybierasz?: "; cin >> opcja;
	switch(opcja){
		case 1:
			cout << "a + b = " << a + b <<endl;
			break;
		case 2:
			cout << "a - b = " << a - b <<endl;
			break;
		case 3:
			cout << "a * b = " << a * b <<endl;
			break;
		case 4:
			cout << "a / b = " << a / b << endl;
			break;
		default:
			cout << "Nie ma takiej opcji" << endl;
			break;
	}
	return 0;
}

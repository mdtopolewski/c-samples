#include <iostream>
#include <math.h>

using namespace std;


struct Wartosci{
	int a, b;
};


void dane(Wartosci Zestaw[])
{
	do{
		cin.clear(); cin.sync();
		cin.ignore( 1024, '\n');
		cout << "Podaj a: "; cin >> Zestaw[0].a;
		if (cin.good() == 0){
			cout << "\nPodana wartosc musi byc liczba \n";
		}
		else{
		}
	} while (!cin.good());
	
	do{
		cin.clear(); cin.sync();
		cin.ignore( 1024, '\n');
		cout << "Podaj b: "; cin >> Zestaw[0].b;
		if (!cin.good()){
			cout << "\nPodana wartosc musi byc liczba \n";
		}
		else{
			
		}
	} while (!cin.good());
}


void kwadratRoznicy(Wartosci Zestaw[])
{
	int potega_a, potega_b, kwadrat_roznicy;
	
	int a = Zestaw[0].a;
	int b = Zestaw[0].b;
	
	potega_a = pow(a, 2);
	potega_b = pow(b, 2);
	
	kwadrat_roznicy = potega_a - (2 * a * b) + potega_b;
	
	cout << "\nKwadrat roznicy " << a << " i " << b << " jest rowny: " << kwadrat_roznicy << endl;
}

void kwadratSumy(Wartosci Zestaw[])
{
	int potega_a, potega_b, kwadrat_sumy;
	
	int a = Zestaw[0].a;
	int b = Zestaw[0].b;
	
	potega_a = pow(a, 2);
	potega_b = pow(b, 2);
	
	kwadrat_sumy = potega_a + (2 * a * b) + potega_b;
	
	cout << "\nKwadrat sumy " << a << " i " << b << " jest rowny: " << kwadrat_sumy << endl;
}

void roznicaKwadratow(Wartosci Zestaw[])
{
		int roznica_kwadratow;
	
	int a = Zestaw[0].a;
	int b = Zestaw[0].b;

	roznica_kwadratow = (a - b) * (a + b);
	
	cout << "\nRoznica kwadratow " << a << " i " << b << " jest rowna: " << roznica_kwadratow << endl;
}

int main()
{
	int opcja;
	
	Wartosci Zestaw[5];
	dane(Zestaw);
	
	cout << "\nDostepne dzialania: " << endl;
	cout << "1. Obliczanie kwadartu roznicy" << endl;
	cout << "2. Obliczanie sumy kwadratow" << endl;
	cout << "3. Obliczanie roznicy kwadratow" << endl << endl;
	do{
		cin.clear(); cin.sync();
		cin.ignore(1024, '\n');
			cout << "Ktore dzialanie ma zostac wykonane?\n"; cin >> opcja;
			
			if (!cin.good()){
				cout << "\nDostepne dzialania: " << endl;
				cout << "1. Obliczanie kwadartu roznicy" << endl;
				cout << "2. Obliczanie sumy kwadratow" << endl;
				cout << "3. Obliczanie roznicy kwadratow" << endl;
				cout << "\nWybierz dzialanie wpisujac liczbe z zakresu 1-3\n";
			}
			
	} while (!cin.good());
	
	switch(opcja){
		case 1:
			kwadratRoznicy(Zestaw);
			break;
		case 2:
			kwadratSumy(Zestaw);
			break;
		case 3:
			roznicaKwadratow(Zestaw);
			break;
		default:
			cout << "Nie ma takiej opcji" << endl;
			break;
	}
	return 0;
}

#include <iostream>
#include <math.h>

using namespace std;


struct Wartosci {
    double x, y;
};


void dane(Wartosci zestaw[])
{
    do{
    	cin.clear(); cin.sync();
    	cout << "Podaj x: "; cin >> zestaw[0].x;
    	if (!cin.good()){
    		cout << "\nPodana wartosc musi byc liczba \n";
		}
		else{
			
		}
	} while (!cin.good());
	
    do{
    	cin.clear(); cin.sync();
        cout << "Podaj y: "; cin >> zestaw[0].y;
        if (!cin.good()){
        	cout << "\nPodana wartosc musi byc liczba \n";
		}
		else{
			
		}
    } while (!cin.good());
}


void sinus(Wartosci zestaw[])
{
    double promien, potega_x, potega_y, suma_poteg;
    potega_x = pow(zestaw[0].x, 2);
    potega_y = pow(zestaw[0].y, 2);
    suma_poteg = potega_x + potega_y;
    promien = sqrt(suma_poteg);
    
    cout << "\nSin alfa jest rowny: " << zestaw[0].y / promien << endl;
}

void cosinus(Wartosci zestaw[])
{
	double promien, potega_x, potega_y, suma_poteg;
	potega_x = pow(zestaw[0].x, 2);
	potega_y = pow(zestaw[0].y, 2);
	suma_poteg = potega_x + potega_y;
	promien = sqrt(suma_poteg);
	
	cout << "\nCos alfa jest rowny: " << zestaw[0].x / promien << endl;
}

void tangens(Wartosci zestaw[])
{
	double promien, potega_x, potega_y, suma_poteg;
	potega_x = pow(zestaw[0].x, 2);
	potega_y = pow(zestaw[0].y, 2);
	suma_poteg = potega_x + potega_y;
	promien = sqrt(suma_poteg);
	
	cout << "\nTg alfa jest rowny: " << zestaw[0].y / zestaw[0].x << endl;
}

void cotangens(Wartosci zestaw[])
{
	double promien, potega_x, potega_y, suma_poteg;
	potega_x = pow(zestaw[0].x, 2);
	potega_y = pow(zestaw[0].y, 2);
	suma_poteg = potega_x + potega_y;
	promien = sqrt(suma_poteg);
	
	cout << "\nCtg alfa jest rowny: " << zestaw[0].y / zestaw[0].x << endl;
}

int main()
{
	int opcja;
    Wartosci zestaw[5];
    dane(zestaw);
    
    cout << "\nDostepne dzialania: " << endl;
    cout << "1. Obliczenie sin alfa" << endl;
    cout << "2. Obliczenie cos alfa" << endl;
    cout << "3. Obliczenie tg alfa" << endl;
    cout << "4. Obliczenie ctg alfa" << endl << endl;
    
    do{
    	cin.clear(); cin.sync();
    	cout << "Ktore dzialanie ma zostac wykonane?\n"; cin >> opcja;
    	
    	if (cin.good() == 0){
    		cout << "\nDostepne dzialania: " << endl;
    		cout << "1. Obliczenie sin alfa" << endl;
    		cout << "2. Obliczenie cos alfa" << endl;
    		cout << "3. Obliczenie tg alfa" << endl;
    		cout << "4. Obliczenie ctg alfa" << endl;
    		cout << "\nWybierz dzialanie wpisujac liczbe z zakresu 1-3\n";
		}
	}while (!cin.good());
	
    switch(opcja){
    	case 1:
    		sinus(zestaw);
    		break;
    	case 2:
    		cosinus(zestaw);
    		break;
    	case 3:
    		tangens(zestaw);
    		break;
    	case 4:
    		cotangens(zestaw);
    		break;
    	default:
    		cout << "Nie ma takiej opcji" << endl;
    		break;
	}
    return 0;
}

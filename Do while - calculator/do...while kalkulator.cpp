#include <iostream>
using namespace std;

int main(){
	int wynik;
	int liczba;
	int opcja;
	do{
	do{
		cin.clear(); cin.sync();
		cout << "Podaj liczbe: "; cin >> liczba;
	} while(cin.good() != true);
	if(liczba != 0){
		cout << "Wybierz dzialanie" << endl;
		cout << "[1] Dodawanie" << endl;
		cout << "[2] Odejmowanie" << endl;
		cout << "[3] Mno¿enie" << endl;
		cout << "[4] Dzielenie" << endl;
		cout << "[5] Rezygnuj" << endl << endl;
		
		do{
			cin.clear(); cin.sync();
			cout << "Ktore dzialanie wybierasz?" << endl;
			cin >> opcja;
		} while(cin.good() != true);
		switch(opcja){
			case 1:
				wynik = wynik + liczba;
				break;
			case 2:
				wynik = wynik - liczba;
				break;
			case 3:
				wynik = wynik * liczba;
				break;
			case 4:
				wynik = wynik / liczba;
				break;
			case 5:
				cout << "Koniec";
				return 0;
				}
	}
	cout << "Obecny wynik to: " << wynik << endl;
	if(wynik == 0)
		cout << "Koniec" << endl;
	} while(wynik != 0);
	return 0;
}

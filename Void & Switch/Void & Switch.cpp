#include <iostream>
using namespace std;

void moja_funkcja()
{
    cout << "[1] - dodawanie" << endl;
    cout << "[2] - odejmowanie" << endl;
    cout << "[0] - wyjscie z programu" << endl;
}

void dodawanie()
{
	int wynik,a,b;
	cout << "Podaj pierwsza liczbe: "; cin >> a;
	cout << "Podaj druga liczbe: "; cin >> b;
    wynik = a + b;
    cout << "Wynik dodawania: " << wynik << endl << endl;
}

void odejmowanie()
{
	int wynik,a,b;
    cout << "Podaj pierwsza liczbe: "; cin >> a;
    cout << "Podaj druga liczbe: "; cin >> b;
    wynik = a - b;
    cout << "Wynik odejmowania: " << wynik << endl << endl;
}

int main()
{
    cout << "W programie sa dostepne nastepujace opcje:" << endl;
    moja_funkcja();
    cout << "Zycze przyjemnego korzystania z programu" << endl << endl;
    int liczba;
    do
    {
    	moja_funkcja();
        cin >> liczba;
        switch( liczba )
        {
        case 1:
            dodawanie();
            break;
        case 2:
            odejmowanie();
            break;
            default:
            break;
        } //switch
    } while( liczba != 0 );
    
    return 0;
}

#include <iostream>
#include <cstdlib>

using namespace std;

int a,b;
int odlicz;


int funkcja_NWD(int a,int b)
	{
		if(a!=b){
			odlicz++;
			return funkcja_NWD(a>b ? a-b : a, b>a ? b-a : b);
		}
		else{
		odlicz++;
		return a;
		}
	}
	
	
int main()
{	
	do{
	cin.clear(); cin.sync();
	cout << "Podaj wartosc x: "; cin >> a;
	if (!cin.good()){
		cout << "\nPodana wartosc musi byc liczba\n";
	}
	else{}
	}while(!cin.good());
	
	do{
	cin.clear(); cin.sync();
	cout << "Podaj wartosc y: "; cin >> b;
	if (!cin.good()){
		cout << "\nPodana wartosc musi byc liczba\n";
	}
	}while (!cin.good());
    cout << "\nNajwiekszy wspolny dzielnik wynosi "<< funkcja_NWD(a, b) << endl;
    cout << "Liczba wywolan wynosi: " << odlicz;
          	
}

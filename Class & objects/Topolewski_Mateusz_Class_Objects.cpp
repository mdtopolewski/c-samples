#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;

class Zamowienie{
	private:
		string nazwa_produktu;
		double cena_produktu;
		string data_zakupu;
		int liczba_sztuk;
		
	public:
		void zapisz_dane(){
			cout << "\nPodaj nazwe produktu: "; cin >> nazwa_produktu;
			cout << "Podaj cene produktu: "; cin >> cena_produktu;
			cout << "Podaj date zakupu: "; cin >> data_zakupu;
			cout << "Podaj liczbe sztuk: "; cin >> liczba_sztuk;
		}
		
		void wyswietl_dane(){
			cout << "\nNazwa produktu: " << podaj_nazwe_produktu() << endl;
			cout << "Cena produktu: " << fixed << setprecision(2) << podaj_cene() << endl;
			cout << "Data zakupu: " << podaj_date_zakupu() << endl;
			cout << "Liczba sztuk: " << podaj_liczbe_sztuk();
		}
		
		string podaj_nazwe_produktu(){
			return nazwa_produktu;
		}
		
		double podaj_cene(){
			return cena_produktu;
		}
		
		string podaj_date_zakupu(){
			return data_zakupu;
		}
		
		int podaj_liczbe_sztuk(){
			return liczba_sztuk;
		}
		
		double podaj_koszt(){
			double koszt = 0;
			koszt = cena_produktu * liczba_sztuk;
			
			return koszt;
		}
};



void wskazanego_produktu(Zamowienie *tablica, int numer, int ile, double koszt_b, string wybor_prod){
	
	cout << "\n\n\n";	// odstep

	for( int i=0; i < ile; i++ ){
		numer = i + 1;
		cout << "Produkt zamowienia numer " << numer << ": " << tablica[i].podaj_nazwe_produktu() << endl;
	}

	cout << "Nazwa produktu dla ktorego ma zostac obliczona laczny koszt: "; cin >> wybor_prod;
	
	for( int i=0; i < ile; i++ ){
		if( wybor_prod == tablica[i].podaj_nazwe_produktu() ){
			koszt_b += tablica[i].podaj_koszt();
		}
	}
	
	cout << "\nLaczna wartosc zamowien dla wskazanego produktu to: " << koszt_b;
}



void wskazanego_miesiaca(Zamowienie * tablica, int numer, int ile, double koszt_c, string wybor_data){
	cout << "\n\n\n";
	
	for( int i=0; i < ile; i++ ){
		numer = i + 1;
		cout << "Miesiac zamowienia numer " << numer << ": " << tablica[i].podaj_date_zakupu() << endl;
	}
	
	cout << "Podaj miesiac dla ktorego ma zostac obliczony laczny koszt zamowien: "; cin >> wybor_data;
	
	for( int i=0; i < ile; i++ ){
		if( wybor_data == tablica[i].podaj_date_zakupu() ){
			koszt_c += tablica[i].podaj_koszt();
		}
	}
	
	cout << "\nLaczna wartosc zamowien dla wskazanego miesiaca to: " << koszt_c << endl;
}



void najwieksza_ilosc(Zamowienie *tablica, int ile, int info_ilosc, double info_koszt, string info_nazwa, string info_data){
	int ilosc_duplikat = 0;
	string nazwa_duplikat, nazwa_check, nazwa;
	
	cout << "\n\nInformacje o produkcie ktory zostal zakupiony w najwiekszej ilosci:" << endl;
	
	int ilosc_tablica[ile]; 
	for( int i=0; i < ile; i++ ){
		ilosc_tablica[i] = tablica[i].podaj_liczbe_sztuk();
	}
	
	sort( ilosc_tablica, ilosc_tablica + ile, greater < int >() );
	
	for( int i=0; i < ile; i++ ){
		for( int j=i; j < ile; j++ ){
			if( j != i ){
				if( tablica[i].podaj_nazwe_produktu() == tablica[j].podaj_nazwe_produktu() ){
					nazwa_check = tablica[i].podaj_nazwe_produktu();
					for( int i=0; i < ile; i++ ){
						if( nazwa_check == tablica[i].podaj_nazwe_produktu() ){
							ilosc_duplikat += tablica[i].podaj_liczbe_sztuk();
							nazwa_duplikat = tablica[i].podaj_nazwe_produktu();
						}
					}
				}
			}
		}
	}
	
		if( ilosc_duplikat > ilosc_tablica[0] ){
		for( int i=0; i < ile; i++ ){
			if( nazwa_duplikat == tablica[i].podaj_nazwe_produktu() ){
				info_nazwa = nazwa_duplikat;
				info_koszt += tablica[i].podaj_koszt();
				info_data += tablica[i].podaj_date_zakupu() + ", ";
				info_ilosc = ilosc_duplikat;
				}
			}
		}
		else if(ilosc_duplikat < ilosc_tablica[0]){
			for( int i=0; i < ile; i++ ){
				if( ilosc_tablica[0] == tablica[i].podaj_liczbe_sztuk() ){
					nazwa = tablica[i].podaj_nazwe_produktu();
					for( int i=0; i < ile; i++ ){
						if( nazwa == tablica[i].podaj_nazwe_produktu() ){
							info_nazwa += nazwa + ", ";
							info_koszt += tablica[i].podaj_koszt();
							info_data += tablica[i].podaj_date_zakupu() + ", ";
							info_ilosc += tablica[i].podaj_liczbe_sztuk();
						}
					}
				}
			}
		}

	cout << "Nazwa produktu: " << info_nazwa << endl;
	cout << "Calkowity koszt: " << info_koszt << endl;
	cout << "Data/y zakupu: " << info_data << endl;
	cout << "Liczba sztuk: " << info_ilosc;
}



int main(){
	int ile = 0;
	int numer = 0;
	double koszt_b = 0;
	double koszt_c = 0;
	string wybor_prod,wybor_data;
	
	string info_nazwa, info_data;
	double info_koszt = 0;
	int info_ilosc = 0;
	
	cout << "Ile zamowien chcesz zlozyc: "; cin >> ile;
	
	Zamowienie * tablica = new Zamowienie[ile];
	
	for( int i=0; i < ile; i++ ){
		numer = i + 1;
		cout << "\n-------Zamowienie nr " << numer << "-------";
		tablica[i].zapisz_dane();
}

	wskazanego_produktu(tablica, numer, ile, koszt_b, wybor_prod);
	wskazanego_miesiaca(tablica, numer, ile, koszt_c, wybor_data);
	najwieksza_ilosc(tablica, ile, info_ilosc, info_koszt, info_nazwa, info_data);
	
	return 0;
}

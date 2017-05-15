#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	cout << "Wylosowanie pierwsze: " << (rand() % 50) + 1<< endl;
	int liczba = (rand() % 50) + 1;
	cout << "Wylosowanie drugie: " << liczba << endl;
	liczba = rand();
	cout << "Wylosowanie trzecie: " << liczba << endl;
	return 0;
}

#include <iostream>
using namespace std;

int main(){
	int ile;
	cout << "Ile razy wypisac napis? ";
	cin >> ile;
	if(ile > 0)
		do{
			cout << "Napis" << endl;
			ile--;
		} while ( ile > 0);
	return 0;
}

#include <iostream>
using namespace std;

int main(){
	int wiek;
	cout << "Podaj wiek: "; cin >> wiek;
	if(wiek >= 18){
		if(wiek <= 100){
			cout << "Twierdzisz, ze jestes pelnoletni..." << endl;
			cout << "ale czy kogos to interesuje ? :)" << endl;
		};
	}
	else{
		cout << "niepelnoletni";
	};
	return 0;
}

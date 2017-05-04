#include <iostream>

using namespace std;

int wiekszy(int a, int b){
    if (a>b){
             return 1;
    }
    else if (a<b){
             return 2;
    }
    else {
             return 0;
    }
}

int wiekszy(double a, double b){
    if (a>b){
            return 1;
    }
    else if (a<b){
            return 2;
    }
    else {
            return 0;
    }
}

int wiekszy(const char*a, const char*b){
    if (a>b){
            return 1;
    }
    else if (a<b){
            return 2;
    }
    else {
            return 0;
    }
}

int main(){
    unsigned char a;
    unsigned char b;
    
    cout << "Podaj argument a: "; cin >> a;
    cout << "Podaj argument b: "; cin >> b;
    
    cout << "\nWynik dla argumentow calkowitych: " << wiekszy(a,b) << endl;
    
    return 0;
}

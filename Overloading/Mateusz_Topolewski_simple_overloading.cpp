#include <iostream>

using namespace std;

double obwod(double a){
       return a;
}

double obwod(double a, double b, double c){
       return a+b+c;
}

double obwod(double a, double b, double c, double d){
       return a+b+c+d;
}

double obwod(double a, double b, double c, double d, double e){
       return a+b+c+d+e;
}

double obwod(double a, double b, double c, double d, double e, double f){
       return a+b+c+d+e+f;
}

int main(){
    double a,b,c,d,e,f;
    cout << "Podaj obwod kola: "; cin >> a;
    cout << "Obowd kola wynosi: " << obwod(a) << endl;

    cout << "Podaj boki trojkata: "; cin >> a >> b >> c;
    cout << "Obwod trojkata wynosi: " << obwod(a,b,c) << endl;
    
    cout << "Podaj boki czworokata: "; cin >> a >> b >> c >> d;
    cout << "Obwod czworokata wynosi: " << obwod(a,b,c,d) << endl;
    
    cout << "Podaj boki piecokata: "; cin >> a >> b >> c >> d >> e;
    cout << "Obwod piecokata wynosi: " << obwod(a,b,c,d,e) << endl;
    
    cout << "Podaj boki szesciokata: "; cin >> a >> b >> c >> d >> e >> f;
    cout << "Obwod szesciokata wynosi: " << obwod(a,b,c,d,e,f) << endl;
    
    system ("pause");
}

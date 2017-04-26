#include<iostream>

using namespace std;

long long silnia(int);

int main(){
    int x;
    cout<<"Podaj wartosc dla ktorej zostanie obliczona silnia: "; cin>>x;
    cout<<x<<"! = "<<silnia(x)<<endl;
    cout<<"Ilosc wywolan rekurencyjnych: "<<x<<endl;
    return 0;
}    

long long silnia(int x){
         if (x==0){
            return 1;
         }
         else if (x>0){
            return x*silnia(x-1);
         }
}

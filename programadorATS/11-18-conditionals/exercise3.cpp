#include<iostream>

using namespace std;

int main() {
    int x,y, data = 5;

    cout<<"Insert 2 number: "; cin>>x>>y;

    if(x==y){
        cout<<"Ambos numeros son iguales";
    } else if(x>y){
        cout<<"El mayor es "<<x;
    } else {
        cout<<"El mayor es "<<y<<endl;
    }

    return 0;
}               
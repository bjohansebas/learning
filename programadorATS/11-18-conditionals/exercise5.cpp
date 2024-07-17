#include<iostream>

using namespace std;

int main() {
    int x;

    cout<<"Insert a number: "; cin>>x;
    if (x==0){
        cout<<"El numero es cero";
    } else if (x % 2 == 0){
            cout<<"Es par";
    } else {
        cout<<"Es impar";
    }
    
    return 0;
}               
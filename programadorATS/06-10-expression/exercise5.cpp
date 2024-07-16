#include<iostream>

using namespace std;

int main(){
    float x,y,aux = 0;

    cout<<"Insert the value of x: "; cin>>x;
    cout<<"Insert the value of y: "; cin>>y;

    aux = x; x = y; y = aux;

    cout<<"\nx is: "<<x<<endl;
    cout<<"y is: "<<y<<endl;

    return 0;
}
#include<iostream>

using namespace std;

int main() {
    int n1,n2, sum = 0, resta = 0, division = 0, multiplicacion = 0;

    cout<<"Insert a number: "; cin>>n1;
    cout<<"Insert another number: "; cin>>n2;

    sum = n1+n2;
    resta= n1-n2;
    multiplicacion = n1*n2;
    division = n1/n2;

    cout<<"La suma es: "<<sum<<endl;
    cout<<"La resta es: "<<resta<<endl;
    cout<<"La multiplicacion es: "<<multiplicacion<<endl;
    cout<<"La division es: "<<division<<endl;

    return 0;
}
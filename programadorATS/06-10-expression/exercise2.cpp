#include<iostream>

using namespace std;

int main(){
    float a,b,c,d,result = 0;

    cout<<"Insert the value of a: "; cin>>a;
    cout<<"Insert the value of b: "; cin>>b;
    cout<<"Insert the value of c: "; cin>>c;
    cout<<"Insert the value of d: "; cin>>d;

    result = (a+b)/(c+d);

    cout.precision(2);
    cout<<"The result is: "<<result<<endl;

    return 0;
}
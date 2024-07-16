#include<iostream>

using namespace std;

int main(){
    float a,b,result = 0;

    cout<<"Insert the value of a: "; cin>>a;
    cout<<"Insert the value of b: "; cin>>b;

    result = (a/b)+1;

    cout.precision(2);
    cout<<"The result is: "<<result<<endl;

    return 0;
}
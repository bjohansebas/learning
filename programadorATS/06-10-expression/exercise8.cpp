#include<iostream>
#include<cmath>

using namespace std;

int main(){
    float a,b,result = 0;

    cout<<"Insert cathetus A: "; cin>>a;
    cout<<"Insert cathetus B: "; cin>>b;

    a=pow(a,2);
    b=pow(b,2);

    result = sqrt(a+b);

    cout<<"The hypotenuse is: "<<result<<endl;

    return 0;
}
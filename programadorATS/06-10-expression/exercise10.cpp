#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float a,b,c,result_positive = 0,result_negative= 0;

    cout<<"Insert a: "; cin>>a;
    cout<<"Insert b: "; cin>>b;
    cout<<"Insert c: "; cin>>c;

    float z = pow(b,2)-(4*a*c);

    result_positive = (-b + sqrt(z)) / (2*a);

    result_negative = (-b - sqrt(z)) / (2*a);

    cout<<"The result 1 is: "<<result_positive<<endl;
    cout<<"The result 2 is: "<<result_negative<<endl;

    return 0;
}
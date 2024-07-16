#include<iostream>

using namespace std;

int main(){
    float nt1,nt2,nt3,result = 0;

    cout<<"Insert practice note: "; cin>>nt1;
    cout<<"Insert theory note: "; cin>>nt2;
    cout<<"Insert participation: "; cin>>nt3;

    nt1 *= 0.3;
    nt2 *= 0.6;
    nt3 *= 0.1;

    result = nt1+nt2+nt3;
    cout<<"The final note is: "<<result<<endl   ;

    return 0;
}
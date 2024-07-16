#include<iostream>

using namespace std;

int main(){
    float st1,st2,st3,st4, result = 0;

    cout<<"Final note of studient 1: "; cin>>st1;
    cout<<"Final note of studient 2: "; cin>>st2;
    cout<<"Final note of studient 3: "; cin>>st3;
    cout<<"Final note of studient 4: "; cin>>st4;

    result = (st1+st2+st3+st4) / 4;

    cout<<"The media of notes is: "<<result;

    return 0;
}
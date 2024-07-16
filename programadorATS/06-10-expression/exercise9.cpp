#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float x,y,result = 0;

    cout<<"Insert x: "; cin>>x;
    cout<<"Insert y: "; cin>>y;


    result = (sqrt(x))/((pow(y,2)-1));

    cout<<"The result is: "<<result<<endl;

    return 0;
}
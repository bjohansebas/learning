#include<iostream>

using namespace std;

int main() {
    float price; 
    const float IVA= 0.19;

    cout<<"Inset the price of product: ";cin>>price;

    float IVAOfProduct = price * IVA;

    float result = price + IVAOfProduct;

    cout<<"The product with IVA is: "<<result;

    return 0;
}
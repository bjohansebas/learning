#include <iostream>

int main() {
    int a = 10;
    int b = 20;

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    int sum = a + b;
    int diff = a - b;
    int mult = a * b;
    float floor = float(a) / float(b);
    int mod = a % b;

    std::cout << "sum: " << sum << std::endl;
    std::cout << "diff: " << diff << std::endl;
    std::cout << "mult: " << mult << std::endl;
    std::cout << "floor: " << floor << std::endl;
    std::cout << "mod: " << mod << std::endl;

    int incrementOne = a++;
    std::cout << "incrementOne: " << incrementOne << std::endl;
    std::cout << "a: " << a << std::endl;

    int incrementTwo = ++a;
    std::cout << "incrementTwo: " << incrementTwo << std::endl; 
    std::cout << "a: " << a << std::endl;

    int decrementOne = a--;
    std::cout << "decrementOne: " << decrementOne << std::endl;
    std::cout << "a: " << a << std::endl;

    int decrementTwo = --a;
    std::cout << "decrementTwo: " << decrementTwo << std::endl;
    std::cout << "a: " << a << std::endl;

    return 0;
}
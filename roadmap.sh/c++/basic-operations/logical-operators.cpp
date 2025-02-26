#include <iostream>

int main() {
    int a = 30;
    int b = 20;
    int c = 10;

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;

    if (a > b && b > c) {
        std::cout << "a is greater than b and b is greater than c" << std::endl;
    } else {
        std::cout << "a is not greater than b and b is not greater than c" << std::endl;
    }

    if (a > b || b > c) {
        std::cout << "a is greater than b or b is greater than c" << std::endl;
    } else {

        std::cout << "a is not greater than b or b is not greater than c" << std::endl;
    }

    if (!(a > b && b > c)) {
        std::cout << "a is not greater than b and b is not greater than c" << std::endl;
    } else {
        std::cout << "a is greater than b and b is greater than c" << std::endl;
    }

    if (!(a > b || b > c)) {
        std::cout << "a is not greater than b or b is not greater than c" << std::endl;
    } else {
        std::cout << "a is greater than b or b is greater than c" << std::endl;
    }
    return 0;
}
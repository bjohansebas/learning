#include <iostream>

int main() {
    int i = 0;

    std::cout << "Loops with while" << i << std::endl;
    while (i < 10) {
        std::cout << i << std::endl;
        i++;
    }

    std::cout << "Loops with for" << i << std::endl;

    for (int i = 0; i < 10; i++) {
        std::cout << i << std::endl;
    }

    std::cout << "Loops with do while" << i << std::endl;
 
    do {
        i++;
        std::cout << i << std::endl;
    } while (i < 10);

    return 0;
}
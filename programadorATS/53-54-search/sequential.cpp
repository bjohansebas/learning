#include <iostream>

using namespace std;

int main()
{
    int numbers[] = { 5, 3, 4, 7, 3 };
    int bytes = sizeof(numbers);
    int lenght = bytes / sizeof(int);

    int i = 0, dato = 8;
    char flag = 'F';

    while (flag == 'F' && i < lenght) {
        if (numbers[i] == dato) {
            flag = 'V';
        }
        i++;
    }

    if (flag == 'F') {
        cout << "The number isn't found" << endl;
    } else if (flag = 'V') {
        cout << "The number is found in the position: " << i - 1 << endl;
    }

    return 0;
}

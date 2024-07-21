#include <iostream>

using namespace std;

int main()
{
    int numbers[] = { 1, 2, 3, 4, 5 };
    int bytes = sizeof(numbers);
    int lenght = bytes / sizeof(int);

    int mitad, inf, sup, data = 4;
    char flag = 'F';

    inf = 0;
    sup = lenght;

    while (inf <= sup) {
        mitad = (inf + sup) / 2;
        if (numbers[mitad] == data) {
            flag = 'V';
            break;
        }

        if (numbers[mitad] > data) {
            sup = mitad;
            mitad = (inf + sup) / 2;
        }
        if (numbers[mitad] < data) {
            inf = mitad;
            mitad = (inf + sup) / 2;
        }
    }

    if (flag == 'F') {
        cout << "The number isn't found" << endl;
    } else if (flag = 'V') {
        cout << "The number is found at position: " << mitad << endl;
    }

    return 0;
}

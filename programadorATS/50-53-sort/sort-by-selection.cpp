#include <iostream>

using namespace std;

int main()
{
    int numbers[] = { 5, 3, 4, 7, -1 };
    int bytes = sizeof(numbers);
    int lenght = bytes / sizeof(int);

    int i, j, aux, min;

    for (i = 0; i < lenght; i++) {
        min = i;

        for (j = i + 1; j < lenght; j++) {
            if (numbers[j] < numbers[min]) {
                min = j;
            }
        }

        aux = numbers[i];
        numbers[i] = numbers[min];
        numbers[min] = aux;
    }

    cout << "ASC: " << endl;
    for (i = 0; i < lenght; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl
         << "DEC: " << endl;
    for (i = lenght - 1; i >= 0; i--) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}

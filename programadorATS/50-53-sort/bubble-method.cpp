#include <iostream>

using namespace std;

int main()
{
    int numbers[] = { 5, 3, 4, 7, 2 };
    int bytes = sizeof(numbers);
    int lenght = bytes / sizeof(int);

    int i, j, aux;

    for (i = 0; i < lenght; i++) {
        for (j = 0; j < lenght; j++) {
            if (numbers[j] > numbers[j + 1]) {
                aux = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = aux;
            }
        }
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

#include <iostream>

using namespace std;

int main()
{
    int numbers[] = { 5, 3, 4, 7, 3 };
    int bytes = sizeof(numbers);
    int lenght = bytes / sizeof(int);

    int i, pos, aux;

    for (i = 0; i < lenght; i++) {
        pos = i;
        aux = numbers[i];

        while (pos > 0 && numbers[pos - 1] > aux) {
            numbers[pos] = numbers[pos - 1];
            pos--;
        }

        numbers[pos] = aux;
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

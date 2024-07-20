#include <iostream>

using namespace std;

int main()
{
    int rows, columns;

    cout << "Insert rows: ";
    cin >> rows;
    cout << "Insert columns: ";
    cin >> columns;

    int numbers[rows][columns];
    char band = 'F';

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "Inser a number [" << i << "][" << j << "]: ";
            cin >> numbers[i][j];
        }
    }

    if (rows == columns) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                if (numbers[i][j] == numbers[j][i]) {
                    band = 'V';
                }
            }
        }
    }

    if (band == 'V') {
        cout << "Es simetrica";
    } else {
        cout << "No es simetrica";
    }

    cout << endl;

    return 0;
}

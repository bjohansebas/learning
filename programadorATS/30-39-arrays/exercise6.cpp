#include <iostream>

using namespace std;

int main()
{
    int columns, rows;

    cout << "Insert the number of rows: ";
    cin >> rows;
    cout << "Insert the number of columns: ";
    cin >> columns;

    int numbers[rows][columns];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "Insert a number [" << i << "][" << j << "]: ";
            cin >> numbers[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << numbers[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

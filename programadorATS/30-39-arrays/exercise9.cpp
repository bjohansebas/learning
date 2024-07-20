#include <iostream>

using namespace std;

int main()
{

    int numbers[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Inser a number [" << i << "][" << j << "]: ";
            cin >> numbers[i][j];
        }
    }

    cout << "Initial array: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << numbers[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transform array: " << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << numbers[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}

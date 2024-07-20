#include <iostream>

using namespace std;

int main()
{

    int numbers[3][3];
    int numbers2[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "1. Inser a number [" << i << "][" << j << "]: ";
            cin >> numbers[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "2. Inser a number [" << i << "][" << j << "]: ";
            cin >> numbers2[i][j];
        }
    }

    cout << "Suma: " << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int result = numbers[i][j] + numbers2[i][j];
            cout << result << " ";
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

int main()
{

    int numbers[2][2] = { { 1, 2 }, { 4, 5 } };
    int copy[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            copy[i][j] = numbers[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << numbers[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

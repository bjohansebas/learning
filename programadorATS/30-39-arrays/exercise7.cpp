#include <iostream>

using namespace std;

int main()
{
    int numbers[3][3] = { 3, 4, 5, 6, 7, 8, 8, 6, 5 };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if ((i == 0 && j == 0) || (i == 1 && j == 1) || (i == 2 && j == 2)) {
                cout << numbers[i][j] << "  ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}

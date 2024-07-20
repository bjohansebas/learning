#include <iostream>

using namespace std;

int main()
{
    int numbers[100], n;

    cout << "Insert the number of elements of array: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Insert a number: ";
        cin >> numbers[i];
    }

    for (int i = 0; i < n; i++) {
        cout << i << " -> " << numbers[i] << endl;
    }

    return 0;
}

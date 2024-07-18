#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Insert 1 number: ";
    cin >> x;

    if (x < 0) {
        cout << "Negative";
    } else {
        cout << "Positive";
    }

    return 0;
}

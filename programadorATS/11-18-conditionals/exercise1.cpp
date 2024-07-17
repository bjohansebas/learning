#include <iostream>

using namespace std;

int main()
{
    int number, data = 5;

    cout << "Insert a number: ";
    cin >> number;

    if (number == data) {
        cout << "The number is " << number;
    } else {
        cout << "The number is different of " << number << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "Insert your age: ";
    cin >> age;

    if (age >= 18 && age <= 25) {
        cout << "Your age is between 18-25";
    } else {
        cout << "Your age isn't between 18-25";
    }

    return 0;
}

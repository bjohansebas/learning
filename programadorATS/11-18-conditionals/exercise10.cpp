#include <iostream>

using namespace std;

int main()
{
    int x, y, z, w;

    cout << "Insert 3 numbers: ";
    cin >> x >> y >> z;

    cout << "Insert another number: ";
    cin >> w;

    if (w == x || w == y || w == z) {
        cout << "Your last number is repeat";
    } else {
        cout << "Your last number isn't repeat";
    }

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Insert a number: ";
    cin >> x;

    for (int i = 0; i <= 20; i++) {
        int result = i * x;
        cout << x << "*" << i << " = " << result << endl;
    }

    return 0;
}

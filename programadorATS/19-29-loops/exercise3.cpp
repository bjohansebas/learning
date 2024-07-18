#include <iostream>

using namespace std;

int main()
{

    int result = 0, square;

    for (int i = 0; i <= 10; i++) {
        square = i * i;
        result += square;
    }

    cout << result << endl;

    return 0;
}

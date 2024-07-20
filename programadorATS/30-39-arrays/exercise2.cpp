#include <iostream>

using namespace std;

int main()
{
    int numbers[5] = { 3, 4, 6, 7, 8 };
    int result = 1;

    for (int i = 0; i < 5; i++) {
        result *= numbers[i];
    }

    cout << "Result: " << result << endl;

    return 0;
}

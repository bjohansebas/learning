#include <iostream>

using namespace std;

int main()
{
    char words1[] = { 'a', 'b', 'c', 'e' };
    char words2[] = { 'f', 'g', 'h', 'i' };

    char word3[8];

    for (int i = 0; i < 4; i++) {
        word3[i] = words1[i];
    }

    for (int i = 4; i < 8; i++) {
        word3[i] = words2[i - 4];
    }

    cout << word3;

    return 0;
}

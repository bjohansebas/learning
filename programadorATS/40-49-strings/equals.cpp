#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char word[] = "heyyyy";
    char word2[] = "heyyy";

    if (strcmp(word, word2) == 0) {
        cout << "Equals";
    }

    return 0;
}

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char word[] = "hello";
    char word2[] = "word";
    char word3[30];

    strcpy(word3, word);
    strcat(word3, word2);

    cout << word3;

    return 0;
}

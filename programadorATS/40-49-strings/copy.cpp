#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char word[] = "heyyyy";
    char word2[strlen(word)];

    strcpy(word2, word);

    cout << "Word2: " << word2 << " Word: " << word;

    return 0;
}

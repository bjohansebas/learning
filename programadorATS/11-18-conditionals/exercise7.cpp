#include <iostream>

using namespace std;

int main()
{
    char word;

    cout << "Insert a word: ";
    cin >> word;

    switch (word) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "This word is a lowercase vowel";
        break;
    default:
        cout << "This word isn't a lowercase vowel";
    }

    return 0;
}

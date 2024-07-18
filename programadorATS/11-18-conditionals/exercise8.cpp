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
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "This word is a uppercase vowel";
        break;
    default:
        cout << "This word isn't a vowel";
    }

    return 0;
}

#include <iostream>
#include <map>
#include <string.h>

using namespace std;

int main()
{
    char phrase[30];

    map<string, int> wovels = {
        { "a", 0 },
        { "e", 0 },
        { "i", 0 },
        { "o", 0 },
        { "u", 0 }
    };

    cout << "Insert a phrase: ";

    cin.getline(phrase, 30, '\n');
    for (int i = 0; i < strlen(phrase); i++) {
        switch (phrase[i]) {
        case 'a':
            wovels["a"]++;
            break;
        case 'e':
            wovels["e"]++;
            break;
        case 'i':
            wovels["i"]++;
            break;
        case 'o':
            wovels["o"]++;
            break;
        case 'u':
            wovels["u"]++;
            break;
        }
    }

    cout << "vowel a: " << wovels["a"] << endl;
    cout << "vowel e: " << wovels["e"] << endl;
    cout << "vowel i: " << wovels["i"] << endl;
    cout << "vowel o: " << wovels["o"] << endl;
    cout << "vowel u: " << wovels["u"] << endl;

    return 0;
}

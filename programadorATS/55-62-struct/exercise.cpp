#include <iostream>
#include <string.h>

using namespace std;

struct Runner {
    char name[20];
    int age;
    char gender[10];
    char club[20];
} c1;

int main()
{
    char category[10];

    cout << "Insert name:";
    cin.getline(c1.name, 20, '\n');

    cout << "Insert age:";
    cin >> c1.age;

    cin.ignore();

    cout << "Insert gender:";
    cin.getline(c1.gender, 10, '\n');

    cout << "Insert club:";
    cin.getline(c1.club, 20, '\n');

    if (c1.age <= 18) {
        strcpy(category, "Juvenil");
    } else if (c1.age <= 40) {
        strcpy(category, "Senior");
    } else {
        strcpy(category, "Veterano");
    }

    cout << "Datos del corredor: " << endl;
    cout << "Name: " << c1.name << endl;
    cout << "Age: " << c1.age << endl;

    cout << "Sexo: " << c1.gender << endl;
    cout << "Club: " << c1.club << endl;
    cout << "Category: " << category << endl;

    return 0;
}

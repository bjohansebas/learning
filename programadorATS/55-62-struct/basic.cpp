#include <iostream>

using namespace std;

struct Person {
    char name[20];
    int age;
} person, person2 = { "Ruperto", 20 };

int main()
{

    cout << "Name: ";
    cin.getline(person.name, 20, '\n');

    cout << "\nAge: ";
    cin >> person.age;

    cout << "Name of first person: " << person.name << endl;
    cout << "Age of first person: " << person.age << endl;

    cout << "\nName of second person: " << person2.name << endl;
    cout << "Age of second person: " << person2.age << endl;

    return 0;
}

#include <iostream>

using namespace std;

struct info_address {
    char address[30];
    char city[20];
    char provincia[20];
};

struct empleado {
    char name[20];
    struct info_address adr_empleado;
    double salary;
} empleados[2];

int main()
{
    for (int i = 0; i < 2; i++) {
        cout << "Insert your name: ";
        cin.getline(empleados[i].name, 20, '\n');

        cout << "Insert your address: ";
        cin.getline(empleados[i].adr_empleado.address, 20, '\n');

        cout << "Insert your city: ";
        cin.getline(empleados[i].adr_empleado.city, 20, '\n');

        cout << "Insert your provincia: ";
        cin.getline(empleados[i].adr_empleado.provincia, 20, '\n');

        cout << "Insert your salary: ";
        cin >> empleados[i].salary;

        cin.ignore();
    }

    for (int i = 0; i < 2; i++) {
        cout << "Name: " << empleados[i].name << endl;

        cout << "Address: " << empleados[i].adr_empleado.address << endl;

        cout << "City: " << empleados[i].adr_empleado.city << endl;

        cout << "Provicia: " << empleados[i].adr_empleado.provincia << endl;

        cout << "Salary: " << empleados[i].salary << endl;
    }

    return 0;
}

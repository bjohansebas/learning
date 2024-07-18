#include <iostream>

using namespace std;

int main()
{
    int initial = 1000, opc;
    float input, saldo = 0;

    cout << "\tWelcome to your bank" << endl;
    cout << "1. Insert money" << endl;
    cout << "2. Drop money" << endl;
    cout << "3. Salir" << endl;
    cout << "Opcion: ";

    cin >> opc;

    switch (opc) {
    case 1:
        cout << "Insert the count of money to insert: ";
        cin >> input;
        saldo = initial + input;
        cout << "Your money: " << saldo;
        break;
    case 2:
        cout << "Insert the count of money to drop: ";
        cin >> input;
        if (input > initial) {
            cout << "You don't have money";
        } else {
            saldo = initial - input;
            cout << "Your money: " << saldo;
        }
        break;
    case 3:
        break;
    }

    cout << endl;

    return 0;
}

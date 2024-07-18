#include <iostream>

using namespace std;

int main()
{
    int x, y, z, m_number = 0;

    cout << "Insert 3 numbers: ";
    cin >> x >> y >> z;

    if (x == y && x == z) {
        cout << "Los tres numeros son iguales";
    }
    if (x > m_number) {
        m_number = x;
    }
    if (y > m_number) {
        m_number = y;
    }
    if (z > m_number) {
        m_number = z;
    }

    cout << "El mayor numero es: " << m_number;

    return 0;
}

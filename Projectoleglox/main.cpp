#include <windows.h>
#include "complex.h"

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    PairRange r;
    r.Read();
    r.Display();

    double x;
    cout << "��������� �����: ";
    cin >> x;

    if (r.rangecheck(x))
        cout << "������� �� ��������" << endl;
    else
        cout << "�� ������� �� ��������" << endl;

    return 0;
}
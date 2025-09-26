#include <windows.h>
#include "complex.h"

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    PairRange r;
    r.Read();
    r.Display();

    double x;
    cout << "Перевірити число: ";
    cin >> x;

    if (r.rangecheck(x))
        cout << "Входить до діапазону" << endl;
    else
        cout << "Не входить до діапазону" << endl;

    return 0;
}
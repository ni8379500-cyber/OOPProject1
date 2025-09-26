#include "complex.h"

bool PairRange::Init(double a, double b) {
    if (a < b) {
        first = a;
        second = b;
        return true;
    }
    else {
        cout << "Щось не так, ліва межа має бути меншою, ніж права" << endl;
        return false;
    }
}

void PairRange::Read() {
    double a, b;
    do {
        cout << "Ліва межа: ";
        cin >> a;
        cout << "Права межа: ";
        cin >> b;
    } while (!Init(a, b));
}

void PairRange::Display() {
    cout << "Діапазон: [" << first << "; " << second << "]" << endl;
}

bool PairRange::rangecheck(double x) {
    return (x >= first && x <= second);
}

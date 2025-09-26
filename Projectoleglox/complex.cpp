#include "complex.h"

bool PairRange::Init(double a, double b) {
    if (a < b) {
        first = a;
        second = b;
        return true;
    }
    else {
        cout << "���� �� ���, ��� ���� �� ���� ������, �� �����" << endl;
        return false;
    }
}

void PairRange::Read() {
    double a, b;
    do {
        cout << "˳�� ����: ";
        cin >> a;
        cout << "����� ����: ";
        cin >> b;
    } while (!Init(a, b));
}

void PairRange::Display() {
    cout << "ĳ������: [" << first << "; " << second << "]" << endl;
}

bool PairRange::rangecheck(double x) {
    return (x >= first && x <= second);
}

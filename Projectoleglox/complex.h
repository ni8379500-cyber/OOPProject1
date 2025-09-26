#pragma once
#include <iostream>
using namespace std;

struct PairRange {
    double first;
    double second;

    bool Init(double a, double b);
    void Read();
    void Display();
    bool rangecheck(double x);
};


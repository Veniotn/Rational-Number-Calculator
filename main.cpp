#include <iostream>
#include "RationalNumber.h"
using namespace std;
int main() {
    RationalNumber test = RationalNumber(1,5);

    RationalNumber test2 = RationalNumber(2,3);

    RationalNumber test3 = test2 - test;

    cout << test3.getNumerator() << " " << test3.getDenominator() << endl;

    return 0;
}

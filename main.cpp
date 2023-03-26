#include <iostream>
#include "RationalNumber.h"
using namespace std;
int main() {
    RationalNumber test = RationalNumber(7,13);

    RationalNumber test2 = RationalNumber(8,13);

    RationalNumber test3 = RationalNumber(4,-8);

//    RationalNumber test4 =  test2  test;

bool testbool = test < test2;


    cout << testbool;

    return 0;
}

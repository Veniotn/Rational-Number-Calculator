
#include "RationalNumber.h"
#include "util.h"
using namespace std;
int main()
{

    //prompt for input and validate it
    string inputOne = Util::getInput();
    string inputTwo = Util::getInput();

    //create two rational number objects based off of the inputs and declare another for testing.
    RationalNumber rationalNumber1 = RationalNumber(inputOne);
    RationalNumber rationalNumber2 = RationalNumber(inputTwo);
    RationalNumber rationalTester;

    //Operator tests
    //Addition test
    rationalTester =  rationalNumber1 + rationalNumber2;
    cout << rationalTester << endl;
    //Subtraction test
    rationalTester = rationalNumber1 - rationalNumber2;
    cout << rationalTester << endl;
    //multiplication test
    rationalTester =  rationalNumber1 * rationalNumber2;
    cout << rationalTester << endl;
    //Division test
    rationalTester =  rationalNumber1 / rationalNumber2;
    cout << rationalTester << endl;

    //bool tests
    //> test
    cout << (rationalNumber1 > rationalNumber2) << endl;
    //< test
    cout << (rationalNumber1 < rationalNumber2) << endl;
    //== test
    cout << (rationalNumber1 == rationalNumber2) << endl;


    //other constructor tests.
    RationalNumber defaultConstructor     = RationalNumber();
    cout << "default constructor:" << endl;
    cout << defaultConstructor.getNumerator() << "/" << defaultConstructor.getDenominator() << endl;

    RationalNumber twoParamConstructor    = RationalNumber(7,13);
    cout << "two param constructor:" << endl;
    cout << twoParamConstructor.getNumerator() << "/" << twoParamConstructor.getDenominator() << endl;

    RationalNumber wholeNumberConstructor = RationalNumber(8);
    cout << "whole number one param constructor:" << endl;
    cout << wholeNumberConstructor.getNumerator() << "/" << wholeNumberConstructor.getDenominator() << endl;


    return 0;
}

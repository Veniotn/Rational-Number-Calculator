
//
// Created by nick on 3/24/2023.
//

#ifndef INC_2___RATIONALS_RATIONALNUMBER_H
#define INC_2___RATIONALS_RATIONALNUMBER_H
#include <string>
#include <iostream>

using namespace std;
class RationalNumber {

private:
    int numerator, denominator;

public:

    //constructors
    //default
    RationalNumber():numerator(0), denominator(1){}
    //Two args
    RationalNumber(int numerator, int denominator): numerator(numerator), denominator(denominator){}


    RationalNumber(int wholeNumber);

    RationalNumber(string stringInput);


    //overloaded basic math operators
    RationalNumber  operator + (RationalNumber& rightNumber);
    RationalNumber  operator - (RationalNumber& rightNumber);
    RationalNumber  operator * (RationalNumber& rightNumber);
    RationalNumber  operator / (RationalNumber& rightNumber);

    //overloaded boolean operators
    bool operator >  (RationalNumber& rightNumber);
    bool operator <  (RationalNumber& rightNumber);
    bool operator == (RationalNumber& rightNumber);


    //overloaded print operator
    friend ostream& operator << (ostream & output, RationalNumber& rationalNumber);


    //methods
    void simplifyFraction();

    //getters and setters
    int getNumerator()
    {
        return numerator;
    }

    void setNumerator(int numerator) {
        RationalNumber::numerator = numerator;
    }

    int getDenominator()
    {
        return denominator;
    }

    void setDenominator(int denominator) {
        RationalNumber::denominator = denominator;
    }


};


#endif //INC_2___RATIONALS_RATIONALNUMBER_H

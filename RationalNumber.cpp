//
// Created by nick on 3/24/2023.
//
#include <numeric>
#include "RationalNumber.h"

RationalNumber::RationalNumber(string stringInput)
{

};


RationalNumber::RationalNumber(int wholeNumber)
{

}

void RationalNumber::simplifyFraction()
{
    //get the greatest common denominator, then divide both the numerator and operator by the gcd.
    int greatestDenominator = gcd(this->numerator, this->denominator);

    numerator   = numerator   / greatestDenominator;
    denominator = denominator / greatestDenominator;

    //if either numerator or denominator are negative, negate them and add the negative property to the object
    if (numerator < 0 || denominator < 0)
    {
        numerator   = numerator   < 0 ? (numerator   * -1) : numerator;
        denominator = denominator < 0 ? (denominator * -1) : denominator;
    }

}



//Math operators
RationalNumber RationalNumber::operator+(RationalNumber &rightNumber)
{
    int  numerator, denominator;
    cout << "+ operator firing." << endl;

    //Uses the object that called the methods properties and the other RA.
    numerator = (this->numerator * rightNumber.denominator) + (rightNumber.numerator * this->denominator);
    denominator = this->denominator * rightNumber.denominator;



    return RationalNumber(numerator,denominator);
}

RationalNumber RationalNumber::operator-(RationalNumber &rightNumber)
{
    int numerator, denominator;
    cout << "- operator firing." << endl;

    //same steps as + operator, just subtraction
    numerator = (this->numerator * rightNumber.denominator) - (rightNumber.numerator * this->denominator);
    denominator = this->denominator * rightNumber.denominator;


    //Return new Rational number
    return RationalNumber(numerator,denominator);
}


RationalNumber RationalNumber::operator*(RationalNumber& rightNumber)
{
    int numerator, denominator;

    cout << "* operator firing" << endl;

    //multiply the numerator of this fraction with the numerator of the right fraction,
    numerator   = (this->numerator * rightNumber.numerator);

    //multiply the denominator of this fraction with the denominator of the right fraction.
    denominator = (this->denominator * rightNumber.denominator);


    //return the new rational number
    return {numerator,denominator};
}


RationalNumber RationalNumber::operator/(RationalNumber &rightNumber)
{
    int numerator, denominator;
    cout << "/ operator method firing." << endl;

    numerator = this->numerator * rightNumber.denominator;
    denominator = this->denominator * rightNumber.numerator;

    return {numerator,denominator};
}
//end math operators.

//boolean operators
bool RationalNumber::operator<(RationalNumber &rightNumber)
{
    cout << "< operator firing" << endl;
    return (this->numerator * rightNumber.denominator) < (rightNumber.numerator * this->denominator);
}

bool RationalNumber::operator>(RationalNumber &rightNumber)
{
    cout << "> operator firing" << endl;
    return (this->numerator * rightNumber.denominator) > (rightNumber.numerator * this->denominator);
}

bool RationalNumber::operator==(RationalNumber &rightNumber)
{
    cout << "== operator firing" << endl;
    return (this->numerator * rightNumber.denominator) == (rightNumber.numerator * this->denominator);
}
//end boolean operators.

//output overload.
ostream& operator<<(std::ostream & output, RationalNumber& rationalNumber)
{
    output << "<< overload firing " << endl;

    if (rationalNumber.numerator < 0 || rationalNumber.denominator < 0 )
    {
        output << "-";
    }

    rationalNumber.simplifyFraction();
    output << rationalNumber.numerator << "/" << rationalNumber.denominator;


    return output;
}

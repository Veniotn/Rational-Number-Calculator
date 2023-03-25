//
// Created by nick on 3/24/2023.
//

#include "RationalNumber.h"

RationalNumber::RationalNumber(string stringInput)
{

};


RationalNumber::RationalNumber(int wholeNumber)
{

}

int RationalNumber::lowestCommonDenominator(int denominatorOne, int denominatorTwo) const {
    const int ZERO = 0;
    //get the larger of the two denominators
    int currentDenominator = (denominatorOne > denominatorTwo) ? denominatorOne : denominatorTwo;

    while (true)
    {
        //check if the current denominator evenly divides into both denominators
        if ((currentDenominator % denominatorOne) == ZERO && (currentDenominator % denominatorTwo) == ZERO)
        {
            //If the both divide evenly, we have found the lowest common denominator and we can return it.
            return currentDenominator;
        }
        //else add one to the current denominator and check again.
        currentDenominator++;
    }

}




RationalNumber RationalNumber::operator+(const RationalNumber &rightNumber) const
{
    int  numerator, denominator;


    cout << " + Operator method fired." << endl;
    //Steps to add rational numbers:
    //1. find common denominator.
    denominator  = RationalNumber::lowestCommonDenominator(this->denominator, rightNumber.denominator);
    //2. Add the two top numbers together
    numerator = this->numerator + rightNumber.numerator;


    //return the new rational number
    return RationalNumber(numerator, denominator);
}

RationalNumber RationalNumber::operator-(const RationalNumber &rightNumber)const
{
    int numerator, denominator;
    cout << " - Operator fired." << endl;

    //same steps as + operator, just subtracting the numerators at the end.
    denominator = RationalNumber::lowestCommonDenominator(this->denominator, rightNumber.denominator);
    numerator = this->numerator - rightNumber.numerator;


    //Return new Rational number
    return RationalNumber(numerator,denominator);
}


//RationalNumber operator * (const RationalNumber& rightNumber)
//{
//
//}


//RationalNumber operator / (const RationalNumber& rightNumber)
//{
//
//}

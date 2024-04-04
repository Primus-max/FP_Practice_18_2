#include "func_headers.h"
#include "message_utils.h"
#include <cstring>
#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

void reduceFraction(Fraction& fraction) {
    int divisor = gcd(fraction.numerator, fraction.denominator);
    fraction.numerator /= divisor;
    fraction.denominator /= divisor;
}

Fraction addFractions(const Fraction& a, const Fraction& b) {
    Fraction result;
    result.numerator = a.numerator * b.denominator + b.numerator * a.denominator;
    result.denominator = a.denominator * b.denominator;
    reduceFraction(result);
    return result;
}

Fraction subtractFractions(const Fraction& a, const Fraction& b) {
    Fraction result;
    result.numerator = a.numerator * b.denominator - b.numerator * a.denominator;
    result.denominator = a.denominator * b.denominator;
    reduceFraction(result);
    return result;
}

Fraction multiplyFractions(const Fraction& a, const Fraction& b) {
    Fraction result;
    result.numerator = a.numerator * b.numerator;
    result.denominator = a.denominator * b.denominator;
    reduceFraction(result);
    return result;
}

Fraction divideFractions(const Fraction& a, const Fraction& b) {
    Fraction result;
    result.numerator = a.numerator * b.denominator;
    result.denominator = a.denominator * b.numerator;
    reduceFraction(result);
    return result;
}

void printFraction(const Fraction& fraction) {
    cout << fraction.numerator << "/" << fraction.denominator;
}
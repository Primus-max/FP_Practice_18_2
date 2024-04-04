#ifndef FUNC_HEADERS_H
#define FUNC_HEADERS_H


struct CustomRectangle {
    int x;
    int y;
    int width;
    int height;
};

void printRectangle(CustomRectangle& rect);

struct  Point{
    int x;
    int y;
};

void calcDistanceBetweenPoints(Point& point);


struct Fraction {
    int numerator;   
    int denominator; 
};


// Функция для сокращения дроби
void reduceFraction(Fraction& fraction);

// Функция для сложения двух дробей
Fraction addFractions(const Fraction& a, const Fraction& b);

// Функция для вычитания одной дроби из другой
Fraction subtractFractions(const Fraction& a, const Fraction& b);

// Функция для умножения двух дробей
Fraction multiplyFractions(const Fraction& a, const Fraction& b);

// Функция для деления одной дроби на другую
Fraction divideFractions(const Fraction& a, const Fraction& b);

// Функция для вывода дроби в формате "числитель/знаменатель"
void printFraction(const Fraction& fraction);
#endif 

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


// ������� ��� ���������� �����
void reduceFraction(Fraction& fraction);

// ������� ��� �������� ���� ������
Fraction addFractions(const Fraction& a, const Fraction& b);

// ������� ��� ��������� ����� ����� �� ������
Fraction subtractFractions(const Fraction& a, const Fraction& b);

// ������� ��� ��������� ���� ������
Fraction multiplyFractions(const Fraction& a, const Fraction& b);

// ������� ��� ������� ����� ����� �� ������
Fraction divideFractions(const Fraction& a, const Fraction& b);

// ������� ��� ������ ����� � ������� "���������/�����������"
void printFraction(const Fraction& fraction);
#endif 

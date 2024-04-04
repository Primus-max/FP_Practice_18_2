#include "func_headers.h"
#include "message_utils.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	CustomRectangle rect;
	cout << "Укажите стороны прямоугольника, высота и ширина" << endl;
	cin >> rect.height >> rect.width;
	cout << "Укажите координаты положения прямоугольника" << endl;
	cin >> rect.x >> rect.y;
	printRectangle(rect);

	cout << endl;

	Point point;
	cout << "Укажите две точки для расчёта расстояния между ними, x и y" << endl;
	cin >> point.x >> point.y;
	calcDistanceBetweenPoints(point);

    cout << "Операции с дробями: ";

    Fraction fraction1 = { 3, 4 };
    Fraction fraction2 = { 1, 2 };

    // Сложение дробей
    Fraction sum = addFractions(fraction1, fraction2);
    cout << "Сумма: ";
    printFraction(sum);
    cout << endl;

    // Вычитание дробей
    Fraction difference = subtractFractions(fraction1, fraction2);
    cout << "Разность: ";
    printFraction(difference);
    cout << endl;

    // Умножение дробей
    Fraction product = multiplyFractions(fraction1, fraction2);
    cout << "Произведение: ";
    printFraction(product);
    cout << endl;

    // Деление дробей
    Fraction quotient = divideFractions(fraction1, fraction2);
    cout << "Частное: ";
    printFraction(quotient);
    cout << endl;

	return 0;
}


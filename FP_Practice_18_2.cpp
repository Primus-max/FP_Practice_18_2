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

	return 0;
}


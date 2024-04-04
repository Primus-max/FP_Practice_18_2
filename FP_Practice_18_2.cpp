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
	return 0;
}


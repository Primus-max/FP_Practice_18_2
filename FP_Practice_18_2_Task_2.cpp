#include "func_headers.h"
#include "message_utils.h"
#include <cstring>
#include <iostream>

using namespace std;

void calcDistanceBetweenPoints(Point& point) {

	cout << "Расстояние между точками: " << sqrt(pow(point.x, 2) + pow(point.y, 2)) << endl;
}
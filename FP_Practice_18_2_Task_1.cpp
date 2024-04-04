#include "func_headers.h"
#include "message_utils.h"
#include <cstring>
#include <iostream>

using namespace std;

void setRectangleByCoordinates(int x, int y) {

	for (size_t i = 0; i < x; i++)
		cout << '\n';

	for (size_t j = 0; j < y; j++)
		cout << '\t';

}


void printRectangle(CustomRectangle& rect) {	

	setRectangleByCoordinates(rect.x, rect.y);

	// ����� ������� ������� ��������������
	for (int i = 0; i < rect.width; ++i) cout << "-";
	
	cout << endl;

	// ����� ������� ������� ��������������
	for (int i = 0; i < rect.height - 2; ++i) {
		setRectangleByCoordinates(0, rect.y);
		cout << "|";

		for (int j = 0; j < rect.width - 2; ++j) 			
			cout << " ";
		
		cout << "|" << endl;
	}

	setRectangleByCoordinates(0, rect.y);

	// ����� ������ ������� ��������������
	for (int i = 0; i < rect.width; ++i) 
		cout << "-";	
}
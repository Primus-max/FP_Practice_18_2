
#include "message_utils.h"
#include <iostream>
using namespace std;

// ����� ������ ��� �������
constexpr auto RESET = "\033[0m"      /* ������ */;
constexpr auto RED = "\033[31m"      /* ������� */;
constexpr auto YELLOW = "\033[33m";     /* Ƹ���� */;


void Error(const char* message) {
	cerr << RED << "[ERROR] " << message << RESET << endl;
}

void Info(const char* message) {
	cout << YELLOW << "[INFO] " << message << RESET << endl;
}
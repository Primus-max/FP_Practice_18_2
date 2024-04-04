#include "func_headers.h"
#include "message_utils.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    CustomRectangle rect = {2, 4, 20, 7};
    printRectangle(rect);
    
    

    return 0;
}


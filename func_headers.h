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
#endif 

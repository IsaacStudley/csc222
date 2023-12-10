#include <iostream>
#include <string>
#include <cmath>
#include <assert.h>
using namespace std;

class Point
{
    double x, y;

public:
    Point() {
        x = 0; 
        y = 0;
    }

    Point(double a, double b) {
        x = a; 
        y = b;
    }

    int get_x();
    int get_y();
    string to_string();

    Point operator + (const Point& p);
    Point operator - (const Point& p);
    double distance(Point p2);

    friend ostream & operator<<(ostream &os, const Point &c);
};

Point operator * (int scalar, Point &p1);
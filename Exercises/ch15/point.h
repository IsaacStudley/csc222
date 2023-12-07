#include <iostream>
#include <string>
#include <math.h>
#include <assert.h>
using namespace std;

class Point {
    double x, y;

    Point(int, int);

    //friend ostream& operator+(ostream& os, const Point& p1); //
   //friend ostream& operator-(ostream& os, const Point& p1); //
   Point operator+(const int ); //
   Point operator-(const int ); //
};
#include <iostream>
#include <string>
#include <math.h>
#include <assert.h>
#include "point.h"
using namespace std;

Point::Point(int a, int b) {
    x = a; y = b;
    
}

Point operator+(const int a)
{
    x+=a;
    y+=a;
    //return p1; 
} // overloading output, though I am 

Point operator-(const int a)
{
    x-=a;
    y-=a;
    //return p1; 
} // overloading output 
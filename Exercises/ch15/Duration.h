#include <iostream>
#include <string>
using namespace std;

class Duration
{
    double x, y;
    string str;
public:
    Duration() {
        
    }

    Duration(int a) {
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
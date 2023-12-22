#include <iostream>
#include <string>
using namespace std;

class Duration
{
    double x, y;
    int sec;
    string str;
public:
    Duration(); 

    Duration(int a); 

    int days();
    int hours();
    int minutes();
    int seconds();

    string to_string();

    Duration operator + (Duration P);
    Duration operator - (Duration P);
    
    //friend ostream & operator<<(ostream &os, const Duration &c);
};

//Point operator * (int scalar, Point &p1);
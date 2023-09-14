#include <iostream>
#include <math.h>
using namespace std;

//if (age > 16 && age < 65) {    
//        cout << "age is within the normal working age." << endl;    
//}

double distance(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    double dsquared = dx * dx + dy * dy;
    double result = sqrt(dsquared);
    return result;
}

int main()
{
    cout << distance(1.0,1.0,2.0,2.0) << endl; 

    return 0;
}
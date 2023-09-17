#include <iostream>
#include <math.h>
using namespace std;


int main()
{
double x = 1.0;
while (x < 16.0) {
    cout << x << "\t" << x*x << "\n";
    x = x + 1.0;
}
return 0;
}
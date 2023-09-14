#include <iostream>
#include <math.h>
using namespace std;

int overloaded_function(){
return 2;
}
int overloaded_function(int z){
return (z*2);
}
int overloaded_function(int z, int x){
return (z*x);
}
int overloaded_function(double z){
return (int(z));
}
int overloaded_function(double z, double x){
return (z/x);
}

int main()
{
    double a = 8.0;
    double b = 2.0;
    double c = overloaded_function(a, b);
    cout << overloaded_function(overloaded_function(c),overloaded_function(overloaded_function(),overloaded_function())) << endl; 
//should print "16"
    return 0;
}
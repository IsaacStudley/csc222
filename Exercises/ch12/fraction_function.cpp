#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;



int main(){

Time current_time = {9, 14, 30.0};
current_time.increment(500.0);
current_time.print();

return 0;
}
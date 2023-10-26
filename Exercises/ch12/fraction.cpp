#include <iostream>
#include <math.h>
#include <fraction.h>
using namespace std;


Fraction::Fraction(int h, int m)
{
  nume = h; deno = m; 
}
Fraction::Fraction()
{
  nume = 0; deno = 1; 
}

void Fraction::minus(){

   nume --;
}


int main(){

Fraction frac = {9, 14};
frac.minus();
frac.print();

return 0;
}
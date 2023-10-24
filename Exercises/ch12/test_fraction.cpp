#include <iostream>
#include <math.h>
using namespace std;

struct Fraction {
    int nume, deno;
   

    void print();
    
};

Fraction::Fraction(int h, int m)
{
  nume = h; deno = m; 
}
Fraction::Fraction()
{
  nume = 0; deno = 1; 
}

void minus::Fraction(){

    Franction.nume --;
}
}

int main(){

Fraction frac = {9, 14};
frac.minus();
frac.print();

return 0;
}
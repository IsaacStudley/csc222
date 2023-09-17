#include <iostream>
#include <math.h>
using namespace std;

 int g = 0; 

void sequence(int n)
{
   while (n != 1) {
       cout << n << endl;
       if (n%2 == 0) {      // n is even
           n = n / 2;
       } else {             // n is odd
           n = n * 3 + 1;
           if (n>g){
            g = n;
           }
       }
   }
}

int main()
{
  
    for(int i = 10;i<100;i++){  
sequence(i);
    }
    cout << g << endl; //The largest number reached was 9232, while calling with 95.
// With this for loop, it always terminates eventually.
return 0;
}
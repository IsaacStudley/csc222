#include <iostream>
#include <math.h>
using namespace std;

void compare(int n,int m) { //my function for exercise #3
    if (n == m) { 
        cout << n << " is equal to " << m << endl;
    } else if(n>m){
        cout << n << " is greater than " << m << endl;
    }else if(n<m){
        cout << n << " is less than " << m << endl;
    }
}

void countdown(int n) {
    if (n == 0) { //this could have n<=0 to avoid infinite recursion
        cout << "Blastoff!" << endl;
    } else {
        cout << n << endl;
        countdown(n-1);
    }
}

int main()
{
    countdown(-1); //this causes an infinite recursion 
    return 0;
}
#include <iostream>
#include <math.h>
using namespace std;

void lool_forever(int n) {
    while (true) {
        cout << "n is now " << n << "." << endl;
        n = n + 1;
    }
}

void recurse_forever(int n) {
    cout << "n is now " << n << "." << endl;
    recurse_forever(n + 1);
}

int main()
{
recurse_forever(1); //These don't terminate, 
                    //for this one, the stack just never ends
    return 0; 
}
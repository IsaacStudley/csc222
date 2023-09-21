#include <iostream>
#include <math.h>
using namespace std;
int z = 0;
void newLine()
{
    cout << endl;
}

int main()
{
    cout << "First Line." << endl;
   z = newLine() + 7; //vs code redlines this part as well
    cout << "Second Line." << endl;
    return 0;
}

//using a void function as a varible doent work.


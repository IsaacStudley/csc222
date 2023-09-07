#include <iostream>
using namespace std;
int main()
{

int n = 5;
int m = 7;
int z = 7;
cout << "The product of " << n << " and " << m << " is ";
cout << n * m << "." << endl; //1

n = 4;
m = 2;
cout << "The sum of " << n << " and " << m << " is ";
cout << n + m << "." << endl; //2

n = 10;
m = 2;
cout << "The difference of " << n << " and " << m << " is ";
cout << n - m << "." << endl; //3

n = 10;
m = 2;
z = 7;
cout << "The sum of " << n << " and " << m << " and " << z << " is ";
cout << n + m + z << "." << endl; //4

n = 10;
m = 2;
z = 3;
cout << "The difference of the sum of " << n << " and " << m << " and " << z << " is ";
cout << (n + m)-z << "." << endl; //5

n = 10;
m = 2;
z = 3;
cout << "The sum of the product of " << n << " and " << m << " and " << z << " is ";
cout << (n * m)+z << "." << endl; //6

n = 2;
m = 10;
z = 3;
cout << "The product of " << n << " and " << m << " and " << z << " is ";
cout << n * m * z << "." << endl; //7

n = 4;
m = 5;
z = 7;
cout << "The difference of the product of " << n << " and " << m << " and " << z << " is ";
cout << (n * m) - z << "." << endl; //8

n = 10;
m = 2;
z = 7;
cout << "The difference of  " << n << " and " << m << " and " << z << " is ";
cout << n - m - z << "." << endl; //9

n = 10;
m = 2;
z = 7;
cout << "The quotient of  " << n << " and " << m << " is ";
cout << n/m << "." << endl; //10

}
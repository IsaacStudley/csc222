#include <iostream>
#include<array> 
#include <string>
using namespace std;

int str_len(char s[])
{
   return strlen(s);
}

void shuffle(int arr[], int size) //there isnt a way to get array size after its been passed on
{
    srand(time(NULL)); //there is some weirdness with the rng
    //int al = sizeof(arr)/sizeof(arr[0]);
    int hold[size];
    int sw[size];
    for (int i = 0; i < size; i++) {
     hold[i]=0;
     sw[i]=arr[i];
    }
    int se = 0;
    

for (int i = 0; i < size; i++) {
       // cout << "Random number " << i << ": " << rand() %10 << endl;
se = rand()%size;
while(hold[se]==1){
   se = rand()%size;
}
       hold[se]=1;
       arr[i] = sw[se];
    }


}

void wont_swap(char a, char b)
{
    cout << "a: " << a << "  b: " << b << endl;
    cout << "address of a: " << long(&a) << endl;
    cout << "address of b: " << long(&b) << endl;
    char temp = a;
    a = b;
    b = temp;
    cout << "a: " << a << "  b: " << b << endl;
}

void will_swap(char& a, char& b)
{
    cout << "a: " << a << "  b: " << b << endl;
    cout << "address of a: " << long(&a) << endl;
    cout << "address of b: " << long(&b) << endl;
    char temp = a;
    a = b;
    b = temp;
    cout << "a: " << a << "  b: " << b << endl;
}

int main()
{
    int nums[7] = {0,1,2,3,4,5,6};
    
    char x = 'x';
    char y = 'y';

    cout << "x: " << x << "  y: " << y << endl;
    cout << "address of x: " << long(&x) << endl;
    cout << "address of y: " << long(&y) << endl;
    cout << "Calling wont_swap..." << endl;
    wont_swap(x, y);
    cout << "x: " << x << "  y: " << y << endl;
    cout << "Calling will_swap..." << endl;
    will_swap(x, y);
    cout << "x: " << x << "  y: " << y << endl;

    shuffle(nums, 7);
  for (int i = 0; i < 7; i++) {
    cout<< nums[i] <<" "; 
  }
    return 0;  
}
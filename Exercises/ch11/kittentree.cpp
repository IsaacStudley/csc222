#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <list>
#include <vector>
using namespace std;


void tree(vector<string> branches) {
    string kitten_branch, input, start, brancha;

    while(input != "-1" ) {
        getline(cin, input);
        branches.push_back(input);
        cout << input;
    } 
    int arr[13][10] = {
{14},
{25, 24},
{4, 3, 1, 2},
{13, 9, 4, 11},
{10, 20, 8, 7},
{32, 10, 21},
{23, 13, 19, 32, 22},
{19, 12, 5, 14, 17, 30},
{14, 6, 15, 16},
{30, 18, 31, 29},
{24, 23, 26},
{26, 27, 28},
{-1}};
    int root = arr[0][0];
    int path[7];
    for (int i = 0; i < 7; i++) {
        path[i]=0;
    }
    path[0] = root;
    int st = 1;

    for (int i = 1; i < 13; i++) {
        for (int k = 1; k < 10; k++) {
if(arr[i][k] == path[st]){
    st ++;
path[st] = arr[i][0];
i = 0;
k = 0;
}
    }
}

}

int main(){
    //vector<string> branches;
    //ree(branches);

     int arr[13][10] = {
{14},
{25, 24},
{4, 3, 1, 2},
{13, 9, 4, 11},
{10, 20, 8, 7},
{32, 10, 21},
{23, 13, 19, 32, 22},
{19, 12, 5, 14, 17, 30},
{14, 6, 15, 16},
{30, 18, 31, 29},
{24, 23, 26},
{26, 27, 28},
{-1}};
    int root = arr[0][0];
    int path[7];
    for (int i = 0; i < 7; i++) {
        path[i]=0;
    }
    path[0] = root;
    int st = 0;

    for (int i = 1; i < 13; i++) {
        for (int k = 1; k < 10; k++) {
if(arr[i][k] == path[st]){
    st ++;
path[st] = arr[i][0];
i = 0;
k = 0;
}
    }
}

    for (int i = 0; i < 7; i++) {
    cout<< path[i] <<" "; 
  }
    return 0;
}

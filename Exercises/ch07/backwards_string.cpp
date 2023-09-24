#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//void count_letters(string s, char i){
//string state = s;
//int count = 0;
//int index = 0;
//while (index < state.length()) {
//    if (state[index] == i) {
//        count = count + 1;
//    }
//    index = index + 1;
//}
//cout << count << endl;
//}

void count_letters(string s, char i){

string state = s;
char letter = i;
int count = 0;
int index = 0;

cout << state.length() << endl;

while (index < state.length()) {    
    index = state.find(letter, index);
    count = count + 1;
    if (index == -1) {
        index = state.length();
         count = count - 1;
        //cout << count << endl;
    }
      index = index+1;
}
cout << count << endl;

}

void backwards(string s){
 string fruit = s;

int size = fruit.length();
char last = fruit[size-1];

int index = size-1;
while (index >= 0) {
    char letter = fruit[index];
    cout << letter;
    index = index - 1;
}

}

string string_to_upper(string s){
string state;
int i = 0;
char cr =' ';
while (i < state.length()) {
   //const char *cr = s.substr(i,i+1).c_str();
   strcpy(cr, s.substr(i,i+1).c_str());
    state += toupper(cr);
   i++;
}
//cout << count << endl;
    return state;
}
string string_to_lower(string s){
string state;
int i = 0;
char cr =' ';
while (i < state.length()) {
   //const char *cr = s.substr(i,i+1).c_str();
   strcpy(cr, s.substr(i,i+1).c_str());
    state += tolower(cr);
   i++;
}
//cout << count << endl;
    return state;
}

int main()
{   
backwards("banana");
cout << "" << endl;
cout << "" << endl;
count_letters("Mississippi", 'i');
cout << "" << endl;
cout << "" << endl;
string suffix = "ack";

char letter = 'J';
while (letter < 'Q') {
    suffix = "ack";
    if(letter == 'Q'||letter == 'O'){
    suffix = "uack";
    }
    cout << letter + suffix << endl;
    letter++;
}
return 0;
}
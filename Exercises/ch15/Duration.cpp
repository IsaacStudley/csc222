#include <iostream>
#include <string>
#include "Duration.h"
using namespace std;

Duration::Duration() {
sec = 0;
}

Duration::Duration(int a) {
sec = a;
}

string Duration::to_string(){
if(sec < 60){
return "PT" + std::to_string(sec) + "S"; 
}
if(sec < 3600){
return "PT" + std::to_string(minutes())+ "M" + std::to_string(seconds()) + "S"; 
}
if(sec < 86400){
return "PT" + std::to_string(hours())+ "H" + std::to_string(minutes())+ "M" + std::to_string(seconds()) + "S"; 
}
if(sec >= 86400){
return "P" + std::to_string(days())+ "D" + std::to_string(hours())+ "H" + std::to_string(minutes())+ "M" + std::to_string(seconds()) + "S"; 
}
return "error";
}

int Duration:: days(){
return int(sec/86400); 
}
int Duration:: hours(){
return (int(sec/3600)-days()*24); 
}
int Duration:: minutes(){
return (int(sec/60)-hours()*60)-days()*24*60; 
}
int Duration:: seconds(){
return sec%60;//-(minutes()*60); 
}

Duration Duration::operator + (Duration P) {
    return Duration(sec + P.sec);
}
Duration Duration::operator - (Duration P) {
    return Duration(sec - P.sec);
}

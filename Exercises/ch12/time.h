#include <iostream>
struct Time {
    int hour, minute;
    double second;

    void print();
    void increment(double secs);
    string print_time(const Time& time);
    Time(int h, int m, double s);
};
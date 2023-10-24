#include <iostream>
#include <math.h>
using namespace std;

struct Time {
    int hour, minute;
    double second;

    void print();
    void increment(double secs);
};

Time::Time(int h, int m, double s)
{
  hour = h; minute = m; second = s;
}

void Time::increment(double secs)
{
    second += secs;

    if (second >= 60.0) {
        second -= 60.0;
        minute += 1;
    }
    if (minute >= 60) {
        minute -= 60;
        hour += 1;
    }
}

int main(){

Time current_time = {9, 14, 30.0};
current_time.increment(500.0);
current_time.print();

return 0;
}
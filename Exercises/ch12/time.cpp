
#include <math.h>
#include "time.h"
using namespace std;


Time::Time(int h, int m, double s)
{
  hour = h; minute = m; second = s;
}

string Time::print_time(const Time& time)
{
  return time.hour << ":" << time.minute << ":" << time.second;
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
struct Time {
    int hour, minute;
    double second;

    void print();
    void increment(double secs);
    Time(int h, int m, double s);
};
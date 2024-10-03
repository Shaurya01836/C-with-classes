#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time()
    {
        hours = minutes = seconds = 0;
    }

    // Parameterized constructor (initializes to specific values)
    Time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Member function to display time in 11:59:59 format
    void displayTime()
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    // Member function to add two Time objects and store the result in the current object
    void addTime(Time &t1, Time &t2)
    {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes + seconds / 60;
        hours = t1.hours + t2.hours + minutes / 60;

        seconds %= 60;
        minutes %= 60;
        hours %= 24; // In case the sum exceeds 24 hours, we keep it within 24 hours
    }
};

int main()
{
    Time time1(5, 45, 30); // 5:45:30
    Time time2(6, 20, 40); // 6:20:40
    Time time3;

    // Adding the two initialized times and storing the result in time3
    time3.addTime(time1, time2);

    cout << "First time: ";
    time1.displayTime();
    cout << "Second time: ";
    time2.displayTime();
    cout << "Summed time: ";
    time3.displayTime();

    return 0;
}

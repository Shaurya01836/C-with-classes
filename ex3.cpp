// Implement class and objects concepts
// Create a class Distance that has two data members feet and inches. One constructor should initialize this data to
// 0, and another should initialize it to fixed values. The class should have appropriate member functions that allow
// user to input and show data. The distance value should be displayed in the following format – 6’-8”.
// Also include member function to add and subtract two distance type objects.

#include <iostream>
using namespace std;
class Distance
{
    int feet;
    float inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int ft, float inch)
    {
        feet = ft;
        inches = inch;
    }
    void get_value()
    {
        cout << "Enter the value of Feet :";
        cin >> feet;
        cout << "Enter the value of inches :";
        cin >> inches;
    }
    void show_data()
    {
        cout << feet << "'- " << inches << "\"" << endl;
    }

    void add_distance(Distance d1, Distance d2)
    {
        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;
        if (inches >= 12)
        {
            feet += 1;
            inches -= 12;
        }
    }

    void sub_distance(Distance d1, Distance d3)
    {
        float t1, t2, t3;
        t1 = (d1.feet * 12) + d1.inches;
        t2 = (d3.feet * 12) + d3.inches;
        t3 = t2 - t1;
        feet = t3 / 12;
        inches = t3 - (feet * 12);
    }
};
int main()
{
    Distance d1(5,6), d2, d3, d4;
    d2.get_value();
    d3.add_distance(d1, d2);
    d3.show_data();
    d4.sub_distance(d1, d3);
    d4.show_data();
    return 0;
}
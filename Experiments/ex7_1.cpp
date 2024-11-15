// Write programs to understand the usage of const data member and member functions, static data member and member functions in a class.
// Write a program that demonstrates the const member functions and const arguments to member functions
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
    Distance(int f, float i)
    {

        feet = f;
        inches = i;
    }

    void GetData()
    {
        cout << "Enter feet :";
        cin >> feet;
        cout << "Enter inches :";
        cin >> inches;
    }

    void ShowData()
    {
        cout << feet << " Feet " << inches << " Inches " << endl;
    }

    Distance AddDistance(const Distance &) const;
};

Distance Distance::AddDistance(const Distance &d2) const
{
    Distance temp;
    temp.feet = feet + d2.feet;
    temp.inches = inches + d2.inches;
    if (temp.inches >= 12)
    {
        temp.inches -= 12;
        temp.feet += 1;
    }
    return temp;
}

int main()
{
    Distance d1, d2, d3;
    cout << "Enter the distance 1" << endl;
    d1.GetData();
    cout << "Distance 1 is : ";
    d1.ShowData();
    cout << "Enter the distance 2" << endl;
    d2.GetData();
     cout << "Distance 2 is : ";
    d2.ShowData();
    d3 = d1.AddDistance(d2);
     cout << "Addition of the distances is : ";
    d3.ShowData();
    return 0;
}
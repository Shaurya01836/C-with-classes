// 2.Write and test the following computeCircle() function that returns the area a and the circumference c of
// a circle with given radius r: void computeCircle(float& a, float& c, float r).

#include <iostream>
using namespace std;

void computeCircle(float &a, float &c, float r)
{
    // Formula for area: π * r^2
    a = 3.14159 * r * r;
    // Formula for circumference: 2 * π * r
    c = 2 * 3.14159 * r;
}

int main()
{
    float area, circumference, radius;

    // Input radius of the circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Call computeCircle to calculate area and circumference
    computeCircle(area, circumference, radius);

    // Display the results
    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << circumference << endl;

    return 0;
}

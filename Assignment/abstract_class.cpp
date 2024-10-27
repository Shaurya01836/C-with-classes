// Define an abstract class Shape with a pure virtual function draw(), which means that any class that derives from Shape must implement
// the draw() function. Then define two classes Rectangle and Square that inherit from the Shape class and implement the draw() function.
// Using these three classes, write a C++ program that implements the concept of run time polymorphism to call the appropriate version of the draw() function.
// Note: In the definition of draw() function you may simply print a suitable message.

#include <iostream>
using namespace std;
class shape
{
public:
    virtual void draw() const = 0;
    virtual ~shape() {}
};

class Rectangle : public shape
{
public:
    void draw() const override
    {
        cout << "I am a rectangle" << endl;
    }
};

class Square : public shape
{
public:
    void draw() const override
    {
        cout << "I am a square" << endl;
    }
};
int main()
{
    shape *shape1 = new Rectangle();
    shape *shape2 = new Square();
    shape1->draw();
    shape2->draw();
    delete shape1;
    delete shape2;
    return 0;
}
//Demonstrate the concept of late binding with the help of virtual function

#include <iostream>
using namespace std;

class base
{
public:
    virtual void show() = 0;
};
// class base
// {
// public:
//     void show()
//     {
//         cout << "I am the base class" << endl;
//     }
// };

class derived : public base
{
public:
    void show()
    {
        cout << "Derived class 1" << endl;
    }
};

class derived2 : public base
{
public:
    void show()
    {
        cout << "Derived class 2" << endl;
    }
};

int main()
{
    base *arr[2];
    derived d1;
    derived2 d2;
    arr[0] = &d1;
    arr[1] = &d2;
    arr[0]->show();
    arr[1]->show();
    return 0;
}
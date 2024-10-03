#include <iostream>
using namespace std;
class C
{
protected:
    int x;

public:
    void f() {};
};
class C1 : public C
{
protected:
    int x1;

public:
    void h(C *obj) {};
};
class C2 : public C1
{
public:
    int x2;
};
class C3 : public C
{
public:
    void f() {};
};

int main()
{
    C1 obj1;
    obj1.x;
    obj1.f();
    obj1.x1;
    obj1.x2;
    return 0;
}
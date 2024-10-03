#include <iostream>
using namespace std;
class beta;
class alpha
{
    int data1;

public:
    alpha()
    {
        data1 = 99;
    }
    friend class beta;
};
class beta
{
public:
    void func1(alpha a)
    {
        cout << a.data1 << endl;
    }
    void func2(alpha a)
    {
        cout << a.data1 << endl;
    }
};
int main()
{
    alpha a;
    beta b;
    b.func1(a);
    b.func2(a);
    return 0;
}
#include<iostream>
using namespace std;
class test
{
    int x;
public:
    test (int y=0)
    {
        this->x=y;
    }
    void change(test *t)
    {
        *this=*t;

    }
    void print()
    {
        cout<<"x= "<<x;
    }
};
int main()
{
    test obj(6);
    test *ptr=new test(10);
    obj.change(ptr);
    obj.print();
    return 0;
}
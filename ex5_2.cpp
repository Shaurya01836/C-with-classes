//Write a class whose member function access data members using 'this' pointer. Write a main () function to exercise this class. 



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
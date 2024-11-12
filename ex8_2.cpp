// Implement postfix and prefix versions of overloaded increment operator.

#include<iostream>
using namespace std;
class Index
{
    int value;
public:
    Index()
    {
        value=0;
    }
    Index(int v)
    {
        value=v;
    }
    Index operator ++(int)
    {
        return Index(value++);
    }
    Index operator ++()
    {
        return Index(++value);
    }
    int getIndex()
    {
        return value;
    }
};
int main()
{
    Index d1(2), d2(2), d3,d4;
    cout<<d1.getIndex()<<endl;
    cout<<d2.getIndex()<<endl;
    d3=d1++;
    d4=++d2;
    cout<<d1.getIndex()<<endl<<d2.getIndex()<<endl<<d3.getIndex()<<endl<<d4.getIndex();
    return 0;
}

#include<iostream>
using namespace std;
#define MAX 4
template <class T>
class Stack
{
    T arr[MAX];
    int top;
public:
    Stack()
    {
        top=-1;
    }
    void push(T);//function declaration
    T pop();//function declaration
};
//Specifying class member functions outside of the class
template <class T>
void Stack<T>::push(T val )
    {
        if(top==MAX-1)
        {
            cout<<"Stack overflow...";
            return;
        }
        arr[++top]=val;
    }

template <class T>
T Stack<T>::pop()
    {
        if(top==-1)
        {
            cout<<"Stack underflow...";
            exit(1);
        }
        return arr[top--];
    }
int main()
{
    Stack <int>s1;
    Stack<float>s2;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s2.push(1.1);
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s2.pop()<<endl;

    cout<<s2.pop()<<endl;//stack underflow
    return 0;
}

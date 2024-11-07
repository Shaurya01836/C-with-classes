#include<iostream>
using namespace std;
#define MAX 4
class Stack
{
    int arr[MAX];
    int top;
public:
    Stack()
    {
        top=-1;
    }
    class full
    {};
    class empty{};
    void push(int);//function declaration
    int pop();//function declaration
};
//Specifying class member functions outside of the class
void Stack::push(int val )
    {
        if(top==MAX-1)
        {
            throw full();
        }
        arr[++top]=val;
    }

int Stack::pop()
    {
        if(top==-1)
        {
            throw empty();
        }
        return arr[top--];
    }
int main()
{
    Stack s1;
    try{
        s1.push(10);
        s1.push(20);
        s1.push(30);
        s1.push(40);
        //s1.push(50);
        cout<<s1.pop()<<endl;
        cout<<s1.pop()<<endl;
        cout<<s1.pop()<<endl;
        cout<<s1.pop()<<endl;
        cout<<s1.pop()<<endl;
    }
    catch(Stack::full)
    {
        cout<<"Stack overflow...";
    }
    catch(Stack::empty)
    {
        cout<<"Stack underflow...";
    }

    return 0;
}

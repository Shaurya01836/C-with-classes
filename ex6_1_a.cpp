#include <iostream>
using namespace std;
#define MAX 10
class stack
{
protected:
    int stk[MAX];
    int top;

public:
    stack()
    {
        top = -1;
    }

    void push(int n)
    {
        stk[++top] = n;
    }

    int pop()
    {
        return stk[top--];
    }
};

class mystack : public stack
{
public:
    void push(int n)
    {
        if (top > MAX - 1)
        {
            cout << "Stack is full";
            exit(1);
        }

        stack ::push(n);
    }
    int pop()
    {
        if (top < 0)
        {
            cout << "stack is empty";
            exit(1);
        }
        stack ::pop();
    }
};

int main()
{
    mystack s1;
    s1.push(11);
    s1.push(20);
    cout << s1.pop();
    cout << endl;
    cout << s1.pop();
    return 0;
}
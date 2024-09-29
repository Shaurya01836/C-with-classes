//Write a C++ program to demonstrate the concepts of function overloading on the basis of different number of arguments.
#include <iostream>
using namespace std;

void repchar(int n, char ch)
{
    for (int i = 0; i < n; i++)
    {
        cout << ch;
    }
    cout << endl;
}
void repchar(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "+";
    }
    cout << endl;
}

void repchar()
{
    for (int i = 0; i < 20; i++)
    {
        cout << "&";
    }
    cout << endl;
}

int main()
{
    repchar(20, '-');
    repchar(20);
    repchar();
    return 0;
}
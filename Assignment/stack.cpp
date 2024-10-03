// 2.	Implement a Stack class for stacks of ints. Include a default constructor, a destructor,
// and the usual stack operations: push(), pop(), isEmpty(), and isFull(). Use an array implementation

#include <iostream>
using namespace std;

class stack
{
    int *arr;
    int tos;
    int capacity;

public:
    stack(int size)
    {
        capacity = size;
        arr = new int[capacity]; // Dynamically allocate the array
        tos = -1;
    }

    ~stack()
    {
        delete[] arr; // Deallocate the memory
        cout << "Stack object destroyed and memory freed." << endl;
    }
    int IsEmpty()
    {
        if (tos == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int IsFull()
    {
        if (tos == capacity - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void Push()
    {
        if (IsFull())
        {
            cout << "Stack overflow" << endl;
        }
        else
        {
            int value;
            cout << "Enter the value :";
            cin >> value;
            arr[tos + 1] = value;
            tos = tos + 1;
        }
    }

    void Pop()
    {
        if (IsEmpty())
        {
            cout << "Stack Underflow";
        }
        else
        {
            int t;
            t = arr[tos];
            tos = tos - 1;
            cout << "The value that pop is :" << t << endl;
        }
    }
    void ShowData()
    {
        if (IsEmpty())
        {
            cout << "Stack is empty." << endl;
        }
        else
        {
            cout << "Stack elements: ";
            for (int i = 0; i <= tos; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int size;
    cout << "Enter the size of the array:";
    cin >> size;
    stack s1(size);
    s1.Push();
    s1.Push();
    s1.ShowData();
    s1.Pop();
    s1.ShowData();
    return 0;
}
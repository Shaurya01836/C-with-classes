// Create a class vector with array as a data member which should be dynamically allocated.
// Another data member should represent the size of the dynamically allocated array.
// Create a member function for reading the vector elements from the user. Include another member
// function that totals all the elements of the vector and displays the sum on the console.

#include <iostream>
using namespace std;

class vector
{
    int *arr;
    int size;

public:
    vector()
    {
        arr = NULL;
        size = 0;
    }
    vector(int n)
    {
        size = n;
        arr = new int[size];
    }
    void getData()
    {
        for (int i = 0; i < size; i++)
        {
            cout << "Enter vector elements :";
            cin >> arr[i];
        }
    }
    void showData()
    {
        for (int i = 0; i < size; i++)
        {
            cout << "Elements are :"
                 << arr[i]
                 << endl;
        }
    }

    int addElements()
    {
        int s = 0;
        for (int i = 0; i < size; i++)
        {
            s = s + arr[i];
        }
        return s;
    }
    ~vector()
    {
        delete[] arr;
    }
};

int main()
{
    int n, sum;
    printf("Enter size of array you want to make :");
    scanf("%d", &n);
    vector v1, v2(n);
    v2.getData();
    v2.showData();
    sum = v2.addElements();
    cout << "Sum = " << sum;
    return 0;
}

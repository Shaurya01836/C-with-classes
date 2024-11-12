// Write a function template to search an array for a specific value.
#include <iostream>

using namespace std;
template <class T>
void Linear_Search(T arr[], int size, T val)
{
    for (int i = 0; i < size; i++)
        if (arr[i] == val)
        {
            cout << "value found at index " << i << endl;
            return;
        }

    cout << "value not found...\n";
}
// template <class T>
int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    double arr2[] = {1.1, 1.2, 1.4, 1.6};
    char arr3[] = {'s', 'n'};
    Linear_Search(arr3, 2, 'n');
    Linear_Search(arr1, 5, 3);
    Linear_Search(arr2, 4, 1.8);

    return 0;
}

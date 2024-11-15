// Create a function called amax() that returns the value of the largest element in an array. The arguments to the function should be the
// address of the array and its size. Make this function into a template so it will work with an array of any numerical type. 
// Write a main() program that applies this function to arrays of various types.

#include <iostream>
using namespace std;

// Template function to find the maximum value in an array
template <class T>
T amax(T arr[], int size)
{
    T maxVal = arr[0]; // Assume the first element is the largest
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    return maxVal;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    double arr2[] = {1.1, 1.2, 1.4, 1.6};
 
    cout << "Max in arr1: " << amax(arr1, 5) << endl;
    cout << "Max in arr2: " << amax(arr2, 4) << endl;
   

    return 0;
}

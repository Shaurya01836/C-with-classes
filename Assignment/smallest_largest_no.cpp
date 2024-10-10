#include <iostream>
using namespace std;

int main() {
    int N;  // Number of elements
    int *numbers;  // Pointer to dynamically allocate memory

    // Input the value of N
    cout << "Enter the number of elements: ";
    cin >> N;

    // Dynamically allocate memory for N integers
    numbers = new int[N];

    // Input N numbers
    cout << "Enter " << N << " integers: ";
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    // Initialize smallest and largest with the first element
    int smallest = numbers[0];
    int largest = numbers[0];

    // Find smallest and largest numbers
    for (int i = 1; i < N; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    // Output the smallest and largest numbers
    cout << "Smallest number: " << smallest << endl;
    cout << "Largest number: " << largest << endl;

    // Deallocate the memory
    delete[] numbers;

    return 0;
}

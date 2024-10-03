// 3. Write a C++ program that prints the address of the objects using this pointer.
#include <iostream>
using namespace std;

class AddressPointer
{
public:
    void printAddress()
    {
        cout << "Address of this object: " << this << endl;
    }
};

int main()
{
    AddressPointer obj1, obj2;
    cout << "For obj1: ";
    obj1.printAddress();
    cout << "For obj2: ";
    obj2.printAddress();

    return 0;
}

#include <iostream>
using namespace std;

class Complex
{
    float real;
    float imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }

    void get_value()
    {
        cout << "Enter the real part: ";
        cin >> real;
        cout << "Enter the imaginary part: ";
        cin >> imag;
    }

    void show_data()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    void add(Complex c1, Complex c2)
    {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }

    void multiply(Complex c1, Complex c2)
    {
        real = (c1.real * c2.real) - (c1.imag * c2.imag);
        imag = (c1.real * c2.imag) + (c1.imag * c2.real);
    }
};

int main()
{

    Complex c1, c2, c3, c4;

    cout << "Enter the first complex number:" << endl;
    c1.get_value();
    cout << "Enter the second complex number:" << endl;
    c2.get_value();

    c3.add(c1, c2);
    c3.show_data();

    c4.multiply(c1, c2);
    c4.show_data();

    return 0;
}

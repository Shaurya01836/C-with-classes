#include <iostream>
using namespace std;
class complex_no
{
    float real;
    float image;

public:
    complex_no()
    {
        real = image = 0.0;
    }
    complex_no(float r, float i)
    {
        real = r;
        image = i;
    }
    void getData()
    {


    }

    void showData()
    {
        cout << "The complex_no :";
        cout << real << "+" << image << "i" << endl;
    }
    friend complex_no add_complex(complex_no, complex_no);
};

complex_no add_complex(complex_no c1, complex_no c2)
{
    complex_no temp;
    temp.real = c1.real + c2.real;
    temp.image = c1.image + c2.image;
    return temp;
}
int main()
{
    complex_no c1(4, 5), c2(8, 5), c3;
    c3 = add_complex(c1, c2);
    c3.showData();
    return 0;
}
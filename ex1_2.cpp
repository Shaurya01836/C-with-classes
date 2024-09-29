#include <iostream>
#include <math.h>
using namespace std;

struct poly
{
    int coeff;
    int expo;
};

typedef struct poly poly;
// void readpoly(poly p[], int n);
// int evalPoly(poly p[], int n);
// void showpoly(poly p[], int n);

void readpoly(poly p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter coefficient :";
        cin >> p[i].coeff;
        cout << "Enter exponent :";
        cin >> p[i].expo;
    }
}

int evalPoly(poly p[], int n)
{
    int x,res;
    res = 0;
    cout << "enter the value of x :";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        res += p[i].coeff * pow(x, p[i].expo);
    }
    return res;
}

void showpoly(poly p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << p[i].coeff << "x  " << p[i].expo << "+ ";
    }
}

int main()
{
    poly p[20];
    int n, res;
    cout << "Enter the value of n :";
    cin >> n;
    readpoly(p, n);
    res = evalPoly(p, n);
    showpoly(p, n);
    cout << "the result is : " << res;
    return 0;
}

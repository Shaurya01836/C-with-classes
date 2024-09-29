// Write a C++ program that inputs a polynomial expression and shows the result after evaluating the polynomial expression. Make use of a structure to store coefficient and exponent values of each term of the polynomial expression. Create a modular program with the following functions-
// Input_poly() - To input the polynomial expression with N terms. For each term ask the user to input coefficient and exponent values.
// Evaluate_poly()- To evaluate the polynomial expression and then returns the result to the calling routine.
// Write a main() function that exercises the above structure and functions.
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

#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    char ch;
    int j;
    double d;
    char str1[20];
    char str2[20];
    ifstream inf("data.txt");
    inf >> ch >> j >> d >> str1 >> str2;
    cout << ch << endl
         << j << endl
         << d << endl
         << str1 << endl
         << str2 << endl;

    return 0;
}
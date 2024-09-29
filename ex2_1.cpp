//
#include <iostream>
using namespace std;
double power(double n, int p = 2)
{
    double res = 1;
    for (int i = 0; i < p; i++)
    {
        res *= n;
    }
    return res;
}
int power(int n, int p = 2)
{
    int res = 1;
    for (int i = 0; i < p; i++)
    {
        res *= n;
    }
    return res;
}
long power(long n, int p = 2)
{
    long res = 1;
    for (int i = 0; i < p; i++)
    {
        res *= n; 
    }
    return res;
}
float power(float n, int p = 2)
{
    float res = 1;
    for (int i = 0; i < p; i++)
    {
        res *= n;
    }
    return res;
}
int main()
{
    double double_number = 2.5;
    int double_power = 2;
    double result_double = power(double_number, double_power);
    cout << "Result for double: " << result_double << endl;
    result_double = power(double_number);
    cout << "Result for double (default p = 2): " << result_double << endl;

    int int_number = 3;
    int int_power = 3;
    int result_int = power(int_number, int_power);
    cout << "Result for int: " << result_int << endl;
    int int_result = power(int_number); // Using default p = 2
    cout << "Result for int (default p = 2): " << int_result << endl;

    long long_number = 4;
    int long_power = 3;
    long result_long = power(long_number, long_power);
    cout << "Result for long: " << result_long << endl;
    long long_result = power(long_number); // Using default p = 2
    cout << "Result for long (default p = 2): " << long_result << endl;

    float float_number = 2.5f;
    int float_power = 2;
    float result_float = power(float_number, float_power);
    cout << "Result for float: " << result_float << endl;
    float float_result = power(float_number); // Using default p = 2
    cout << "Result for float (default p = 2): " << float_result << endl;

    return 0;
}

// Create a class string_s that has only one data member str of type char* which will point to the string held by the
// dynamically allocated string_s object. The class must have constructors which allow definition of objects in the 4
// form given below.
// String name1;//str points to NULL
// String name2=”Dynamic Objects”;//one argument constructor is invoked
// String name3=name2;// one argument copy constructor taking string object.
// Write a program to model the String class and to manipulate its objects.
// The destructor must release memory allocated to the str by its counterpart (i.e. dynamic constructor).

#include <iostream>
#include <cstring>
using namespace std;

class string_char
{
    char *str;

public:
    string_char()
    {
        str = NULL;
    }
    string_char(char s[100])
    {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
    void getstring()
    {
        char arr[100];
        cout << "Enter a string :";
        cin >> arr;
        str = new char[strlen(arr) + 1];
        strcpy(str, arr);
    }
    string_char(string_char &s) // copy constructor
    {
        str = new char[strlen(s.str) + 1];
        strcpy(str, s.str);
    }
    void show_str()
    {
        cout << str << endl;
    }
};
int main()
{
    string_char s1, s2("poornima");
    s1.getstring();
    string_char s3(s1);
    s1.show_str();
    s2.show_str();
    s3.show_str();

    return 0;
}

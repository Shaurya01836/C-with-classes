// write a program to count no of spaces ,lines ,tabs, digits in a text file. your program should ask the user to input the file name.

#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main()
{

    string filename;
    cout << "Enter the name of the text file: ";
    cin >> filename;

    ifstream file(filename);

    if (!file)
    {
        cerr << "Error: Unable to open file!" << endl;
        return 1;
    }

    int spaces = 0, lines = 0, tabs = 0, digits = 0;
    char ch;

    while (file.get(ch))
    {
        if (ch == ' ')
            spaces++;
        else if (ch == '\n')
            lines++;
        else if (ch == '\t')
            tabs++;
        else if (isdigit(ch))
            digits++;
    }

    if (file.tellg() != 0)
    {
        lines++;
    }
    file.close();

    cout << "Number of spaces: " << spaces << endl;
    cout << "Number of lines: " << lines << endl;
    cout << "Number of tabs: " << tabs << endl;
    cout << "Number of digits: " << digits << endl;

    return 0;
}

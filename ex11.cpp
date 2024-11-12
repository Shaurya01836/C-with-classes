// Write a C++ program that reads a text file and creates another file that is identical except that every sequence of consecutive blank spaces is replaced by a single space.

#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    char ch;
    ifstream file1("test.txt");
    ofstream file2("test2.txt");
    if(!file1)
    {
        cout<<"\n file opening error...";
        return 1;
    }
    int flag=1;
    ch=file1.get();
    while(!file1.eof())
    {
        if(ch==' '&&flag==1)
        {
            file2.put(ch);
            flag=0;
        }
        else if (ch!=' ')
        {
            flag=1;
            file2.put(ch);
        }
        ch=file1.get();
    }
    file1.close();
    file2.close();
    cout<<"\nThe program was successfully executed...";
    return 0;
}


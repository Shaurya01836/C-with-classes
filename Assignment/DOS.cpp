// Write a program that emulates the DOS COPY command. That is, it should copy the contents of a text file (such as any .CPP file) to 
// another file. Invoke the program with two command-line arguments—the source file and the destination file—like this:C>mycopy srcfile.cpp
// destfile.cpp In the program, check that the user has typed the correct number of command-line arguments, and that the files specified can 
// be opened.



#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argV[])
{
    if(argc != 3){
        cout<<"Argument are not proper\n";
        cout<<"MyCopy src dest\n";
        return 1;
}
ifstream inf(argV[1]);
if(!inf){
    cout<<"source file not found....\n";
    return 1;
}
char ch;
ifstream tmp(argV[2]);
if(tmp){
    cout<<"dest file already present\n";
    cout<<"OverWrite ?";
    cin>>ch;
    if(ch != 'y' && ch != 'Y')
        return 1;
}
ofstream outf(argV[2]);
ch = inf.get();
while(!inf.eof()){
    outf.put(ch);
    ch = inf.get();
}
inf.close();
outf.close();
cout<<"file successfully copied......\n";
    return 0;
}
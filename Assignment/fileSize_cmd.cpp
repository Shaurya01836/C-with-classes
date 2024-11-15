// Write a program that returns the size in bytes of a text file entered on the command line.
// C:\>filesize somefile.txt

 #include <iostream>
 #include <fstream>
 using namespace std;
 int main(int argc, char *argv[])
 {
     if (argc < 2)
     {
         cout << "Usage: " << argv[0] << " <filename>" << endl;
         return 1;
     }
     ifstream inf(argv[1]);
     if (!inf)
     {
         cout << "Error opening " << argv[1] << endl;
         return 1;
     }
     inf.seekg(0, ios::end);
     cout << "File size = " << inf.tellg();
     return 0;
 }

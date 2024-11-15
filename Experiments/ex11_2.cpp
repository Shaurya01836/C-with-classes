// write a program that determines the size of a given text file use command line arguments to input the file name.

// for using cmd
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

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     char arr[24];
//     cout << "enter the file name :";
//     cin >> arr;
//     ifstream inf(arr);
//     if (!inf)
//     {
//         cout << "Error opening " << arr << endl;
//         return 1;
//     }
//     inf.seekg(0, ios::end);
//     cout << "File size = " << inf.tellg();
//     return 0;
// }
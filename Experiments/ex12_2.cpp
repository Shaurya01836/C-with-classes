// write a program that search the data file created in ex12_1 by inputing record number
//  write a program inputs a record no and displays its contents  use the data file created file created in ex 12

#include <fstream>
#include <iostream>
using namespace std;

class person
{
    char name[35];
    int age;

public:
    void showdata()
    {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

int main()
{
    fstream file("person.dat", ios::in | ios::binary);
    if (!file)
    {
        cout << "Error: Unable to open file!" << endl;
        return 1;
    }

    int n;
    cout << "Enter the record number to search: ";
    cin >> n;

    person pers;
    file.seekg((n - 1) * sizeof(pers));
    if (file.read((char *)&pers, sizeof(person)))
    {
        cout << "\nRecord " << n << " details:\n";
        pers.showdata();
    }
    else
    {
        cout << "Record number " << n << " does not exist in the file.\n";
    }

    file.close();
    return 0;
}

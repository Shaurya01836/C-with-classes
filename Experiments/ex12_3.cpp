// write a programm that modifies a record given its record number use data file created in ex 12

#include <fstream>
#include <iostream>
using namespace std;

class person
{
    char name[35];
    int age;

public:
    void getdata()
    {
        cout << "Enter modified data:\n";
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age of the person: ";
        cin >> age;
    }
    void showdata()
    {
        cout << "\t" << name << "\t" << age << endl;
    }
};

int main()
{
    person pers;
    int n;
    fstream file("person.dat", ios::in | ios::out | ios::binary);

    if (!file)
    {
        cout << "File could not be opened!\n";
        return 1;
    }

    cout << "Enter the record no. which you want to modify: ";
    cin >> n;

    file.seekg((n - 1) * sizeof(person));
    if (file.read((char *)&pers, sizeof(person)))
    {
        cout << "Current data in record " << n << ":\n";
        pers.showdata();

        pers.getdata();

        file.seekp((n - 1) * sizeof(person));
        file.write((char *)&pers, sizeof(person));

        file.seekg((n - 1) * sizeof(person));
        file.read((char *)&pers, sizeof(person));
        cout << "Modified data in record " << n << ":\n";
        pers.showdata();
    }
    else
    {
        cout << "Record not found\n";
    }
    file.close();
    return 0;
}
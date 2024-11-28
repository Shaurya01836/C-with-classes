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
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter Age of the person: ";
        cin >> age;
    }
    void showdata()
    {
        cout << "\t" << name << "\t" << age << endl;
    }
};

int main()
{
    char ch;
    person pers;
    fstream file("person.dat", ios::app | ios::out | ios::in | ios::binary);

    // Writing data to the file
    do
    {
        cout << "Enter person's data\n";
        pers.getdata();
        file.write((char *)&pers, sizeof(pers));
        cout << "\nEnter another (y/n)? ";
        cin >> ch;
    } while (ch == 'y');

    // Reading all records
    file.seekg(0);
    cout << "\nAll records in the file:\n";
    int i = 0;
    file.read((char *)&pers, sizeof(pers));
    while (!file.eof())
    {
        cout << "Person " << ++i << ": ";
        pers.showdata();
        file.read((char *)&pers, sizeof(pers));
    }

    // Modifying a record
    int recordNumber;
    cout << "\nEnter record number to modify: ";
    cin >> recordNumber;

    file.clear();  // Clear EOF flag
    file.seekg(0); // Move to the beginning of the file
    int currentRecord = 0;
    long pos;

    while (!file.eof())
    {
        pos = file.tellg(); // Save the position of the current record
        file.read((char *)&pers, sizeof(pers));
        if (++currentRecord == recordNumber)
        {
            cout << "\nCurrent data of record " << recordNumber << ":\n";
            pers.showdata();
            cout << "\nEnter new data for record " << recordNumber << ":\n";
            pers.getdata();
            file.seekp(pos); // Move to the position of the record
            file.write((char *)&pers, sizeof(pers));
            cout << "\nRecord updated successfully!\n";
            break;
        }
    }

    if (currentRecord < recordNumber)
    {
        cout << "Record number " << recordNumber << " does not exist.\n";
    }

    // Displaying all records after modification
    file.clear();
    file.seekg(0);
    cout << "\nUpdated records in the file:\n";
    i = 0;
    file.read((char *)&pers, sizeof(pers));
    while (!file.eof())
    {
        cout << "Person " << ++i << ": ";
        pers.showdata();
        file.read((char *)&pers, sizeof(pers));
    }

    file.close();
    return 0;
}

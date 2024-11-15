#include <iostream>
using namespace std;
class student
{
    int roll_no;
    char name[50];

public:
    void getData()
    {
        cout << "Enter the name of the student :";
        cin >> name;
        cout << "Enter the roll no :";
        cin >> roll_no;
    }
    void showData()
    {
        cout << "Name of the student is : " << name << endl;
        cout << "Roll no of the student is : " << roll_no << endl;
    }
};

class exam : public student
{
protected:
    int m1, m2, m3;

public:
    void getData()
    {
        student ::getData();
        cout << "Enter the marks in first subject : ";
        cin >> m1;
        cout << "Enter the marks in second subject : ";
        cin >> m2;
        cout << "Enter the marks in third subject : ";
        cin >> m3;
    }

    void showData()
    {
        student ::showData();
        cout << "Marks of the student are :" << m1 << "," << m2 << "," << m3 << endl;
    }
};

class result : public exam
{
    int totalMarks;

public:
    void getData()
    {
        exam::getData();
        totalMarks = m1 + m2 + m3;
    }
    void showData()
    {
        exam::showData();
        cout << "Total marks is :" << totalMarks << endl;
    }
};

int main()
{
    result s1;
    s1.getData();
    s1.showData();
    return 0;
}
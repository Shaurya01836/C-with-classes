#include<fstream>
#include<iostream>
using namespace std;
class person
{
    char name[35];
    int age;
public:
    void getdata()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter Age of the person: ";
        cin>>age;
    }
    void showdata()
    {
        cout<<"\t"<<name<<"\t"<<age<<endl;
    }
};
int main()
{
    char ch;
    person pers;
    fstream file("person.dat",ios::app|ios::out|ios::in|ios::binary);
    do
    {
        cout<<"Enter person's data\n";
        pers.getdata();
        file.write((char*)&pers,sizeof(pers));
        cout<<"\nEnter another (y/n)? ";
        cin>>ch;
    }
    while(ch=='y');
    file.seekg(0);
    int i=0;
    file.read((char*)&pers,sizeof(pers));
    while(!file.eof())
    {
        cout<<"\n Person\t"<<++i;
        pers.showdata();
        file.read((char*)&pers,sizeof(pers));
    }
    return 0;
}

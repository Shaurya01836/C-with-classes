#include<iostream>
using namespace std;
class number
{
private:
    int num;
public:
    void getdata()
    {
        cout<<"Enter a number: ";
        cin>>num;
    }
    class DIVIDE
    {  };
    int div(number num2)
    {
        if(num2.num==0)
            throw DIVIDE();//raise exception
        else
            return num/num2.num;
    }
};
int main()
{
    number n1,n2;
    int res;
    n1.getdata();
    n2.getdata();
    try{
        cout<<"\nTrying divide by zero operation...";
        res=n1.div(n2);
        cout<<"succeeded..."<<endl;
    }
    catch(number::DIVIDE)
    {
        cout<<"\nfailed...\n"<<endl;
        cout<<"Divide by zero error\n";
        return 1;
    }
    cout<<"n2/n1 = "<<res;
    return 0;
}

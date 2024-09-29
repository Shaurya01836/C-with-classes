//. Also demonstrate the concept of returning by reference by using 'this' pointer

#include<iostream>
using namespace std;
int & max(int &a, int & b)
{
    return (a>b?a:b);
}
int main()
{
    int m=10,n=20;
    cout<<"m= "<<m<<"n= "<<n <<"max= "<<max(m,n);
    max(m,n)=50;//returning by reference. Max of m and n will be assigned the value 50
    cout<<endl;
    cout<<"m= "<<m<<"n= "<<n <<"max= "<<max(m,n);
}




#include<iostream>
using namespace std;
int add(int a,int b);
int add(int a,int b,int c);
int main()
{
    int a,b,c;
    cout<<"Enter two number : ";
    cin>>a>>b;
    cout<<"sum of "<<a<<" and "<<b<<" is : "<<add(a,b);
    cout<<endl<<"Enter three number :";
    cin>>a>>b>>c;
    cout<<"sum of "<<a<<" , "<<b<<" and "<<c<<" is : "<<add(a,b,c);
}
int add(int a,int b)
{
    return a+b;
}
int add(int a,int b,int c)
{
    return a+b+c;
}
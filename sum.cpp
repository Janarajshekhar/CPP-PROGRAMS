#include<iostream>
using namespace std;
inline int sum(int x,int y);
inline int sub(int x,int y);
inline int mul(int x,int y);
inline int division(int x,int y);
inline int rem(int x,int y);
int main()
{
    int a,b,c,d,e,f,g;
    cout<<endl<<"Enter two numbers : ";
    cin>>a>>b;
    c=sum(a,b);
    d=sub(a,b);
    e=mul(a,b);
    f=division(a,b);
    g=rem(a,b);
    cout<<endl<<"sum of "<<a<<" and "<<b<<" is "<<c;
    cout<<endl<<"sub of "<<a<<" and "<<b<<" is "<<d;
    cout<<endl<<"mul of "<<a<<" and "<<b<<" is "<<e;
    cout<<endl<<"div of "<<a<<" and "<<b<<" is "<<f;
    cout<<endl<<"rem of "<<a<<" and "<<b<<" is "<<g;
    return 0;
}
int sum(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}
int mul(int x,int y)
{
    return x*y;
}
int division(int x,int y)
{
    return x/y;
}
int rem(int x,int y)
{
    return x % y;
}
#include<iostream>
using namespace std;
class complex 
{
    private:
        int a,b;
    public:
        void setdata(int x,int y);
        void showdata();
        complex operator +(complex c2);
        complex operator -(complex c2);
        complex operator -();
};
void complex::setdata(int x,int y)
    {
        a=x;
        b=y;
    }
void complex::showdata()
    {
        cout<<endl<<"a = "<<a<<" b = "<<b;
    }
complex complex::operator +(complex c2)
{
    complex temp;
    temp.a=a+c2.a;
    temp.b=b+c2.b;
    return temp;
}
complex complex::operator -(complex c)
{
    complex temp;
    temp.a=a-c.a;
    temp.b=b-c.b;
    return temp;
}
complex complex::operator -()
{
    complex temp;
    temp.a=-a;
    temp.b=-b;
    return temp;
}
int main()
{
    complex c1,c2,c3,c4,c5;
    c1.setdata(3,4);
    c2.setdata(5,6);
    c1.showdata();
    c2.showdata();
    c3=c1+c2;    //c3=c1.operator +(c2);
    c4=c1-c2;    //c4=c1.operator -(c2);
    c3.showdata();
    c4.showdata();
    c5=-c1;      //c5=c1.operator -();
    c5.showdata();
}
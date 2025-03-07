#include<iostream>
using namespace std;
class complex 
{
    private:
        int a,b;
    public:
        void setdata(int x,int y);
        void showdata();
        complex add(complex c2);
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
complex complex::add(complex c2)
{
    complex temp;
    temp.a=a+c2.a;
    temp.b=b+c2.b;
    return temp;
}
int main()
{
    complex c1,c2,c3;
    c1.setdata(3,4);
    c2.setdata(5,6);
    c1.showdata();
    c2.showdata();
    c3=c1.add(c2);
    c3.showdata();
}

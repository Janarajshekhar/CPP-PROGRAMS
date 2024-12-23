#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
struct BOOk
{
    private :
        int Bookid;
        char title[20];
        float price;
    public :
        void inputbook()
        {
            cout<<"Enter bookid, title and price : ";
            cin>>Bookid;
            cin.ignore();
            cin.getline(title,20);
            cin>>price;
        }
        void displaybook()
        {
            cout<<Bookid<<"  "<<title<<"  "<<price<<endl;
        }
};
int main()
{
    BOOk b3;
    b3.inputbook();
    b3.displaybook();
}
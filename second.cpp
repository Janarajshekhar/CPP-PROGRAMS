#include<iostream>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
};
struct book input_book();
void display_book(struct book b);
int main()
{
    struct book b1,b2;
    b1=input_book();
    // b2=input_book();
    display_book(b1);
    // display_book(b2);  
    return 0; 
}
struct book input_book()
{
    struct book b;
    cout<<"enter bookid, title and price :";
    cin>>b.bookid;
    cin.ignore();
    cin.getline(b.title,20);
    cin>>b.price;
    return b;
}
void display_book(struct book b)
{
    cout<<endl;
    cout<<b.bookid<<"  "<<b.title<<"  "<<b.price<<endl;
}
#include<iostream>
#include<string.h>
using namespace std;
class publication
{
private:
double price;
string title;
public:
void getdata()
{
cout<<"Enter the title of the book:"<<endl;
cin>>title;
cout<<"enter the price of the book:"<<endl;
cin>>price;
}
void putdata()
{
cout<<"the title of the book is:"<<title<<endl;
cout<<"price of  this book is:"<<price<<endl;
}
};
class Book:public publication
{
private:
int count;
public:
void getdata()
{
publication::getdata();
cout<<"Enter the page count of the book:"<<endl;
cin>>count;
}
void putdata()
{
publication::putdata();
cout<<"the page count of the book is:"<<count<<endl;
}
};
class Tape:public publication
{
private:
double min;
string title;
public:
void getdata()
{
publication::getdata();
cout<<"Enter the minutes of the tape: "<<endl;
cin>>min;
}
void putdata()
{
publication::putdata();
cout<<"themin of the tape is:"<<min<<endl;
}
};
int main()
{
Book b;
b.getdata();
b.putdata();
Tape t;
t.getdata();
t.putdata();
}

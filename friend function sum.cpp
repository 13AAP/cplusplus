#include<iostream>
using namespace std;
class number
{
int a;
int b;
public:
void setdata(int x,int y)
{
a=x;
b=y;
}
void display()
{
cout<<"a= "<<a<<endl;
cout<<"b= "<<b<<endl;
}
friend void sum(number);
};
void sum(number n)
{
int sum=n.a+n.b;
cout<<"sum= "<<sum<<endl;
}
int main()
{
number num;
int i,j;
cout<<"enter two no.s: ";
cin>>i>>j;
num.setdata(i,j);
num.display();
sum(num);
return 0;}

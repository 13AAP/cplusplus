#include<iostream>
using namespace std;
class number
{
int a;
int b;
public:
void getdata(int i,int j)
{
a=i;
b=j;
}
void display()
{
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
}
friend void swap(number);
};
void swap(number n)
{
int x=n.a;
n.a=n.b;
n.b=x;
cout<<"After swapping ="<<endl;
cout<<"a="<<n.a<<endl;
cout<<"b="<<n.b<<endl;
}
int main()
{
int i,j;
number num;
cout<<"enter two number";
cin>>i>>j;
num.getdata(i,j);
num.display();
swap(num);
return 0;
}



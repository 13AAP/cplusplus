#include<iostream>
using namespace std;
class Box
{
int l,b,h;
public:
Box()
{}
Box(int x,int y,int z)
{
l=x;
b=y;
h=z;
}
void operator++()
{
l++;
b++;
h++;

cout<<l<<b<<h;}
void operator+(Box m)
{
cout<<l+m.l;
cout<<b+m.b;
cout<<h+m.h;
}
};
int main()
{
int m,n,p;
cout<<"Enter the length,breadth,height:"<<endl;
cin>>m>>n>>p;
Box b1(m,n,p),b2(m,n,p);
++b1;
++b2;
b1+b2;
}


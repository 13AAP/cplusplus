#include<iostream>
#include<string.h>
using namespace std;
class shape
{
public:
virtual void getdata()=0;
virtual double area()=0;
virtual double vol()=0;
void display(float c,float d,string e)
{
cout<<"Area of "<<e<<" is "<<c<<" and volume is "<<d<<endl;
}
};
class box:public shape
{
float len,bre,hei;
public:
void getdata()
{
cout<<"Enter the length,breadth,height"<<endl;
cin>>len>>bre>>hei;
}
double area()
{
return(2*((len*bre)+(len*hei)+(bre*hei)));
}
double vol()
{
return (len*bre*hei);
}
void display(float c,float d,string e);
};

class cube:public shape
{
float side;
public:
void getdata()
{
cout<<"Enter the side"<<endl;
cin>>side;
}
double area()
{
return(6*(side*side));
}
double vol()
{
return (side*side*side);
}
void display(float c,float d,string e);
};


class cylinder:public shape
{
float rad,hei;
public:
void getdata()
{
cout<<"Enter the radius,height"<<endl;
cin>>rad>>hei;
}
double area()
{
return(2*22*rad*hei*(rad+hei)/7);
}
double vol()
{
return (22*rad*rad*hei/7);
}
void display(float c,float d,string e);
};

int main()
{
float a,c,d,e,f,g;
shape *p;
box b;
cylinder cy;
cube cu;
p=&b;
p->getdata();
a=b.area();
c=b.vol();
p->display(a,c,"box");

p=&cy;
p->getdata();
a=cy.area();
c=cy.vol();
p->display(a,c,"cylinder");

p=&cu;
p->getdata();
a=cu.area();
c=cu.vol();
p->display(a,c,"cube");

}

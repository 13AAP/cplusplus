#include<iostream>
#include<string.h>
using namespace std;
class student
{
protected:
string name;
int roll;
public:
virtual void getdata()=0;
virtual double average()=0;
virtual void display(double a)=0;
};
class medicine:public student
{
private:
int i,n;
double marks[10],total;
public:
void getdata()
{
cout<<"Enter name of the medicine student:"<<endl;
cin>>name;
cout<<"enter roll:"<<endl;
cin>>roll;
cout<<"enter the no.of subjects in Medicial:"<<endl;
cin>>n;
cout<<"Enter the marks of the medical subjects:"<<endl;
for(i=0;i<n;i++)
{
cin>>marks[i];
}
}
double average()
{
for(i=0;i<n;i++)
{
total=total+marks[i];
}
return(total/n);
}
void display(double avg)
{
cout<<"Average marks scored by medical student is:"<<endl;
cout<<avg<<endl;
}
};
class engineering:public student 
{
private:
int i,n;
double marks[10],total;
public:
void getdata()
{
cout<<"Enter the name of engineering student:"<<endl;
cin>>name;
cout<<"enter roll:"<<endl;
cin>>roll;
cout<<"enter the no.of subjects in Engineering:"<<endl;
cin>>n;
cout<<"Enter the marks of the engineering subjects:"<<endl;
for(i=0;i<n;i++)
{
cin>>marks[i];
} 
}
double average()
{
for (i=0;i<n;i++)
{
total=total+marks[i];
}
return(total/n);
}
void display(double a)
{
cout<<"Average marks scored by engineering students:"<<endl;
cout<<a<<endl;
} 
};
class science:public student
{
private:
int i,n;
float total,marks[10];
public:
void getdata()
{
cout<<"enter the name of Science student:"<<endl;
cin>>name;
cout<<"enter roll:"<<endl;
cin>>roll;
cout<<"enter the no.of subjects in Science:"<<endl;
cin>>n;
cout<<"Enter the marks of the science subjects:"<<endl;
for(i=0;i<n;i++)
{
cin>>marks[i];
} 
} 
double average()
{
for(i=0;i<n;i++)
{
total=total+marks[i];
}
return(total/n);
}
void display(double a)
{
cout<<"Average marks scored by Science student is:"<<endl;
cout<<a<<endl;
}
};
int main()
{
student *s;
science sc;
medicine m;
engineering e;

s=&sc;
double average;
s->getdata();
average=s->average();
s->display(average);

s=&m;
s->getdata();
average=s->average();
s->display(average);

s=&e;
s->getdata();
average=s->average();
s->display(average);
}


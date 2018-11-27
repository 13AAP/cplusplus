#include<iostream>
using namespace std;
class Student
{
protected:
int roll;
public:
void getroll()
{
cout<<"enter the roll no.:"<<endl;
cin>>roll;
}
void putroll()
{
cout<<"the roll no.is:"<<roll<<endl;
}
};
class Test:public Student
{
protected:
float mark1,mark2;
public:
void getmark()
{
Student::getroll();
cout<<"Enter the marks of two subjects:"<<endl;
cin>>mark1>>mark2;
}
void putmark()
{
Student::putroll();
cout<<"The Two marks are"<<mark1<<mark2<<endl;
}
};
class Result:public Test
{
protected:
float total;
public:
void gettotal()
{
Test::getmark();
total=mark1+mark2;
}
void display()
{
Test::putmark();
cout<<"the total marks is :"<<total<<endl;
}
};
int main()
{
Result r;
r.gettotal();
r.display();
}

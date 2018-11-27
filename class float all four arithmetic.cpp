#include<iostream>
using namespace std;
class FLOAT
{
float a;
public:
void getdata()
{
cout<<"Enter the no.";
cin>>a;
}
void operator+(FLOAT f)
{
cout<<"sum is:"<<a+f.a<<endl;
}
void operator-(FLOAT f)
{
cout<<"difference is: "<<a-f.a<<endl;
}
void operator/(FLOAT f)
{
cout<<"divide is: "<<a/(f.a)<<endl;
}
void operator*(FLOAT f)
{
cout<<"multiply is: "<<a*(f.a)<<endl;
}
};
int main()
{
FLOAT ob,ob1;
ob.getdata();
ob1.getdata();
ob+ob1;
ob-ob1;
ob/ob1;
ob*ob1;
}

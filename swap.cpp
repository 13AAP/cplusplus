#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"Enter two number";
cin>>a >>b;
c=a;
a=b;
b=c;
cout<<"number are "<<a<<" " <<b<<endl;
cout<<"Without using datatype"<<endl;
a=a+b;
b=a-b;
a=a-b;
cout<<"number are "<<a<<" "<<b<<endl;
return 0;
}


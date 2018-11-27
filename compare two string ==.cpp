#include<iostream>
#include<string.h>
using namespace std;
class compare
{
char a[30];
public:
void getstring()
{
cout<<"Enter the string:"<<endl;
cin.getline(a,30);
}
void operator==(compare c1)
{
if(strcmp(a,c1.a)==0)
{
cout<<"String are equal"<<endl;
}
else
{cout<<"Strings are not equal";
}
}
};
int main()
{
compare com,com1;
com.getstring();
com1.getstring();
com==com1;
}


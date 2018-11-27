#include<iostream>
using namespace std;
template<class T>
T maximum(T a, T b)
{
if(a>b)
{
cout<<a<< " is maximum"<<endl;
}
else
{
cout<<b<<" is maximum"<<endl;
}
}
int main()
{
//int a,b;
//cout<<"Enter two no.s"<<endl;
//cin>>a>>b;
maximum('a','b');
return 0;
}


#include<iostream>
using namespace std;
template <class T>
T sort(T *a, T &n)
{
T i,temp,j;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
}
int main()
{
int a[20],i,n;
cout<<"Enter the no.of elements: "<<endl;
cin>>n;
cout<<"Enter the elements: "<<endl;
for(i=0;i<n;i++)
{
cin>>a[i];
}
sort(a,n);
return 0;
}

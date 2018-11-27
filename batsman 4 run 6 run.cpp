#include<iostream>
#include<cstring>
using namespace std;
class batsman
{
int runs,fours,sixes,balls;
char name[50];
public:
void set(char n[50])
{
strcpy(name,n);
runs=0;
fours=0;
sixes=0;
balls=0;
}
void update(int a, int b, int c)
{
runs=runs+a;
fours=fours+b;
sixes=sixes+c;
balls=balls+1;
}
void show()
{
cout<<"Name is: "<<name<<endl;
cout<<"Total runs: "<<runs<<endl;
cout<<"No. of Fours :"<<fours<<endl;
cout<<"No. of sixes: "<<sixes<<endl;
cout<<"no.of balls :"<<balls<<endl;}
};
int main()
{
batsman bat;
char m[50];
int x,y,z,ch=0;
cout<<"enter the name: ";
cin.getline(m,50);
bat.set(m);
bat.show();
while(ch!=-1)
{
cout<<"enter the run scored: "<<endl;
cin>>x;
y=0;
z=0;
if(x==4)
{
y=1;}
if(x==6)
{z=1;}
bat.update(x,y,z);
bat.show();
cout<<"enter -1 for out and any no.to continue :"<<endl;
cin>>ch;
}
bat.update(0,0,0);
bat.show();
}

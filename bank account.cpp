#include<iostream>
#include<cstring>
using namespace std;
class Banking
{
int acc_no;
double bal;
char name[50],acc_type[10];
public:
void set(char n[50],char t[10],int a,double b)
{
bal=0.0;
strcpy(name,n);
strcpy(acc_type,t);
acc_no=a;
bal=bal+b;
}
void withdraw( double w)
{
if(w>bal)
{
cout<<"you have insufficient balance !!"<<endl;
}
else
{bal=bal-w;}
}
void deposit(double d)
{
bal=bal+d;
}
void show()
{
cout<<"Name : "<<name<<endl;
cout<<"Account No. : "<<acc_no<<endl;
cout<<"Account Type : "<<acc_type<<endl;
cout<<"Balance : "<<bal<<endl;
}
};
int main()
{
char p[50],q[10];
int x,ch=0;
double y,z,t;
Banking ba;
cout<<"enter the name : "<<endl;
cin.getline(p,50);
cout<<"enter the  account type : "<<endl;
cin.getline(q,10);
cout<<"enter the  account no. : "<<endl;
cin>>x;
cout<<"enter the opening balance : "<<endl;
cin>>y;
ba.set(p,q,x,y);
cout<<"1. withdraw"<<endl;
cout<<"2. Deposits"<<endl;
cout<<"3. Display"<<endl;
cout<<"4. Exit"<<endl;
while(ch!=4)
{
cout<<"Enter your choice: "<<endl;
cin>>ch;
switch(ch)
{
case 1:cout<<"enter the withdrawl balance: "<<endl;
cin>>z;
ba.withdraw(z);
break;
case 2:cout<<"enter the deposit balance: "<<endl;
cin>>t;
ba.deposit(t);
break;
case 3:ba.show();
break;
case 4:return 0;
default: cout<<" wrong choice:"<<endl;
}}
}


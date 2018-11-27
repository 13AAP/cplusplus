#include<iostream>
using namespace std;
#define SIZE 20;
template<class ST>
class stack
{
ST stk[SIZE];
int tos;
public:
	stack(){tos=0;}
	void push(ST ob)
	{if(tos==SIZE)
	{cout<<"Stack Overflow";
	exit(0);}
	else
	{stk[tos]=ob;
	tos++;
	}}
	ST pop()
	{
	if(tos==0)
	{cout<<"Stack Underflow";
	exit(0);}
	tos--;
	for(int i=0;i<=tos;i++)
	{cout<<stk[i];}}
};
int main()
{
stack s;
s.push(25);
s.push(12);
s.push(23);
s.pop();
return 0;
}


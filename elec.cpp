#include<iostream>
#include<string.h>
using namespace std;
class electric{
	public:
	int u;
	double p;
	string n;
	
	public:
	void calculate(){
		cout<<"Enter name: ";
		cin>>n;
		cout<<"Enter units used:";
		cin>>u;
		if(u<=100)
		p=u*0.6;
		else if(u>100 && u<=300)
		p=60+((u-100)*0.8);
		else if(u>300)
		p=60+160+((u-300)*0.9);
		if(p<50)
		p=50;
		if(p>300)
		p=p+(p*0.15);
		cout<<n<<" your bill is ->"<<p;
	}
};
int main()
{
electric s;
s.calculate();
return 0;
}

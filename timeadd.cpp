#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class Complex
{
	private:
		int hr,min;
	public:
	void set(int a,int b)
	{
		hr=a;
		min=b;
	}
	void get()
	{
		int q,w;
		cout<<"enter the values of hours and mins\n";
		cin>>q;
		cin>>w;
		set(q,w);
	}
	void sum(Complex a,Complex b)
	{
		double x_sum=a.hr+b.hr;
		double y_sum=a.min+b.min;
		if (y_sum>60)
		{y_sum-=60; x_sum++;}
		cout<<"the sum of two Times=\n";
		cout<<x_sum<<" : "<<y_sum<<"\n";
	}
};
int main()
{
	Complex c1,c2;
	c1.get();
	c2.get();
	c1.sum(c1,c2);
}

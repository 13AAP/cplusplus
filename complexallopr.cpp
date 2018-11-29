#include<iostream>
using namespace std;
class A
{
	public:
	int x, y;
	A Add(A, A);
	A Multiply(A, A);
	A Subtract(A, A);
};
A A::Add(A a, A b)
{
	a.x = a.x + b.x;
	a.y = a.y + b.y;
	return a;
}
A A::Multiply(A a, A b)
{
	
	a.x = (a.x)*(b.x) - (a.y)*(b.y);
	a.y = (a.x)*(b.y) + (a.y)*(b.x);
	return a;
}
A A::Subtract(A a, A b)
{
	
	a.x = a.x - b.x;
	a.y = a.y - b.y;
	return a;
}
int main()
{
	A a,b;
	cin>>a.x>>a.y>>b.x>>b.y;
	cout<<"Addition \n";
	A c = a.Add(a,b);
	cout<<c.x<<"+ i"<<c.y<<"\n";
	cout<<"Multiplication \n";
	A d = a.Multiply(a,b);
	cout<<d.x<<"+ i"<<d.y<<"\n";
	cout<<"Subtraction \n";
	A e = a.Subtract(a,b);
	cout<<e.x<<"+ i"<<e.y<<"\n";
}

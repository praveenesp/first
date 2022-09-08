#include<iostream>
using namespace std;
void swapi(int &,int &);
void swapf(float & ,float &);
int main()
{
	int a,b;
	cout<<"enter two integer input:\n";
	cin>>a>>b;
	swapi(a,b);
	cout<<"after swapping a amd b"<<":"<<a<<" "<<b<<"\n";
	float c,d;
	cout<<"enter two float input:\n";
	cin>>c>>d;
	cout<<"after swapping c and d"<<":"<<c<<" "<<d;
	swapf(c,d);
	return 0;
}
void swapi(int &a,int &b)
{
	int temp;
	temp =a;
	a=b;
	b=temp;
}
void swapf(float &c,float &d)
{
	float temp;
	temp=c;
	c=d;
	d=temp;
}


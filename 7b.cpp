#include<iostream>
using namespace std;
int c=0;
void check(int k)
{
	try
	{
		if(k>0) throw "k";
		if(k==0) throw "K";
		if(k<0) throw "k";
	}
	catch(...)
	{
		c++;
		cout<<"catching exception"<<c<<endl;
	}
}
int main()
{
	int h,x,m;
	cout<<"enter two numbers:";
	cin>>h>>m;
	check(h);
	check(x);
	check(m);
}

#include<iostream>
using namespace std;
template <class r1 ,class r2>
void sum(r1 p, r2 q)
{
	cout<<"\nsum="<<p+q;
}
int main()
{
	int a,b;
	float x,y;
	cout<<"enter two int values:";
	cin>>a>>b;
	cout<<"enter two floating point values:";
	cin>>x>>y;
	sum(a,b);
	sum(x,y);
	return 0;
}

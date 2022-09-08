#include<iostream>
using namespace std;
void abc(int);                                        //function overloading
void abc(int, int);
void abc(int,int,int);
int main()
{
	int a,b,c;
	cout<<"enter three numbers \n";
	cin >>a>>b>>c;
	abc(a);
	abc(a,b);
	abc(a,b,c);
	return 0;
}
void abc(int p)
{
	cout<<p<<endl;
	cout<<"single parameter"<<endl;
}
void abc(int p,int q)
{
	cout<<p*q<<endl;
	cout<<"two parameters"<<endl;
}
void abc(int p,int q,int r)
{
	cout<<p*q*r<<endl;
	cout<<"three parameters"<<endl;
}

#include<iostream>
using namespace std;
class my_exception: public exception
{
	public:
		void fun()
		{
			cout<<"it is division by zero error";
		}
};
int main()
{
	//int h;
	try
	{
		int a,b,c;
		cout<<"enter two numbers:";
		cin>>a>>b;
		if(b==0)
		{
			my_exception k;
			throw k;
		}
		else
		   cout<< a/b;
	}
	catch(my_exception h)
	{
		h.fun();
	}
}

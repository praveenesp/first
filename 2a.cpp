#include<iostream>
using namespace std;
class test
{
	int a,b,c;
	protected:
		int p,q;
	public:
	void get()
	{
		a=10;
		b=15;
		c=20;
    }	
    void put()
    {
    	cout<<a<<" "<<b<<" "<<c<<"\n";
	}
	void read()
	{
		p=q=50;
	}
};
int main()
{
	test obj;
	obj.get();
	obj.put();
	obj.read();
	return 0;
}

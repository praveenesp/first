#include<iostream>
using namespace std;
class test
{
	int a,b,c;
	public:
		void get(int a=5,int b=1,int c=3)
		{
			cout<<a<<" "<<b<<" "<<c<<"\n";
		}
};
int main()
{
	test obj;
	obj.get(10);
	obj.get(10,40,20);
	return 0;
}

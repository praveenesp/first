//passing objects
#include<iostream>
using namespace std;
class hi
{
	int a;
	public:
		int b;
		void hello(hi h)
		{
			b=b+h.b;
		}
};
int main()
{
	hi h1,h2;
	h1.b=100;
	h2.b=200;
	cout<<"initial:";
	cout<<h1.b<<" "<<h2.b<<endl;
	h1.hello(h2);
	cout<<"after:";
	cout<<h1.b<<" "<<h2.b;
	return 0;
}

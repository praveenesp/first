//returning objects
#include<iostream>
using namespace std;
class hi
{
	
	public:
		int b;
		hi hello(hi h1,hi h2)
		{
			hi h;
			h.b=h1.b+h2.b;
		}
};
int main()
{
	hi h1,h2,h3;
	h1.b=100;
	h2.b=200;
	h3.b=150;
	cout<<"initial:";
	cout<<h1.b<<" "<<h2.b<<" "<<h3.b<<endl;
	h3=h3.hello(h1,h2);
	cout<<"after:";
	cout<<h1.b<<" "<<h2.b<<" "<<h3.b<<endl;
	return 0;
}

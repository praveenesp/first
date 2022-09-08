#include<iostream>
using namespace std;
int c=1;
class show
{
	public:
		show()
		{
			cout<<"constructor is called \n"<<c<<"\n";
			c++;
		}
		~show()
		{
			c--;
			cout<<"constructor is  destructed \n"<<c<<"\n";
			
		}
};
int main()
{
	show p,q;
	cout<<"CPPLAB \n";
	{
		show r,s;
	}
	show t;
	return 0;
}

#include<iostream>
using namespace std;
class base
{
	public:void show()
	        {
	        	cout<<"this is base"<<endl;               //function overriding
			}
	
};
class derived:public base
{
	public:void show()
	        {
	        	cout<<"Base class overwritten";
			}
};
int main()
{
	derived obj;
	obj.show();
	return 0;
}

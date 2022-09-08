#include<iostream>
using namespace std;
class base
{
	int x,y;
	public:void get(int a,int b)         //operator overloading
	{
		x=a;
		y=b;
	}
	void show()
	{
		cout<<x<<" "<<y<<endl;
	}
	base operator *(base obj)
	{
		base temp;
		temp.x=x*obj.x;
		temp.y=y*obj.y;
		return temp;
	}
	base operator +(base obj)
	{
		base temp;
		temp.x=x+obj.x;
		temp.y=y+obj.y;
		return temp;
		
	}
};
int main()
{
	base obj,obj1,obj2,obj3,obj4;
	obj1.get(9,8);
	obj2.get(1,2);
	obj3=obj1.operator *(obj2);
	obj4=obj1.operator +(obj2);
	obj3.show();
	obj4.show();
	return 0;
}

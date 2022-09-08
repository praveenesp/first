#include<iostream>
using namespace std;
class code
{
	int id;
	public:
		code()
		{
			cout<<"hello";                        // default constructor
		}
		code(int a)
		{
			id=a;                                 //parameterized constructor
			cout<<id<<"\n";
		}
		code(code &x)
		{
			id=x.id;                              // copy connstructor
		}
		void display()
		{
			cout<<id;
		}
};
class box
{
	int c=0;
	public:
		box()
		{
			c++;
			cout<<"\n";
			cout<<"object created"<<" "<<c;
	    }
	    ~box()                                                     //destructor
	    {
	    	c--;
	    	cout<<"\n"<<"object destructed"<<" "<<c;
		}
};
int main()
{
	code obj;
	code obj1(100);
	code b1(obj1);               //calling copy constructor
	b1.display();
	box A,D;
	return 0;
}

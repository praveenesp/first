#include<iostream>
using namespace std;
//base class
class base
{
	public:
		int vb;
		void display()
		{
			cout<<"display base class"<<endl<<"base variable "<<vb<<endl;
		}
};
//derived class
class derived:public base
{
	public:
		int vd;
		void show() 
		{
			cout<<"vd "<<vd<<endl;	
		}
};
int main()
{
	base *bp;
	base objbase;
	derived objderv;
	bp=&objderv; bp->vb=100;
	bp->display();
	bp->vb=200;
	bp->display();
	derived *dp;
	dp=&objderv;
	dp->vb=948;
	dp->vd=98;
	dp->display();
	dp->show();
	return 0;
}

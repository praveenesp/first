#include<iostream>
using namespace std;
class item
{
	int price;
	char name[20];
	public:
		void get()
		{
			cout<<"item name =";
			cin>>name;
			cout<<"price = ";
			cin>>price;
		}
		void put()
		{
			cout<<"name: "<<name<<"\n";
			cout<<"price :"<<price<<"\n";
		}
};
const int size =2;
int main()
{
	item t[size];
	for(int i=0;i<size;i++)
	{
		cout<<"item :"<<(i+1)<<"\n";
		t[i].get();
	}
	for(int i=0;i<size;i++)
	{
		cout<<"item details:"<<(i+1)<<"\n";
		t[i].put();
	}
}

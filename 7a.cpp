#include<iostream>
using namespace std;
int main()
{
	int a[20],i,n,g;
	cout<<"enter no of elements in the way:";
	cin>>n;
	cout<<"enter elements";
	for(i=0;i<n;i++)
	   cin>>a[i];
	cout<<"\n enter number greater than array size:";
	cin>>g;
	cout<<endl;
	try
	{
		for(i=0;i<g;i++)
		{
			if(i>=n)
			 throw(i);
			else
			  cout<<a[i]<<" "; 	
		}
   }
   	catch(int p)
	{
		cout<<"\n index- "<<p<<" out of range for next element in the array";
	} 
}

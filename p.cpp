#include<iostream>
using namespace std;
int main()
{
	int a[20],n,i;
	cout<<"enter limit:";
	cin>>n;
	cout<<"enter array:";
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
	
	cout<<"\narray is:";
	for(i=0;i<n;i++);
	{
	cout<<a[i]<<endl;
	}
	cout<<"\nalternate array is:";
	for(i=0;i<n;i=i+2);
	{
	cout<<a[i]<<endl;
	}
		
}

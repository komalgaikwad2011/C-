#include<iostream>
using namespace std;
void area(double r,double l)
{
	cout<<"area of cone:"<<3.14*r*(r+l)<<endl;
}
void area(int r)
{
	cout<<"area of sphere:"<<4*3.14*r*r<<endl;
}
void area(double r)
{
	cout<<"area of circle:"<<3.14*r*r<<endl;
}
int main()
{
	int r;
	cout<<"enter redius:";
	cin>>r;
	area(2,4);
	area(6);
	area(4);
}

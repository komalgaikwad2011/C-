#include<iostream>
using namespace std;
class mynumber
{
	public:
	int a,b,c;
	mynumber()
	{
	a=3;
	b=4;
	c=6;
	}
	mynumber(int a,int b,int c)
	{
	this->a=a;
	this->b=b;
	this->c=c;
	}
	mynumber(int a,int b,double c=4)
	{
	this->a=a;
	this->b=b;
	this->c=c;
	}
	void average()
	{
	int avg=(a+b+c)/3;
	cout<<"average:"<<avg<<endl;
	}
};
int main()
{
	mynumber m1;
	mynumber m2(3,5,7);
	mynumber m3(5,7);
	m1.average();
	m2.average();
	m3.average();
}

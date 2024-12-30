#include<iostream>
using namespace std;
class shape
{
	public:
	virtual void accept()=0;
	virtual void area()=0;	
};
class circle:public shape
{
	public:
	int r;
	void accept()
	{
	cout<<"enter radius:";
	cin>>r;
	}
	void area()
	{
	cout<<"area of circle:"<<3.14*r*r;
	}
};
class rectangle:public shape
{
	public:
	int l,b;
	void accept()
	{
	cout<<"enter l and b:";
	cin>>l>>b;
	}
	void area()
	{
	cout<<"area of reactanle:"<<l*b;
	}
};
class triangle:public shape
{
	public:
	int b,h;
	void accept()
	{
	cout<<"enter base and height:";
	cin>>b>>h;
	}
	void area()
	{
	cout<<"area of tringle:"<<0.5*b*h;
	}
};
int main()
{
	circle c;
	rectangle r;
	triangle t;
	c.accept();
	c.area();
	r.accept();
	r.area();
	t.accept();
	t.area();
}

#include<iostream>
using namespace std;
class customer
{
	public:
	string name;
	int phno;
	void accept()
	{
	cout<<"enter name and phno:";
	cin>>name>>phno;
	}
};
class depositor:public customer
{
	public:
	int accno,bal;
	void accept()
	{
	cout<<"enter accno and bal:";
	cin>>accno>>bal;
	}
};
class borrower:public depositor
{
	public:
	int loan,amt;
	void accept()
	{
	customer::accept();
	depositor::accept();
	cout<<"enter loan and amt:";
	cin>>loan>>amt;
	}
	void display()
	{
	cout<<"name:"<<name<<endl;
	cout<<"phno:"<<phno<<endl;
	cout<<"accno:"<<accno<<endl;
	cout<<"bal:"<<bal<<endl;
	cout<<"loan:"<<loan<<endl;
	cout<<"amt:"<<amt<<endl;
	}
};
int main()
{
	borrower b[20];
	int n;
	cout<<"enter limit:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
	b[i].accept();
	}
	for(int i=0;i<n;i++)
	{
	b[i].display();
	}
}

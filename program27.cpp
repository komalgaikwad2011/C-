#include<iostream>
using namespace std;
class employee
{
	public:
	int eno;
	 int sal;
	string ename,desig;
	employee(int eno,string ename,string desig,int sal)
	{
	this->eno=eno;
	this->ename=ename;
	this->desig=desig;
	this->sal=sal;
	}
	void display()
	{
	cout<<"eno:"<<eno<<endl;
	cout<<"ename:"<<ename<<endl;
	cout<<"desig:"<<desig<<endl;
	cout<<"sal:"<<sal<<endl;
	}
	void maximum(employee e1,employee e2)
	{
	if(e1.sal>e2.sal)
	{
	e1.display();
	}
	else
	{
	e2.display();
	}
	}
	
};
int main()
{
	employee e1(1,"aaa","prof",200);
	e1.display();
	employee e2(2,"bbb","clerk",300);
	e2.display();
	cout<<"maximum salry:"<<endl;
	e1.maximum(e1,e2);
}

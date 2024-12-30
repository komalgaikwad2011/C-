#include<iostream>
using namespace std;
class product
{
	protected:
	int pid,price;
	string pname;
	public:
	void accept()
	{
	cout<<"enter pid,pname,price:";
	cin>>pid>>pname>>price;
	}
};
class Discount:public product
{
	int discount,totaldiscount,total=0;
	public:
	void accept()
	{
	product::accept();
	cout<<"enter discount:";
	cin>>discount;
	}
	int cal_discount()
	{
	totaldiscount=price*discount/100;
	cout<<"\n discount:"<<totaldiscount;
	return totaldiscount;
	}
	int cal_price()
	{
	total=total+price;
	cout<<"\n price:"<<price;
	return total;
	}	
};
int main()
{
	int n,total=0,discount=0;
	cout<<"enter limit:";
	cin>>n;
	   Discount d[20];
	for(int i=0;i<n;i++)
	{
	  d[i].accept();
	}
	for(int i=0;i<n;i++)
	{
	total=total+d[i].cal_price();
	discount=discount+d[i].cal_discount();
	}
	cout<<"\n total price:"<<total;
	cout<<"\n total discount:"<<discount;
}

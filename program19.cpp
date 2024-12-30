#include<iostream>
using namespace std;
class mydate
{
	int dd,mm,yyyy;
	public:
	mydate(int dd,int mm,int yyyy)
	{
	this->dd=dd;
	this->mm=mm;
	this->yyyy=yyyy;
	}
	void display()
	{
string m[]={"jan","feb","mar","apr","may","jun","july","agst","sep","oct","nov","dec"};
	cout<<""<<dd<<""<<m[mm-1]<<""<<yyyy;
	}
};
int main()
{
	mydate ob(12,4,2024);
	ob.display();
}

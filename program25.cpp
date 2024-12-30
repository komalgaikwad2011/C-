#include<iostream>
using namespace std;
class employee
{
	public:
	int code;
	string name;
	void accept()
	{
	cout<<"enter empcode and name:";
	cin>>code>>name;
	}
	void display()
	{
	cout<<"code:"<<code<<endl;
	cout<<"name:"<<name<<endl;
	}
};
class fulltime:public employee
{
	public:
	int dail_rate,no_of_days,salary;
	void accept()
	{
	employee::accept();
	cout<<"enter dail_rate,no_of_days,salary:";
	cin>>dail_rate>>no_of_days>>salary;
	}
	void cal_sal()
	{
	salary=dail_rate*no_of_days;
	}
	void display()
	{
	employee::display();
	cout<<"dail_rate:"<<dail_rate<<endl;
	cout<<"no_of_days:"<<no_of_days;
	cout<<"salary:"<<salary;
	}
};
class parttime:public employee
{
	public:
	int no_of_working_hours,hourly_rate,salary;
	void accept()
	{
	cout<<"enter no_of_working_hours,hourly_rate,salary";
	cin>>no_of_working_hours>>hourly_rate>>salary;
	}
	void cal_sal()
	{
	salary=no_of_working_hours*hourly_rate;
	}
	void display()
	{
	employee::display();
	cout<<"no_of_working_hours"<<no_of_working_hours;
	cout<<"hourly_rate"<<hourly_rate;
	cout<<"salary"<<salary;
	}	
};
int main()
{
	int b,ch,cid,n;
	cout<<"enter no of emp:";
	cin>>n;
	parttime p[20];
	fulltime f[20];
	cout<<"enter 0 for fulltime and 1 for part time:";
	cin>>b;
	do{
cout<<"enter choice:1-accept ditails of n employee and cal sal\n2-display details of n employee\n3- search a given emp\n";
	cin>>ch;
	switch(ch)
	{
	case 1:if(b==0)
	       {
	       for(int i=0;i<n;i++)
	       {
	       f[i].accept();
	       f[i].cal_sal();
	       }
	       }
	       if(b==1)
	       {
	       for(int i=0;i<n;i++)
	       {
	       p[i].accept();
	       p[i].cal_sal();
	       }
	       }
	       break;
	case 2:if(b==0)
	       {
	       for(int i=0;i<n;i++)
	       {
	       f[i].display();
	       cout<<endl;
	       }
	       }
	       if(b==1)
	       {
	       for(int i=0;i<n;i++)
	       {
	       p[i].display();
	       cout<<endl;
	       }
	       }
	       break;
	case 3:cout<<"\n enter emp id to search:";
	       cin>>cid;
	       for(int i=0;i<n;i++)
	       {
	       if(f[i].code==cid)
	       {
	       cout<<"\n fulltime emp found:"<<endl;
		f[i].display();
	       }
	       else if(p[i].code==cid)
	       {
	       cout<<"\n parttime emp found:"<<endl;
		p[i].display();
	       }
	       }
	       break;
	default:cout<<"invalid choice:";
	        break;
	        }
	}while(ch!=4);
}

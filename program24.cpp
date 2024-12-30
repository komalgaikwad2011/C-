#include<iostream>
using namespace std;
class personnel
{
	public:
	string name,addr,email,date;
	void accept()
	{
	cout<<"enter name,addr,email and date:";
	cin>>name>>addr>>email>>date;
	}
};
class academic
{
	public:
	int marks_in_tenth,marks_in_twelth;
	string class_ob;
	void accept()
	{
	cout<<"enter marks in tenth,twelth and class_ob:";
	cin>>marks_in_tenth>>marks_in_twelth>>class_ob;
	}
};
class bio_data:public personnel,public academic
{
	public:
	void accept()
	{
	personnel::accept();
	academic::accept();
	}
	void display()
	{
	cout<<"name:"<<name<<endl;
	cout<<"addr:"<<addr<<endl;
	cout<<"email:"<<email<<endl;
	cout<<"date:"<<date<<endl;
	cout<<"marks_in_tenth:"<<marks_in_tenth;
	cout<<"marks_in_twelth:"<<marks_in_twelth;
	cout<<"class_ob:"<<class_ob;
	}	
};
int main()
{
	bio_data b;
	b.accept();
	b.display();
}

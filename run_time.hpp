#include<iostream>
#include<string.h>
using namespace std;
namespace run
{
class one
{
	char *name;
	float salary;
	int no;
public:
	one(char *from, float s, int n)
    {
	 cout<<"run time polymorphism"<<endl;
	 cout<<"Constructor"<<endl;
	 name= new char[15];
	 strcpy(name,from);
	 salary=s;
	 no=n;
    }
	void display()
	{
		cout<<"Name= "<<name<<endl;
		cout<<"Salary= "<<salary<<endl;
		cout<<"No= "<<no<<endl;
	}
	virtual void show()
	{
		cout<<"virtual fnction"<<endl;
	}

};
class two:public one
{
	char address[30];
public:
	two(char *to, float s, int n,char *from):one(to,s,n)
{
		cout<<"Calling derived constructor"<<endl;
		strcpy(address,from);
}
	void show()
	{
		cout<<"Address= "<<address<<endl;
	}
};
}

#include<iostream>
#include<string.h>
using namespace std;
namespace basic
{
class base
{
	char name[10];
	float salary;
	int roll_no;
public:
	base(char *from, float s,int r)
    {
	 cout<<"Constructor"<<endl;
	 strcpy(name,from);
	 salary=s;
	 roll_no=r;
    }
	void display()
	{
		cout<<"Name= "<<name<<endl;
		cout<<"Salary= "<<salary<<endl;
	}
	~base()
	{
		cout<<"Destructor"<<endl;
	}
};
}

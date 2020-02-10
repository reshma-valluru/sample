#include<iostream>
#include<string.h>
using namespace std;
namespace bas
{
class base
{
	char name[10];
	float salary;
	int age;
public:
	base(char *from, float s, int a)
    {
	 cout<<"Calling constructor"<<endl;
	 strcpy(name,from);
	 salary=s;
	 age=a;
    }
	base(base &ref)
	{
		cout<<"Calling Copy construuctor"<<endl;
		strcpy(name, ref.name);
		salary=ref.salary;
		age=ref.age;
	}
	base &operator=(base &ref)
	{
		cout<<"Calling Assignment Operator"<<endl;
		strcpy(name,ref.name);
		salary=ref.salary;
		age=ref.age;

	}
	void display()
	{
		cout<<"Name= "<<name<<endl;
		cout<<"Salary= "<<salary;
		cout<<"AGE= "<<age<<endl;
	}
	~base()
	{
		cout<<"Destructor"<<endl;
	}
};
}

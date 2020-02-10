#include<iostream>
#include<string.h>
using namespace std;
namespace copy
{
 class employee
 {
	 char *emp_name;
	 int emp_id;
	 char *email_id;
 public:
	 employee(char *name, int id, char *mail)
     {
		 cout<<"Calling copy constructor"<<endl;
		 emp_name=new char[20];
		 email_id=new char[50];
		 strcpy(emp_name,name);
		 emp_id=id;
		 strcpy(email_id,mail);
     }
     employee(employee &other)
     {
    	 cout<<"Calling copy constructor"<<endl;
    	 emp_name=new char[20];
    	 email_id=new char[50];
    	 strcpy(emp_name,other.emp_name);
    	 emp_id=other.emp_id;
    	 strcpy(email_id,other.email_id);
     }
     employee &operator=(employee &other)
     {
    	 cout<<"Calling Assignment Operator"<<endl;
    	 strcpy(emp_name,other.emp_name);
    	 emp_id=other.emp_id;
    	 strcpy(email_id,other.email_id);
     }
     void display()
     {
    	 cout<<"Name of the Employee= "<<emp_name<<endl;
    	 cout<<"ID of the Employee= "<<emp_id<<endl;
    	 cout<<"Email-ID of the Employee= "<<email_id<<endl;
     }
     ~employee()
     {
    	 cout<<"Calling Destructor"<<endl;
    	 delete []emp_name;
    	 delete []email_id;
     }
     };
}

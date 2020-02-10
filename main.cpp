#include<iostream>
#include"class.hpp"
#include"compile_time.hpp"
#include"run_time.hpp"
#include"shallow.hpp"
using namespace bas;
using namespace std;
using namespace basic;
using namespace run;
using namespace copy;
int main()
{
	basic::base obj("Reshma",29.566,10);
	obj.display();
	cout<<"************************************"<<endl;

	bas::base obj1("Pranav",39.585,20);
	obj1.display();
	cout<<"************************************"<<endl;

	bas::base obj2(obj1);
	obj2.display();
	cout<<"************************************"<<endl;

	bas::base obj3("Krishna",49.586,30);
	obj2.display();
	cout<<"************************************"<<endl;

	obj3=obj1;
	obj3.display();
	cout<<"************************************"<<endl;

	cout<<"\n\n Runtime Polymorphism"<<endl;

	run::two p("Reshma", 40.586,11,"Altiux Innovations, Bangalore");
	p.display();
	p.show();

	cout<<"\n\n Shallow copy compile time Polymorphism"<<endl;

	copy::employee obj5("Chowdary", 1188, "reshma.valluru92@gmail.com");
	obj5.display();

	copy::employee obj6("Krishna", 5588, "nandubabu25@gmail.com");
		obj6.display();

	copy::employee obj7(obj5);
			obj7.display();
	return 0;
}

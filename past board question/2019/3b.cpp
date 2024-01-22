//class named Employee (id,name,position,salary). initialize value and display information
#include<iostream>
using namespace std;
class Employee{
	int id;
	char name[30];
	char position[20];
	int salary;
	public:
		void setdata()
		{
			cout<<"Enter id: "<<endl;
			cin>>id;
			cout<<"Enter name: "<<endl;
			cin>>name;
			cout<<"Enter position: "<<endl;
			cin>>position;
			cout<<"Enter salary: "<<endl;
			cin>>salary;
		}
		void getdata()
		{
			cout<<"Id: "<<id<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Position: "<<position<<endl;
			cout<<"Salary: "<<salary<<endl;
		}
};
int main()
{
	Employee obj;
	obj.setdata();
	cout<<"The informations are: "<<endl;
	obj.getdata();
	return 0;
}

//display data from student and marksheet
#include<iostream>
using namespace std;

class Marksheet;

class Student{
	private:
		char name[20];
	public:
		void setname(){
			cout<<endl<<"Enter name: ";
			cin>>name;
		}
		friend void show (Student, Marksheet);
};

class Marksheet{
	private:
		int marks;
	public:
		void setamrks(){
			cout<<endl<<"Enter marks: ";
			cin>>marks;
		}
		friend void show (Student, Marksheet);
};

int main()
{
	Student obj1;
	Marksheet obj2;
	obj1.setname();
	obj2.setamrks();
	show(obj1,obj2);
	return 0;
}

void show(Student a,Marksheet b)
{
	cout<<endl<<"Name: "<<a.name;
	cout<<endl<<"Marks: "<<b.marks;
}

/*Design a c++ program with two classes student and marksheet.
Use a friend function to access and display the student's details and marks from both class.*/
#include<iostream>
using namespace std;
class Marksheet;
class Student{
	char name[20];
	public:
		void setname(){
			cout<<"Enter the name of student: "<<endl;
			cin>>name;
		}
		friend void showdata(Student a,Marksheet b);
};
class Marksheet{
	int marks;
	public:
		void setmarks(){
			cout<<"Enter marks: "<<endl;
			cin>>marks;
		}
		friend void showdata(Student a,Marksheet b);
};
int main()
{
	Student obj1;
	Marksheet obj2;
	obj1.setname();
	obj2.setmarks();
	showdata(obj1,obj2);
	return 0;
}
void showdata(Student temp1,Marksheet temp2)
{
	cout<<"The name of student you entered is "<<temp1.name<<endl;
	cout<<"And the marks is "<<temp2.marks;
}

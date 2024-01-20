//array of student class with data members name, roll number, marks
#include<iostream>
using namespace std;
class Student{
	char name[20];
	int roll_number;
	int marks;
	public:
		void setdata()
		{
			cout<<"Enter name: "<<endl;
			cin>>name;
			cout<<"Enter roll number: "<<endl;
			cin>>roll_number;
			cout<<"Enter marks: "<<endl;
			cin>>marks;
			cout<<endl;
		}
		void display()
		{
			cout<<name<<endl;
			cout<<roll_number<<endl;
			cout<<marks<<endl;
			cout<<endl;
		}
};
int main()
{
	Student obj[5];
	for(int i=0;i<5;i++)
	{
		obj[i].setdata();
	}
	for(int i=0;i<5;i++)
	{
		obj[i].display();
	}
}

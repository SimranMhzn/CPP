#include<iostream>
using namespace std;

class Student{
	char name[20];
	int roll;
	int marks;
	public:
		void setdata()
		{
			cout<<endl<<"Enter name: ";
			cin>>name;
			cout<<endl<<"Enter roll no: ";
			cin>>roll;
			cout<<endl<<"Enter marks: ";
			cin>>marks;
		}
		void getdata()
		{
			cout<<endl<<name;
			cout<<endl<<roll;
			cout<<endl<<marks;
		}
};
int main()
{
	Student obj[2];
	int i=0;
	cout<<endl<<"Getting data: ";
	for(i=0;i<2;i++)
	{
		obj[i].setdata();
	}
	cout<<endl<<"Keeping data: ";
	for(i=0;i<2;i++)
	{
		obj[i].getdata();
	}
	return 0;
}



#include<iostream>
using namespace std;
class Marksheet;
class Student{
	char name[20];
	public:
		void setname(){
			cout<<endl<<"Enter name:";
			cin>>name;
		}
		friend void showdata(Student,Marksheet);
};

class Marksheet{
	int total;
	public:
		void setmarks(){
			cout<<endl<<"Enter totalmarks: "<<total;
			cin>>total;
		}
		friend void showdata(Student,Marksheet);
};

int main()
{
	Student x;
	Marksheet y;
	x.setname();
	y.setmarks();
	showdata(x,y);
	return 0;
}

void showdata(Student a, Marksheet y)
{
	cout<<endl<<"The name of student is "<<a.name;
	cout<<endl<<"The total marks of student is "<<y.total;
}

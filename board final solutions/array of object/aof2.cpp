//array of student class with data members name, roll number, marks
#include<iostream>
using namespace std;
class User{
	public:
	char name[20];
	int age;
		void setdata()
		{
			cout<<"Enter name: "<<endl;
			cin>>name;
			cout<<"Enter age: "<<endl;
			cin>>age;
			cout<<endl;
		}
		int getage()
		{
			return age;
		}
		void display()
		{
			cout<<name<<endl;
			cout<<age<<endl;
			cout<<endl;
		}
};
int main()
{
	User obj[5];
	int value1, value2;
	for(int i=0;i<5;i++)
	{
		obj[i].setdata();
	}
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(obj[i].age>obj[j].age)
			{
				User temp;
				temp=obj[i];
				obj[i]=obj[j];
				obj[j]=temp;
			}
		}
	}
	for(int i=0;i<5;i++)
	{
		obj[i].display();
	}
}

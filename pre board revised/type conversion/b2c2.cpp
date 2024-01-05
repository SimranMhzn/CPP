//basic to class using operator overloading
#include<iostream>
using namespace std;

class Time{
	int hrs;
	int min;
	public:
		void operator =(int temp)
		{
			hrs=temp/60;
			min=temp%60;
		}
		void display(){
			cout<<hrs<<"Hours";
			cout<<endl<<min<<"Minutes";
		}
};

int main()
{
	Time t;
	int duration;
	cout<<endl<<"Enter duration in minutes: ";
	cin>>duration;
	t=duration;
	t.display();
}

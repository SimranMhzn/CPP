//basic to class using constructor
#include<iostream>
using namespace std;

class Time{
	int hrs;
	int min;
	public:
		Time(int t)
		{
			hrs=t/60;
			min=t%60;
		}
		void display()
		{
			cout<<hrs<<"Hours "<<endl;
			cout<<min<<"Minutes";
		}
};

int main()
{
	int duration;
	cout<<"Enter duration in minutes: "<<endl;
	cin>>duration;
	Time t=duration;
	t.display();
	return 0;
}

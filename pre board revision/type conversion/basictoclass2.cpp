#include<iostream>
using namespace std;
class Time{
	int hrs;
	int min;
	public:
		Time (int);
		void display();
};
Time::Time(int t)
{
	hrs=t/60;
	min=t%60;
}

void Time::display() 
{
	cout<<endl<<hrs<<"hours";
	cout<<endl<<min<<"minutes";
}
int main()
{
	int duration;
	cout<<"Enter duration: ";
	cin>>duration;
	Time t1=duration;
	t1.display();
	return 0;
}

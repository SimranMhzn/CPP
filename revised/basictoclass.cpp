#include<iostream>
using namespace std;

class time{
	int  hr;
	int min;
	public:
		void operator = (int temp)
		{
			hr=temp/60;
			min=temp%60;
		}
		void display()
		{
			cout<<endl<<hr<<"Hour";
			cout<<endl<<min<<"Minutes";
		}
};

int main()
{
	time t1;
	int duration;
	cout<<endl<<"Enter duration in minutes: ";
	cin>>duration;
	t1=duration;
	t1.display();
	return 0;
}

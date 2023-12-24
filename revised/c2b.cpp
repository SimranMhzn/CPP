//class to basic
#include<iostream>
using namespace std;
class Time{
	int hrs;
	int min;
	public:
		void setdata()
		{
			cout<<"Enter hours and minutes respectively: ";
			cin>>hrs>>min;
		}
		operator int()
		{
			int value;
			value=hrs*60+min;
			return value;
		}
};

int main()
{
	Time t;
	int duration;
	t.setdata();
	duration=t;
	cout<<"The duration is "<<duration;
}

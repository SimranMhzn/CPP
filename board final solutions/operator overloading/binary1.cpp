//prefix uniary operator
#include<iostream>
using namespace std;
class Uniary{
	int num;
	public:
		void setnum()
		{
			cout<<"Enter a nunmber: ";
			cin>>num;
		}
		void operator ++()
		{
			num=num+5;
		}
		void display()
		{
			cout<<endl<<"The value after overloading is "<<num;
		}
};
int main()
{
	Uniary obj;
	obj.setnum();
	++obj;
	obj.display();
	return 0;
}

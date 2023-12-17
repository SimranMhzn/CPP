#include<iostream>
using namespace std;

class Random{
	public:
	Random()
	{
		cout<<endl<<"Default contructor activated";
	}
	Random(int x)
	{
		cout<<endl<<"Parameterized constructor called. ";
		cout<<x;
	}	
};

int main()
{
	Random temp;
	Random temp1(9);
	return 0;
}

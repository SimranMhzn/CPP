#include<iostream>
using namespace std;

class x{
	int value=5;
	public:
		void operator ++(int)
		{
			value=value*2;
		}
		void display()
		{
			cout<<endl<<"The value after overloading is "<<value;
		}
};

int main()
{
	x temp;
	temp++;
	temp.display();
	return 0;
}

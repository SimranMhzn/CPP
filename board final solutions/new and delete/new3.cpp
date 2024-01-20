//cerate an object and delete
#include<iostream>
using namespace std;
class Add{
	int x=10,y=5;
	public:
		int addition()
		{
			int sum;
			sum=x+y;
			return sum;
		}
		void display()
		{
			cout<<"The sum of two numbers is "<<addition();
		}
};
int main()
{
	Add *ptr;
	ptr=new Add;
	ptr->display();
	delete ptr;
	return 0;
}

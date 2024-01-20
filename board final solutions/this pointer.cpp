//this pointer example
#include<iostream>
using namespace std;
class A{
	int a;
	public:
		A(int a)
		{
			this->a=a;
		}
		void display()
		{
			cout<<"The value of a is "<<a;
		}
};
int main()
{
	A obj(5);
	obj.display();
	return 0;
}

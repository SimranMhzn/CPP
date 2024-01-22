//types of constructor
#include<iostream>
using namespace std;
class A{
	int num1;
	int num2;
	public:
		/*default constructor
		A()
		{
			num1=5;
			cout<<"Default constructor called!"<<endl;
			cout<<"The value from default constructor is "<<num1;
		}*/
		//parameterized constructor
		A(int a)
		{
			num2=a;
			cout<<"Parameterized constructor called!"<<endl;
			cout<<"The value from parameterized constructor is "<<num2<<endl;
		}
		A (A &obj)
		{
			num2=obj.num2+50;
		}
		void display()
		{
			cout<<"Copy constructor called!"<<endl;
			cout<<"The value from copy constructor is "<<num2;
		}
};
int main()
{
	//A obj1;
	A obj2(10);
	A obj3=obj2;
	obj3.display();
	return 0;
}

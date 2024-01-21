//calculator with basic arithmetic operation
#include<iostream>
using namespace std;
class Calculator{
	static int num1;
	static int num2;
	public:
		static void setdata()
		{
			cout<<"Enter two numbers: "<<endl;
			cin>>num1>>num2;
		}
		static int add()
		{
			return num1+num2;
		}
		static int sub()
		{
			return num1-num2;
		}
		static int mul()
		{
			return num1*num2;
		}
		static int div()
		{
			return num1/num2;
		}
};
int main()
{
	Calculator obj;
	int choice;
	obj.setdata();
	cout<<"Select from given options: "<<endl;
	cout<<"1. Addition "<<endl;
	cout<<"2. Substraction "<<endl;
	cout<<"3. Multiplication "<<endl;
	cout<<"4. Division "<<endl;
	cin>>choice;
	if(choice==1)
	{
		int result;
		result=obj.add();
	}
	else if(choice==2)
	{
		int result;
		result=obj.sub();
	}
	else if(choice==3)
	{
		int result;
		result=obj.mul();
	}
	else if(choice==4)
	{
		int result;
		result=obj.div();
	}
	else
	{
		exit(0);
	}
}

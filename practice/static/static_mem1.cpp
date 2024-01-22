#include<iostream>
using namespace std;
class Calculator{
	static int num1,num2;
	public:
		static void additdion(){
			int add=num1+num2;
			cout<<endl<<"The addition is "<<add;
		}
		static void substraction(){
			int sub=num1-num2;
			cout<<endl<<"The substraction is "<<sub;
		}
		static void multiplication(){
			int mul=num1*num2;
			cout<<endl<<"The multiplication is "<<mul;
		}
		static void division(){
			int div=num1/num2;
			cout<<endl<<"The divisionion is "<<div;
		}
};
int Calculator::num1=10;
int Calculator::num2=2;
int main()
{
	Calculator obj;
	obj.additdion();
	obj.substraction();
	obj.multiplication();
	obj.division();
	return 0;
}

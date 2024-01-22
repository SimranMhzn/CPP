//pure virtual function example
#include<iostream>
using namespace std;
class Base{
	public:
		virtual void calculate()=0;//must be equals to zero
};
class Derive1:public Base{
	int x=10;
	int y=5;
	public:
		void calculate(){
			cout<<"Addition: "<<x+y<<endl;
		}//defined in all derived classes 
};
class Derive2:public Base{
	int x=10;
	int y=5;
	public:
		void calculate(){
			cout<<"Substraction: "<<x-y<<endl;
		}
};
int main()
{
	Derive1 obj1;
	obj1.calculate();
	Derive2 obj2;
	obj2.calculate();
}

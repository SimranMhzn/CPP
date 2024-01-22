//virtual function
#include<iostream>
using namespace std;
class A{
	int x=10;
	public:
		/*void show(){
			cout<<x;
		}*/
		virtual void show(){
			cout<<x;
		}//maeks the function virtual so derived class function is called
};
class B:public A{
	int y=20;
	public:
		void show()
		{
			cout<<y;
		}
};
int main()
{
	B obj;
	A *ptr=&obj;
	ptr->show();//show value from base class despite address being pinter with pointer
	return 0;
}

//illustrate copy constructor
#include<iostream>
using namespace std;
class A {
	int x;
	public:
		A(int y)
		{
			x=y;
		}
		A(A &obj)
		{
			x=obj.x;
		}
		void display()
		{
			cout<<"The value is "<<x;
		}
};
int main()
{
	A o1(10);
	A o2=o1;
	o2.display();
	return 0;
}

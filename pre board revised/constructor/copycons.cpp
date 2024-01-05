#include<iostream>
using namespace std;
class x{
	int num;
	public:
		x(int a)
		{
			num=a;
		}
		x(x &temp)
		{
			num=temp.num;
		}
		void display()
		{
			cout<<num;
		}
};

int main()
{
	x obj(5);
	x obj2(obj);
	obj2.display();
}

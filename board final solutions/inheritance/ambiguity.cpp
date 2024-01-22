//inheritance ambiguity
#include<iostream>
using namespace std;
class A{
	public:
	int a=10;
		void getdata()
		{
			cout<<"The number is "<<a;
		}
};
class B:virtual public A{
	int b=11;
};
class C:virtual public A{
	int c=12;
};
class D:public B,public C{
	int d=13;
};
int main()
{
	D obj;
	obj.getdata();
	return 0;
}

//uniary postfix
#include<iostream>
using namespace std;

class Postfix{
	int x;
	public:
		void setdata(){
			cout<<"Enter a number: "<<endl;
			cin>>x;
		}
		void operator ++(int)
		{
			x=x*2;
		}
		void display()
		{
			cout<<"The value after overloading is "<<x;
		}
};

int main()
{
	Postfix obj;
	obj.setdata();
	obj++;
	obj.display();
	return 0;
}

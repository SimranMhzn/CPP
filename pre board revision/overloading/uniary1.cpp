//uniary prefix
#include<iostream>
using namespace std;

class Prefix{
	int x;
	public:
		void setdata(){
			cout<<"Enter a number: "<<endl;
			cin>>x;
		}
		void operator ++()
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
	Prefix obj;
	obj.setdata();
	++obj;
	obj.display();
	return 0;
}

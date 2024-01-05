//one class to another class
#include<iostream>
using namespace std;

class a{
	int x=10;
	public:
		int getdata(){
			return x;
		}
};

class b{
	int y;
	public:
		void operator =(a temp)
		{
			y=temp.getdata();
		}
		void display(){
			cout<<endl<<"The value is "<<y;
		}
};

int main()
{
	a obj1;
	b obj2;
	obj2=obj1;
	obj2.display();
	return 0;
}

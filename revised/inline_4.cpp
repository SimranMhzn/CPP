//area of rectangle
#include<iostream>
using namespace std;

class a{
	int length,bredth;
	public:
		void set(){
			cout<<endl<<"Enter length and bredth respectively: ";
			cin>>length>>bredth;
		}
		inline void check()
		{
			int area=length*bredth;
			cout<<endl<<"The area is "<<area;
		}
};

int main()
{
	a obj;
	obj.set();
	obj.check();
	return 0;
}

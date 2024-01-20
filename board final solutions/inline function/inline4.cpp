//calculate area of rectangle with user defined input
#include<iostream>
using namespace std;
class Area{
	int l;
	int b;
	public:
		void setdata()
		{
			cout<<"Enter length and bredth: ";
			cin>>l>>b;
		}
		inline void calculate()
		{
			cout<<"The area is "<<l*b;
		}
};
int main()
{
	Area obj;
	obj.setdata();
	obj.calculate();
	return 0;
}

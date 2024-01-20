//find square of number
#include<iostream>
using namespace std;
class Square{
	int num;
	public:
		void setdata()
		{
			cout<<"Enter a number: ";
			cin>>num;
		}
		inline void calculate()
		{
			cout<<endl<<"The square of "<<num<<" is "<<num*num;
		}
};
int main()
{
	Square obj;
	obj.setdata();
	obj.calculate();
	return 0;
}

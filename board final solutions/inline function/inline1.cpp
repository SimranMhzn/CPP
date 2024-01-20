//calculate factorial
#include<iostream>
using namespace std;
class Factorial{
	int num;
	public:
		void setdata()
		{
			cout<<"Enter a number: ";
			cin>>num;
		}
		inline int Calculate()
		{
			int total=1;
			for(int i=1;i<=num;i++)
			{
				total=total*i;
			}
			return total;
		}
};
int main()
{
	Factorial obj;
	obj.setdata();
	int result=obj.Calculate();
	cout<<"The factorial is "<<result;
	return 0;
}

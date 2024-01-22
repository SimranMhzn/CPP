#include<iostream>
using namespace std;
class Factorial{
	static int num;
	public:
		static void setdata()
		{
			cout<<"enter any number: "<<endl;
			cin>>num;
		}
		static int calculate()
		{
			int i=0, total=1;
			for(i=1;i>=num;i++)
			{
				total=num*i+total;
				return total;
			}
		}
};
int main()
{
	Factorial temp;
	int result;
	temp.setdata();
	result=temp.calculate();
	cout<<"The factorial is "<<result;
	return 0;
}

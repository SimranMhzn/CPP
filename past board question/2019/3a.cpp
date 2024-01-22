//example of default arguments
#include<iostream>
void calculate(int x=10,int y=15);
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	calculate(a,b);//both arguments passed
	calculate(a);//first argument passed
	calculate();//no argument passed
	return 0;
}
void calculate(int m,int n)
{
	int total=m+n;
	cout<<"The value is "<<total<<endl;
}

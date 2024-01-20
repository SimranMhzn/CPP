//explicit conversion to convert floating number to an integer
#include<iostream>
using namespace std;
int main()
{
	int x=5;
	int y=10.5;
	x=int(y);//function style
	cout<<"The value of x after conversion is "<<x;
	return 0;
}

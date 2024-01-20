//calculate area of rectangle
#include<iostream>
using namespace std;
int area(int len=15,int bred=17);
int main()
{
	int length,bredth,result;
	cout<<"Enter length and bredth respectively: ";
	cin>>length>>bredth;
	result=area(length);
	cout<<"The area of rectangle is "<<result;
	return 0;
}
int area (int l,int b)
{
	int calculate=l*b;
	return calculate;
}

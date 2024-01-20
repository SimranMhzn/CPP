//calculate volume of cube with default argument for length , width and height
#include<iostream>
using namespace std;
int volume(int len=15,int wid=7,int heig=9);
int main()
{
	int length,width,height,result;
	cout<<"Enter length, width and height respectively: ";
	cin>>length>>width>>height;
	result=volume(length);
	cout<<"The volume of cube is "<<result;
	return 0;
}
int volume (int l,int w,int h)
{
	int calculate=l*w*h;
	return calculate;
}

#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	ptr=new int;
	*ptr=45;
	cout<<"The value is "<<*ptr<<".";
	delete ptr;
	return 0;
};


#include<iostream>
using namespace std;

int main()
{
	int *ptr;
	ptr=(new) int;
	cout<<endl<<"Enter any number: ";
	cin>>*ptr;
	cout<<*ptr;
	delete ptr;
	return 0;
}

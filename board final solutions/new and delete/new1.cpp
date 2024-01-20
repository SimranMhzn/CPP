//dynamically alocate memory for integer and free it
#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	ptr=new int;
	*ptr=45;
	cout<<"The value that is dynamically allocated is "<<*ptr;
	delete ptr;
	return 0;
}

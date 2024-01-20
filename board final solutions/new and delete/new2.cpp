//dynamically allocate array of integer and delete it
#include<iostream>
using namespace std;
int main()
{
	int *ptr,num;
	cout<<"How many numbers do you want to enter? "<<endl;
	cin>>num;
	ptr=new int[num];
	cout<<"Enter numbers: ";
	for(int i=0;i<num;i++)
	{
		cin>>*(ptr+i);
	}
	cout<<endl<<"The numbers entered are: ";
	for(int i=0;i<num;i++)
	{
		cout<<*(ptr+i)<<endl;
	}
	delete []ptr;
	return 0;
}

#include<iostream>
using namespace std;

int main(){
	int *ptr;
	int i=0,num;
	cout<<endl<<"How many numbers do you want to enter? ";
	cin>>num;
	ptr=new int[num];
	cout<<endl<<"Taking input";
	for(i=0;i<num;i++)
	{
		cout<<endl<<"Enter number: ";
		cin>>*(ptr+i);
	}
	cout<<endl<<"Displaying output";
	for(i=0;i<num;i++)
	{
		cout<<endl<<*(ptr+i);
	}
	delete []ptr;
	return 0;
}

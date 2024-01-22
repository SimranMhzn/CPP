//function template to ask 10 element and display 5 largest value
#include<iostream>
using namespace std;
template<class t>
void sort(t a[10])
{
	for(int i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"The assending number in array from fifth largest value is ";
	for(int k=5;k<10;k++)
	{
		cout<<a[k]<<endl;
	}
}
int main()
{
	int x[10],y[10];
	cout<<"Enter numbers for array: "<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>x[i];
		cout<<endl;
	}
	sort(x);
	return 0;
}

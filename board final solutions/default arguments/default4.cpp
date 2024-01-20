//print a message with default argument for number of time it should be repeated
#include<iostream>
using namespace std;
void output(int n=5);
int main()
{
	output();
	return 0;
}
void output(int m)
{
	for (int i=0;i<m;i++)
	{
		cout<<"Test"<<endl;
	}
}

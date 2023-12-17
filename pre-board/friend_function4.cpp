#include<iostream>
using namespace std;

class b;

class a{
	int num1;
	public:
	void seta()
	{
		cout<<endl<<"Enter a: ";
		cin>>num1;
	}
	friend class b;
};

class b{
	int num2;
	public:
	void setb()
	{
		cout<<endl<<"Enter b: ";
		cin>>num2;
	}
	void add()
	{
		a temp1;
		int sum;
		temp1.seta();
		sum=temp1.num1+num2;
		cout<<endl<<"The sum is "<<sum;
	}
};

int main()
{
	b temp2;
	temp2.setb();
	temp2.add();
	return 0;
}

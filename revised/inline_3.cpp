//odd or even
#include<iostream>
using namespace std;

class a{
	int num;
	public:
		void setnum(){
			cout<<endl<<"Enter number: ";
			cin>>num;
		}
		inline void check()
		{
			if(num%2==0)
			{
				cout<<endl<<"The number is even.";
			}
			else
			{
				cout<<endl<<"The number is odd.";
			}
		}
};

int main()
{
	a obj;
	obj.setnum();
	obj.check();
	return 0;
}

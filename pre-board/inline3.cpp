#include<iostream>
using namespace std;

class Check{
	int num;
	public:
		void setdata(){
			cout<<endl<<"Enter any number: ";
			cin>>num;
		}
		inline void result(){
			if(num%2==0)
			{
				cout<<endl<<num<<" is an even number.";
			}
			else
			{
				cout<<endl<<num<<" is a odd number.";
			}
		}
};

int main()
{
	Check obj;
	obj.setdata();
	obj.result();
	return 0;
}

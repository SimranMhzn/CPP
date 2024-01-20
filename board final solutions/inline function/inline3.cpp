//check number is odd or even
#include<iostream>
using namespace std;
class Check
{
	int num;
	public:
		void setdata()
		{
			cout<<"Enter a number: "<<endl;
			cin>>num;
		}
		inline void oddoreven()
		{
			if(num%2==0)
			{
				cout<<"The number is even. ";
			}
			else{
				cout<<"The number is odd. ";
			}
		}
};
int main()
{
	Check obj;
	obj.setdata();
	obj.oddoreven();
	return 0;
}

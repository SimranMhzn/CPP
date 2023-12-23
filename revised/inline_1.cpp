//factorial of number
#include<iostream>
using namespace std;

class a{
	int num;
	public:
		void setnumber(){
			cout<<endl<<"Enter a number: ";
			cin>>num;
		}
		inline int factorial()
		{
			int i=0,total=1;
			for(i=1;i<=num;i++)
			{
				total=i*total;
			}
			return total;
		};
};

int main()
{
	a obj;
	obj.setnumber();
	int result=obj.factorial();
	cout<<endl<<"The factorial is "<<result;
	return 0;
}



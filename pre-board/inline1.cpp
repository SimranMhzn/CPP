#include<iostream>
using namespace std;
class a{
	int a;
	public:
		void seta()
		{
			cout<<endl<<"Enter any number: ";
			cin>>a;
		}
		inline int factorial()
		{
			int i=0;
			int total;
			for(i=1;i<=a;i++)
			{
				total=i*a+total;
			}
			return total;
		}
};

int main()
{
	a temp;
	int result;
	temp.seta();
	result=temp.factorial();
	cout<<endl<<result;
	return 0;
}

//square of a num
#include<iostream>
#include<math.h>

using namespace std;

class a{
	int num;
	public:
		void setnum(){
			cout<<endl<<"Enter a number: ";
			cin>>num;
		}
		inline void square()
		{
			int total=pow(num,2);
			cout<<endl<<"The square of "<<num<<" is "<<total;
		}
};

int main()
{
	a obj;
	obj.setnum();
	obj.square();
	return 0;
}

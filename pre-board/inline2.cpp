#include<iostream>
using namespace std;

class Temp{
	int num;
	public: 
		void setnum(){
			cout<<endl<<"Enter a number: ";
			cin>>num;
		}
		inline void check(){
			cout<<endl<<"The square of "<<num<<" is "<<num*num;
		}
};

int main()
{
	Temp obj;
	obj.setnum();
	obj.check();
	return 0;
}

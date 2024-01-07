/*find square of number*/
#include<iostream>
using namespace std;
class Square{
	int num;
	public:
		void setnum(){
			cout<<"Enter a number: "<<endl;
			cin>>num;
		}
		inline void calculate(){
			cout<<"The square of "<<num<<" is "<<num*num;
		}
};
int main(){
	Square obj;
	obj.setnum();
	obj.calculate();
	return 0;
}

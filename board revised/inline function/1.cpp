/*cpp to calculate factorial of number*/
#include<iostream>
using namespace std;
class Factorial{
	int number;
	public:
		void setnumber(){
			cout<<"Enter a number: "<<endl;
			cin>>number;
		}
		inline void calculate_factorial(){
			int i,result=1;
			for(i=number;i>=1;i--){
				result=result*i;
			}
			cout<<"The factorial is "<<result<<endl;
		}
};
int main(){
	Factorial obj;
	obj.setnumber();
	obj.calculate_factorial();
	return 0;
}

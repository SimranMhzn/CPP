/*check odd or even*/
#include<iostream>
using namespace std;
class number{
	int num;
	public:
		void setnumber(){
			cout<<"Enter a number: "<<endl;
			cin>>num;
		}
		inline void check(){
			if(num%2==0){
				cout<<"The number is even.";
			}
			else{
				cout<<"The number is odd.";
			}
		}
};
int main(){
	number obj;
	obj.setnumber();
	obj.check();
	return 0;
}

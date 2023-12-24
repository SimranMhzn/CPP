#include<iostream>
using namespace std;

class add{
	int num;
	public:
		void setnum(){
			cout<<endl<<"Enter number: ";
			cin>>num;
		}
		add operator +(add &obj)
		{
			add temp;
			temp.num=num-obj.num;
			return temp;
		}
		void output(){
			cout<<num;
		}
};

int main(){
	add temp1,temp2,result;
	temp1.setnum();
	temp2.setnum();
	result=temp1+temp2;
	result.output();
	return 0;
}

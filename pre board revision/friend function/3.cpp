#include<iostream>
using namespace std;
class BankAccount{
	int bankbalance;
	public:
		void setbalance(){
			cout<<"Enter your bank balance: "<<endl;
			cin>>bankbalance;
		}
		friend int withdraw(BankAccount a);
};
int main(){
	BankAccount obj;
	obj.setbalance();
	int remaining=withdraw(obj);
	cout<<"The remaining balance in your bank account is "<<remaining<<endl;
	return 0;
}
int withdraw(BankAccount temp)
{
	int withdrawamt;
	flag:
	cout<<"Enter amount you want to withdraw: "<<endl;
	cin>>withdrawamt;
	if(withdrawamt<temp.bankbalance)
	{
		temp.bankbalance=temp.bankbalance-withdrawamt;
		return temp.bankbalance;
	}
	else{
		goto flag;
	}
}

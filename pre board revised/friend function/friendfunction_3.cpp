//withdraw amt and maintain proper validation
#include<iostream>
using namespace std;

class Bankaccount{
	private: 
		int amt=5000;
	public:
		friend int withdraw(Bankaccount);
};

int main()
{
	Bankaccount obj;
	int rem=withdraw(obj);
	cout<<endl<<"The remaining amt in your acc is "<<rem;
	return 0;
}

int withdraw(Bankaccount temp)
{
	int ask;
	flag:
	cout<<endl<<"How much do you want to withdraw?";
	cin>>ask;
	if(ask<temp.amt)
	{
		temp.amt=temp.amt-ask;
		cout<<endl<<"You have successfully withdrawn "<<ask<<" amount.";
		return temp.amt;
	}
	else{
		goto flag;
	}
}

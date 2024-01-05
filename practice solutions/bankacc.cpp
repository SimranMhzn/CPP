#include<iostream>
using namespace std;

class Bankaccount{
	int balance;
	public:
		Bankaccount()
		{
			balance=5000;
		}
		friend void withdraw(Bankaccount);
};

void withdraw(Bankaccount temp)
{
	int amt;
	cout<<endl<<"How much do you ant to withdraw?";
	cin>>amt;
	if(temp.balance>amt)
	{
		temp.balance=temp.balance-amt;
		cout<<endl<<"The amt has been successfully withdrawn.";
	}
}

int main()
{
	Bankaccount a;
	a.withdraw(Bankaccount a);
	cout<<endl<<"The remaining balance in your acc is "<<a.balance;
	return 0;
}

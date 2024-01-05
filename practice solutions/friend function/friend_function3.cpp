#include<iostream>
using namespace std;

class BankAccount{
	float money=5000;
	public:
		friend float withdraw(BankAccount);
};

int main()
{
	BankAccount temp;
	float total=withdraw(temp);
	cout<<endl<<"You have successfully withdrawn "<<total<<" rupees.";
	return 0;
}

float withdraw(BankAccount a)
{
	float ask,amount;
	cout<<endl<<"You have "<<a.money<<" amount in your account.";
	flag:
	cout<<endl<<"How much do you want to withdraw?";
	cin>>ask;
	if(ask>a.money)
	{
		cout<<endl<<"Your entered amount exceeds the amount you have in your account.";
		cout<<endl<<"Enter the amount properly.";
		goto flag;
	}
	amount=a.money-ask;
	a.money=amount;
	cout<<endl<<"You have "<<a.money<<" remaining balance.";
	return ask;
}

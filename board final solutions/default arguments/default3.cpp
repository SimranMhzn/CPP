//calculate total cost of product
#include<iostream>
using namespace std;
int cost(int quantity=5,int price=15000);
int main()
{
	int result;
	result=cost();
	cout<<"The price is "<<result;
	return 0;
}
int cost(int q,int p)
{
	return q*p;
}

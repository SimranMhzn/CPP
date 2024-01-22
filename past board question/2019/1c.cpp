//implicit adn explicit type constructor
#include<iostream>
using namespace std;
int main()
{
	int a;
	float b=7.75;
	a=b;//impicit
	a=(int)b;//c style explicit
	a=int(b);//function style explicit
	cout<<a;
	return 0;
}

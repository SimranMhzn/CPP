#include<iostream>
using namespace std;

class Circle{
	int radius;
	public:
		void getdata()
		{
			cout<<endl<<"Enter radius: ";
			cin>>radius;
		}
		friend float calculateArea(Circle);
};

int main()
{
	Circle c;
	float result;
	c.getdata();
	result=calculateArea(c);
	cout<<endl<<"The total area of circle is "<<result;
	return 0;
}

float calculateArea(Circle temp)
{
	float total;
	total=22/7*temp.radius*temp.radius;
	return total;
}

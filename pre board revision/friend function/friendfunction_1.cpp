//calculate area of circle and return area with friend function
#include<iostream>
using namespace std;

class Circle{
	private:
		int radius;
	public:
		void setdata()
		{
			cout<<endl<<"Enter the radius of circle: ";
			cin>>radius;
		}
		friend float calculateArea (Circle a);
};

int main()
{
	Circle obj;
	obj.setdata();
	float result=calculateArea(obj);
	cout<<endl<<"Area= "<<result;
	return 0;
}

float calculateArea (Circle temp)
{
	int total;
	total=22/7*temp.radius*temp.radius;
	return total;
}

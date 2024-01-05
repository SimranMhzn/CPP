/*Create a base class Shape with members width and height. 
Implement constructors to initialize these members and a virtual function calculateArea() that computes and returns the area of the shape.
Then, derive two classes Rectangle and Triangle from Shape. 
Each derived class should have its own constructor to initialize its specific members. 
Override the calculateArea() function in each derived class to compute the area of the respective shape (Rectangle or Triangle).
Finally, demonstrate the use of these classes by creating instances of Rectangle and Triangle, initializing their dimensions, and displaying their areas.*/
#include<iostream>
using namespace std;

class Shape{
	int width;
	int h;
	public:
		Shape()
		{
			width=10;
			h=5;
		}
		virtual int calculateArea()=0;
		/*{
			int area;
			area=width*h;
			return area;
		}*/
};

class Rectangle:public Shape{
	int length;
	int bredth;
	public:
		Rectangle()
		{
			length=5;
			bredth=2;
		}
		int calculateArea()
		{
			int area;
			area=length*bredth;
			return area;
		}
		
};

class Triangle:public Shape{
	int height;
	int bredth;
	public:
		Triangle()
		{
			height=2;
			bredth=7;
		}
		int calculateArea()
		{
			int area;
			area=(height*bredth)/2;
			return area;
		}
};

int main()
{
	Triangle obj1;
	Rectangle obj2;
	cout<<endl<<"The area of rectangle is "<<obj2.calculateArea();
	cout<<endl<<"The area of triangle is "<<obj1.calculateArea();
	return 0;
}



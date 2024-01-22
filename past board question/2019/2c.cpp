//add complex number of two diff class
#include<iostream>
using namespace std;
class Complex{
	int real;
	int imag;
	public:
		void setdata()
		{
			cout<<"Enter real part: "<<endl;
			cin>>real;
			cout<<"Enter imag part: "<<endl;
			cin>>imag;
		}
		Complex operator +(Complex &obj)
		{
			Complex temp;
			temp.real=real+obj.real;
			temp.imag=imag+obj.imag;
			return temp;
		}
		void display()
		{
			cout<<real<<"+"<<imag<<"i.";
		}
};
int main()
{
	Complex c1,c2,result;
	c1.setdata();
	c2.setdata();
	result=c1+c2;
	result.display();
	return 0;
}

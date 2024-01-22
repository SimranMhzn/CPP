//binary operator overloading example to add complex numbers
#include<iostream>
using namespace std;
class Complex{
	int real=0;
	int imag=0;
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
			cout<<"The complex number is "<<real<<" + "<<imag<<"i."<<endl;
		}
};
int main()
{
	Complex o1,o2,result;
	o1.setdata();
	o2.setdata();
	result=o1+o2;
	result.display();
	return 0;
}

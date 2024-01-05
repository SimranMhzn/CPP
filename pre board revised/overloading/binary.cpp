//binary overloading
#include<iostream>
using namespace std;

class Binary{
	int x;
	public:
		void setdata(){
			cout<<"Enter a number: "<<endl;
			cin>>x;
		}
		Binary operator +(Binary &obj){
			Binary temp;
			temp.x=x-obj.x;
			return temp;
		}
		void display()
		{
			cout<<"The value after overloading is "<<x;
		}
};

int main()
{
	Binary obj1,obj2,result;
	obj1.setdata();
	obj2.setdata();
	result=obj1+obj2;
	result.display();
}

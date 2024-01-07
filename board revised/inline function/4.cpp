/*compute area of rectangle*/
#include<iostream>
using namespace std;
class Rectangle{
	int length;
	int bredth;
	public:
		void setvalue(){
			cout<<"Enter length and bredth respectively: ";
			cin>>length>>bredth;
		}
		inline void calculatearea(){
			cout<<"The area of rectangle is "<<length*bredth;
		}
};
int main(){
	Rectangle obj;
	obj.setvalue();
	obj.calculatearea();
	return 0;
}

//constructor to update count when new car is created
#include<iostream>
using namespace std;
class Car{
	static int count;
	public:
		Car()
		{
			count++;
		}
		void showcount(){
			cout<<"The number of car created are: "<<count<<endl;
		}
};
int Car::count=10;
int main()
{
	Car obj1;
	obj1.showcount();
	return 0;
}

//amgibuity in multiple inheritance
#include<iostream>
using namespace std;
class Animal{
	public:
		void show()
		{
			cout<<"HIEE!"<<endl;
		}
};
class Dog:public Animal{
	
};
class Cat:public Animal{
	
};
class Baby:public Dog,public Cat{
	
};
int main()
{
	Baby obj;
	obj.show();
	return 0;
}

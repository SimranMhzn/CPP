//usage of friend class
#include<iostream>
using namespace std;

class paisa;

class rupee{
	int rs=12;
	public:
		friend class paisa;
};

class paisa{
	int p=2;
	public:
		void show(){
			rupee obj1;
			cout<<endl<<"The ruppes and paisa is "<<obj1.rs<<" rs "<<p<<" paisa respectively.";
		}
};

int main()
{
	paisa obj2;
	obj2.show();
	return 0;
}

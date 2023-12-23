//volume of sphere
#include<iostream>
#include<math.h>
using namespace std;

class a{
	int radius;
	public:
		void set(){
			cout<<endl<<"Enter radius: ";
			cin>>radius;
		}
		inline void check()
		{
			int cube=pow(radius,3);
			float volume=4/3*22/7*cube;
			cout<<endl<<"The volume of sphere is "<<volume;
		}
};

int main()
{
	a obj;
	obj.set();
	obj.check();
	return 0;
}

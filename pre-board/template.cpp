#include<iostream>
using namespace std;

template<class T>
class Area{
	T l;
	T b;
	public:
		T calculate(T x,T y){
			l=x;
			b=y;
			T area;
			area=l*b;
			cout<<"The total area is "<<area;
		}
};
int main()
{
	Area <int> temp(10,10);
	return 0;
}

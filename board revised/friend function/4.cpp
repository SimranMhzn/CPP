/*Develop a cpp program to show the usage of friend classes, where one class can access private me of another class.*/
#include<iostream>
using namespace std;
class Paisa;
class Rupee{
	int rs;
	public:
		void setrupee(){
			cout<<"Enter amt in rupees: "<<endl;
			cin>>rs;
		}
		friend void show(Rupee a,Paisa b);
};
class Paisa{
	int p;
	public:
		void setpaisa(){
			cout<<"Enter amt in paisa: "<<endl;
			cin>>p;
		}
		friend void show(Rupee a,Paisa b);
};
int main()
{
	Rupee obj1;
	Paisa obj2;
	obj1.setrupee();
	obj2.setpaisa();
	show(obj1,obj2);
	return 0;
}
void show(Rupee temp1,Paisa temp2)
{
	cout<<"The amount in rupees and paisa is "<<temp1.rs<<" and "<<temp2.p<<" respectively."<<endl;
}

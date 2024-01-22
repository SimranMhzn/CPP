//writing obj to file and read 
#include<iostream>
#include<fstream>
using namespace std;
class Details{
	int id;
	char name[20];
	public:
		void setdata()
		{
			cout<<"Enter id: ";
			cin>>id;
			cin.ignore();
			cout<<"Enter name: ";
			cin.getline(name,sizeof(name));
		}
		void display()
		{
			cout<<"ID: "<<id<<endl;
			cout<<"Name: "<<name;
		}
};
int main()
{
	Details o1;
	int num;
	fstream obj1;
	obj1.open("9nofile.txt",ios::out);
	o1.setdata();
	obj1.write((char*)&o1,sizeof(o1));
	obj1.close();
	
	Details o2;
	fstream obj2;
	obj2.open("9nofile.txt",ios::in);
	obj2.read((char*)&o2,sizeof(o2));
	o2.display();
	obj2.close();
}

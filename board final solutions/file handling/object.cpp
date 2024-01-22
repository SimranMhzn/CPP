//writing and reading object in a file
#include<iostream>
#include<fstream>
using namespace std;
class Student{
	int roll;
	char name[20];
	public:
		void setdata(){
			cout<<"Enter roll no: ";
			cin>>roll;
			cin.ignore();//ignores space after giving number input
			cout<<"Emter name: ";
			cin.getline(name, sizeof(name));//to get word after space 
		}
		void display(){
			cout<<"Roll no: "<<roll<<endl;
			cout<<"Name: "<<name;
		}
};
int main()
{
	Student obj;
	obj.setdata();
	//writing in a file
	fstream ptr1;
	ptr1.open("File2.txt",ios::out);
	ptr1.write((char*)&obj,sizeof(obj));
	ptr1.close();
	//reading in a file
	fstream ptr2;
	ptr2.open("File2.txt",ios::in);
	ptr2.write((char*)&obj,sizeof(obj));
	obj.display();
	ptr2.close();
}

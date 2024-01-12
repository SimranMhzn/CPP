//writing obj in file
#include<iostream>
#include<fstream>
using namespace std;
class Area{
	int length;
	int bredth;
	public:
		void setdata()
		{
			cout<<"Enter length and bredth respectively: ";
			cin>>length>>bredth;
		}
		void showdata()
		{
			cout<<endl<<"The length and bredth entered are "<<length<< " and "<<bredth<<" respectively.";
		}
};
int main()
{
	Area obj1;
	//writing obj in a file
	fstream ptr1;
	ptr1.open("objfile.txt",ios::out);
	obj1.setdata();
	ptr1.write((char*)&obj1,sizeof(obj1));
	ptr1.close();
	//reading obj from a file
	fstream ptr2;
	ptr2.open("objfile.txt",ios::in);
	fread((char*)&obj1, sizeof(obj1));
	obj.showdata();
	ptr2.close();
}

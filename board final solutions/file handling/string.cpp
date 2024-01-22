//file handling to write and read a line
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	//writing in a file
	fstream ptr1;
	ptr1.open("File1.txt",ios::out);
	char data1[50];
	cout<<"Enter your name: "<<endl;
	cin.getline(data1,sizeof(data1));
	ptr1<<data1;
	ptr1.close();
	//reading from a file
	fstream ptr2;
	ptr2.open("File1.txt",ios::in);
	char data2[50];
	ptr2.getline(data2, sizeof(data2));
	cout<<"The name written is "<<data2;
	ptr2.close();
}

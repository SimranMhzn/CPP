//reading and writing sentence in a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{												
	//char sentence1[50];
	//writing on a file
	fstream obj1;
	obj1.open("sentence.txt",ios::out);
	/*cout<<"Enter a sentence: "<<endl;
	cin>>sentence1;*/
	obj1<<"My name is simran";
	obj1.close();
	//reading on a file
	fstream obj2;
	char ch;
	obj2.open("sentence.txt",ios::in);
	while(obj2.get(ch))
	{
		cout<<ch;
	}
	obj2.close();
	return 0;
}

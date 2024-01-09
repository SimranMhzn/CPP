//reading and writing sentence in a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{												
	char sentence1[50];
	//writing on a file
	fstream obj1;
	obj1.open("sentence.txt",ios::out);
	cout<<"Enter a sentence: "<<endl;
	cin>>sentence1;
	obj1<<sentence1;
	obj1.close();
	//reading on a file
	/*fstream obj2;
	char sentence2[50];
	obj2.open("sentence.txt",ios::in|ios::binary);
    obj2.getline(sentence2, 50);
    cout<<sentence2;
	obj2.close();*/
	return 0;
}

#include<iostream>
using namespace std;
 class Book{
 	static int total;
 	public:
 		void addbooks(){
 			int temp;
 			cout<<endl<<"How manybooks do you want to add? ";
 			cin>>temp;
 			total=total-temp;
 			cout<<endl<<"There are "<<total<<" books available now.";
		}
		void removebooks(){
 			int temp1;
 			cout<<endl<<"How manybooks do you want to remove? ";
 			cin>>temp1;
 			total=total-temp1;
 			cout<<endl<<"There are "<<total<<" books available now.";
		}
 };
 int Book::=50;
int main()
{
	Book obj;
	int choice;
	flag:
	cout<<endl<<"Please choose your option: ";
	cout<<endl<<"1. Add books";
	cout<<endl<<"2. Remove books";
	cin>>choice;
	if(choice==1){
		obj.addbooks();
	}
	else if(choice==2){
		obj.removebooks();
	}
	else{
		cout<<endl<<"You have written wrong choice. Please enter again.";
		goto flag;
	}
}
 

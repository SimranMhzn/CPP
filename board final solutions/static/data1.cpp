//KEEP TRACK OF TOTAL NO OF BOOKS
#include<iostream>
using namespace std;
class Book{
	static int number;
	public:
		void addbooks()
		{
			int add;
			cout<<"Enter number of books you want to add: "<<endl;
			cin>>add;
			number=number+add;
		}
		void removebooks()
		{
			int remove;
			cout<<"Enter number of books you want to remove: "<<endl;
			cin>>remove;
			number=number-remove;
		}
		void display()
		{
			cout<<endl<<"The number of books available now are "<<number;
		}
};
int Book::number=1500;
int main()
{
	Book obj;
	obj.addbooks();
	obj.display();
	obj.removebooks();
	obj.display();
	return 0;
	
}

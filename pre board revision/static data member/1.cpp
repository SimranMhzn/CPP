//static data member to keep record of total no of books available
#include<iostream>
using namespace std;
class Book{
	static int number;
	public:
		static void addbooks()
		{
			int add=0;
			cout<<"How many books do you want to add? "<<endl;
			cin>>add;
			number=number+add;
			cout<<"Added successfully!"<<endl;
			cout<<number<<" books available now"<<endl;
		}
		static void removebooks()
		{
			int remove;
			flag:
				cout<<"How many books do you want to remove? "<<endl;
				cin>>remove;
				if(remove>number)
				{
					goto flag;
				}
				number=number-remove;
				cout<<"Removed successfully! "<<endl;
				cout<<number<<" books available now"<<endl;
		}
};
int Book::number=50;
int main()
{
	Book obj;
	obj.addbooks();
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Book{
	public:
		string name;
		string input();
};

string Book::input(){
	cout<<"Enter the name: ";
	cin>>name;
	return name;
}
int main(){
	Book book;
	book.input();
	cout<<book.name<<endl;
	return 0;
}

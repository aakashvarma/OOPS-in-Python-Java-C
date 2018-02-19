#include <iostream>
#include <string>
using namespace std;

struct Book{
	string title;
	string author;
	double price;
};

int main(){
	struct Book book1;
	book1.title = "Inferno";
	book1.author = "Dan Brown";
	book1.price = 350.00;
	
	cout<<"Book title: "<<book1.title<<endl;
}

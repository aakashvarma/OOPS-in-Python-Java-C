#include <iostream>
#include <string>
using namespace std;

string concat(string a, string b);
string input();
string display();

int main(){
    string str1, str2, str3;
	input();
	concat(str1, str2);
	display();	
}
string concat(string str1, string str2){
	string str3 = str1 + str2;
	return str3;
}
string input(){
	string str1, str2;
	cout<<"Enter string 1:";
	cin>>str1;
	cout<<"Enter string 2:";
	cin>> str2;
}
string display(){
	string str3, str4;
	cout<<"The concatened output is: "<<str3;
	cout<<"The copied output id: "<<str4;
}

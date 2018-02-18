#include <iostream>
using namespace std;

int max(int a, int b){
	if (a > b){
		return a;
	}
	else{
		return b;
	}
};
int input(){
	int num1, num2;
	cout<<"Enter 1st number: ";
	cin>>num1;
	cout<<"Enter 2nd number: ";
	cin>>num2;
};
int display(int c){
	cout<<"The maximum of the two inputed numbers is: "<<c;
};
int main(){
	int n1, n2;
	input();
//	cout<<"Enter 1st number: ";
//	cin>>n1;
//	cout<<"Enter 2nd number: ";
//	cin>>n2;
	int ret = max(n1, n2);
	display(ret);
}

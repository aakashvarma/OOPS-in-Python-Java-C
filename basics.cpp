#include <iostream>
using namespace std;

int max(int a, int b){
	if (a > b){
		return a;
	}
	else{
		return b;
	}
}
int input1(){
	int num1;
	cout<<"Enter 1st number: ";
	cin>>num1;
	return num1;
}

int input2(){
	int num1;
	cout<<"Enter 1st number: ";
	cin>>num1;
	return num1;
}


int display(int c){
	cout<<"The maximum of the two inputed numbers is: "<<c;
}
int main(){
	int n1, n2;
	n1=input1();
	n2=input2();
	int ret = max(n1, n2);
	display(ret);
}

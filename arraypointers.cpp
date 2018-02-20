#include <iostream>
#include <string>
using namespace std;

int *input();

int main(){
	int *p;
	p = input();
	cout<<p<<endl<<(p+1);
}

int *input(){
	static int a[2];
	cout<<"Enter 1st number"<<endl;
	cin>>a[1];
	cout<<"Enter 2nd number"<<endl;
	cin>>a[2];
	return a;
}

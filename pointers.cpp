#include <iostream>
using namespace std;

int main(){
	int i, a[] = {10, 20, 30, 40, 50};
	int *p;
	p = a;
//	cout<<*p<<endl<<&p;
	for(i = 0; i<=(sizeof(a)/sizeof(*a)); i++){
		
		cout << "The value of a[" << i << "]" << p << endl;
		p++;
	}
}


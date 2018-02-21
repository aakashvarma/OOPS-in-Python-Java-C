#include <iostream>
using namespace std;

namespace first{
	void func(){
		cout<<"This is 1st"<<endl;
	}
}

namespace second{
	void func(){
		cout<<"This is 2nd"<<endl;
	}
}

int main(){
	first::func();
	second::func();
	return 0;
}

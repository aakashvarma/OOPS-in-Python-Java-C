#include <iostream>
using namespace std;

int main()
{
	
	int numbers[3];
	int *p;
	p = numbers;
	*p = 10;
	p++;
	*p = 20;
	p = &numbers[2];
	*p = 30;
	
	for (int n = 0; n < 3; n++){
		cout << numbers[n] << ",";
	}
	return 0;
	
} 

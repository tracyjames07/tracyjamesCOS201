#include <iostream>
using namespace std;

int a = 50;
int b = 30;

int main () {
	
	if (a == 40) {
		
		if (b < 12)
			cout << "a is equal to 40 and b is less than 12." << endl;
			
		else 
			cout << "a is equal to 40 and b is greater than 12." << endl;
			
	}
	
	else {
		
		cout << "a is not equal to 40." << endl;
		
	}
	
	return 0;
	
}
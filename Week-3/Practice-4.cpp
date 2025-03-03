#include <iostream>
using namespace std;

int main () {
	int a = 25;
	int b = 20;
	
	do {
		
		b++;
		cout << b << endl;
		
	} while (b > a); // (a < b) will give you the same output.
	
	return 0;
}
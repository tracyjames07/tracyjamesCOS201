#include <iostream>
using namespace std;

int main()
{
	// a = 13(00001101), b = 4(00000100)
	int a = 13, b = 4;
	
	// The output is 00000100 or 4.
	cout << "a = " << a << ","
		 << "b = " << b << endl;
	cout << "a & b = " << (a & b) << endl;
	
	// The output is 00001101 or 13.
	cout << "a | b = " << (a | b) << endl;
	
	// The output is 00001001 or 9.
	cout << "a ^ b = " << (a ^ b) << endl;
	
	// The compliment is -14.
	cout << "~(" << a << ") = " << (~a) << endl;
	
	// The output is 0001000 or 8.
	cout << "b << 1"
		 << " = " << (b << 1) << endl;
		 
	// The output is 0000010 or 2.
	cout << "b >> 1"
		 << " = " << (b >> 1) << endl;
		 
	return 0;
}
	
	
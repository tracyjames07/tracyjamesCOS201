#include <iostream>
using namespace std;

using C = char;
using NUMBERS = int;
using field = char [50];

int main () {
	
	C x = 'a';
	NUMBERS y = 10;
	NUMBERS z = 5;
	field characters = "Hello world!";
	
	NUMBERS c = y + z;
	
	cout << "NUMBERS c = y + z. So c = " << c << endl;
	cout << "Field characters = " << characters << endl;
	cout << "C x = 'a', so x = " << x << endl;
	
	return 0;
	
}
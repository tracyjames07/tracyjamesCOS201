#include <iostream>
using namespace std;

int main () {
	int a = 25;
	int b = 20;
	while (b < a) {
		
		//'while (a < b)' will give you no output.
		b++;
		cout << b << endl;

	}
	
	return 0;
}
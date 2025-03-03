#include <iostream>
#include <algorithm>

using namespace std;

int a[] = {3, 15, 6, 9, 12, -4, 22, 7};

int main() {
	
	int x = sizeof(a) / sizeof(a[0]);
	sort(a, a + x);
	
	cout << "The minimum value is " << a[0] << "." << endl;
	cout << "The maximum value is " << a[7] << "." << endl;
	
	return 0;
	
}
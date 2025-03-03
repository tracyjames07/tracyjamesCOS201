#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main() {
	
	//Empty map container
	map <int, int> gquiz1;
	//Insert elements in random order.
	gquiz1.insert(pair<int, int>(1, 40));
	gquiz1.insert(pair<int, int>(2, 30));
	gquiz1.insert(pair<int, int>(3, 60));
	gquiz1.insert(pair<int, int>(4, 20));
	gquiz1.insert(pair<int, int>(5, 50));
	gquiz1.insert(pair<int, int>(6, 50));
	gquiz1.insert(pair<int, int>(7, 10));
	//Printing map gquiz1
	map <int, int>::iterator itr;
	cout << "\nThe map gquiz1 is : \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
		cout << '\t' << itr->first
			 << '\t' << itr->second << '\n';
	}
	cout << endl;
	//Assigning the elements from gquiz1 t gquiz2
	map < int, int> gquiz2(gquiz1.begin(), gquiz1.end());
	//Print all elements of the map gquiz2
	cout << "\nThe map gquiz2 after."
		 << "Assign from gquiz1 is :\n"
		 
		 
		 
		 
	}
	cout << endl;
	//Remove all elements up to.
	//Element with key=3 in gquiz2
	cout << "\ngquiz2 after removal of"
		 << "Elements less than key=3 : \n";
	cout << "\tKEY\tELEMENT\n";
	gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
	for (ite = gquiz2)
}
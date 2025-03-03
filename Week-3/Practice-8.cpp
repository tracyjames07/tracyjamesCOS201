#include <iostream>
using namespce std;

int main () {
	char grade = 'D';
	
	switch(grade) {
		case 'A' :
			cout << "Excellent!" << endl;
			break;
			
		case 'B' :
			cout << "Very good!" << endl;
			break;
			
		case 'C' :
			cout << "Well done!" << endl;
			break;
			
		case 'D' :
			cout << "You passed!" << endl;
			break;
		
		case 'E' :
			cout << "There's always room for improvement! Better try again." << endl;
			break;
			
	}
}
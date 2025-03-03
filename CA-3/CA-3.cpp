#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	char input;
	string user;
	string password;
	
	cout << "Welcome to the PAU Result Management System." << endl;
	cout << "Press 'A' to proceed or 'X' to exit the application." << endl;
	
	cout << "\n\nEnter an option: ";
	cin >> input;
	input = toupper(input); 
	
	if (input == 'A') {
		
		cout << "\n\nGood. \nLet's proceed to authentication. \n\n" << endl;
		cout << "Please input your username and password below. Thank you. \n" << endl; 
		
		cout << "Input your username: " << endl;
		cin >> user;
		
		cout << "Input your password: " << endl;
		cin >> password;
			
			if (user == "" && password == "") {
				
				cout << "\n\nWelcome, " << user <<"!\n\n" << endl;
				cout << "What would you like to do today? There are multiple options to proceed from." << endl;
				cout << "If you'd like to update student's scores, input 'S'.\n" << endl;
				cout << "If you'd like to view all results, input 'V'.\n" << endl;
				cout << "If you'd like to search for an individual record, input 'R'.\n" << endl;
				
				cout << "Input your preferred option." << endl;
				cin >> option;
				option = toupper(option);
				
				if (option == "S") {
					
					
				}
				
				else if (option == "V") {
					
					
				}
				
				else if (option == "R") {
					
					
				}
				
				else {
					
					cout << "\nIncorrect input. Please try again. Thank you.\n" << endl;
					break;
					
				}
				
			}
			
			else {
				
				cout << "Incorrect username and password. \nPlease try again. \nThank you." << endl;
				
			}
			
			return 0;
}
//Basic file operations.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	//Create the file.
	ofstream myfile;
	//Open file.
	myfile.open("example.txt");
	//Write to the file.
	myfile << "Writing this to a file.\n";
	//Close the file.
	myfile.close();
	return 0;
}
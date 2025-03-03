#include <iostream>
using namespace std;

int main () {
    int j; //Define a loop variable.
    for (j = 0; j < 15; j++) //Loop from 0 to 14.
    //(;; j++) will give you an infinite loop. j++ increases the step size by 1. j-- decreases the step size by 1.
        cout << j * j << endl; //Displaying the square of j.
    cout <<endl;
    return 0;
}
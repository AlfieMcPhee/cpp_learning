// HELLO WORLD VIA C++

#include <iostream> // Header file library for IO
using namespace std; // Can use names for objects and variables within std libary

int main() { // FUNC
    cout << "Hello World"; // COUT for Console Out, >> is an insertion operator
    return 0; // Ends main function
}
// We can omit using namespace std and use std :: instead

int test() {
    cout << "Hello, C++!";
    return 0;
}

// Using cout for arithmetic operations

int maths(){
    cout << 3 + 3;
    return 0;
}

// We can use end1 instead of \n to print to a new line
// /t creates a horizontal tab, \\ inserts a backslash character, \" inserts a double quote character
/* This is for multi
 * line
 * comments
 */

/* TYPES
 * int = 123
 * double = 19.99
 * char = s
 * string = array of chars [HELLO]
 * bool = True/False
 */

// DECLARING TYPES
bool verified = false;
int x = 3;
char y = 's';

int myNumber = 19;
std::cout << myNumber;

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

// CONSTANT VARIABLES
const int minutesPerHour = 60;
// This is how to declare a constant variable

// Creating integer Variables
int length = 4;
int width = 6;

int area = length * width;

cout << "Area of the rectangle is:" << area << "\n";

// USER INPUT

int x;
cout << "Type a number: "; //
cin >> x; // Gets user input
cout << "Your number is: " << x;

// For Strings we must import
#include <string>

string greeting = "Hello";
cout << greeting;

// AUTO KEYWORD
auto y = True;
// Auto means we don't have to strictly define and it does it for us
// Auto only works if ew define, ie, auto x; doesn't work.
//

// Test Pratice

#include <iostream>
using namespace std;

int main3() {
    int studentID = 1337;
    float score = 90.9;
    string grade = "A";
    bool passed = true;
    cout << studentID;
    cout << score;
    cout << grade;
    cout << passed;

    return 0;
}

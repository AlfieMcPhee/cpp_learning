// HELLO WORLD VIA C++

#include <ios>
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
// Auto only works if we define our variable, ie, auto x; doesn't work.
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

// Logical Operators
// && - And
// || - Or
// ! - Not

// Shopping Price Program

#include <iostream>
using namespace std;

int main() {
    int itemPrice = 20;
    int shippingCost = 10;
    int sum = itemPrice + shippingCost;
        cout << sum;
        return 0;
}

// APPENDING STRINGS

#include <strings>

string firstName = "John";
string lastName = "Doe";
string fullName = firstName.append(lastName);
cout << fullName;

string txt = "ABCDEFGHIJKLMNOP"
// We cn use the length function to see string length
cout << "The length of your text string is:" << txt.length();


// Access strings

string myString = "Hello";
cout << myString[0];
// Outputs the 0 index, in this case H

// If we wanted to output the last character of a string
cout << myString[myStringth.length() -1];
// This would output 0

// Change string characters
myString[0] = 'J'; // Single quote
cout << myString
// This would output Jello instead of hello

// Also
// // We can also use
cout << myString.at(0);
// This would give us the first character in this case

// User input strings

string fullName;
cout << "Enter your full name";
cin >> fullName;
cout << "Your name is:" << fullName;

// However if we entered John Doe, we'd only get John
// So we use

string fullName;
cout << "Enter your full name:";
getline(cin, fullName);
cout << "Your name is:" << fullName
//getline does it all for us, cin as first arg then string variable as another

// C Style Strings
string greeting1 = "Hello";
char greeting2[] = "Hello"; // This is a C Style String

// Practice Program

#include <iostream>
#include <string>
using namespace std;

int main(){
    string message = "Hello";
    cout << message;
    return 0;
}

//Bools
// Self explanatory, to print out true and false for a variable
bool isCodingFun = true;
cout << boolalpha;
cout << isCodingFun << "\n" // Outputs True
// to stop boolalpha
cout << noboolalpha;

// Conditionals

if (condition) {
    // Code to be executed if true
}

// For Example

if ( 20 > 19) {
    cout << "20 is greater than 18";
}

// Or
int x = 20;
int y = 18;

if (x > y) {
    cout << "x is greater than y";
}

// Using Bools

bool isGreater x > y;
if (isGreater) {
    cout << "x is greater than y";
}

// ELSE STATEMENTS

if (condition) {
    // code if true
} else {
    // Code to be executed if condition is false
}

int time = 20;

if (time < 18) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}

// Outputs "Good evening."


// Using bools with else
int time = 20;

bool isDay = time < 18;

if (isDay) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}

// Outputs "Good evening."


// ELSE IF-S

if (condition1) {
  // block of code to be executed if condition1 is true
} else if (condition2) {
  // block of code to be executed if condition1 is false and condition2 is true
} else {
  // block of code to be executed if both conditions are false
}



// EXAMPLE
int time = 16;

if (time < 12) {
  cout << "Good morning.";
} else if (time < 18) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}

// C++ NOTES - cleaned up so the whole file compiles and runs
//
// Rules this file follows (worth remembering):
//  1. Statements like cout << ... and cin >> ... must live INSIDE a function.
//     Only declarations (like const int ...) can sit outside functions.
//  2. A program can only have ONE main(). Execution starts there, so main has
//     to call every other function for its code to run.
//  3. Each #include goes once, at the top of the file.
//  4. A name can only be declared once per scope. Each function is its own
//     scope, so x and y can be reused in different functions.
//
// Run with: cpprun test.cpp
// Every function below is called from main() at the bottom. Comment out any
// call you don't want to run (for example the ones that ask for input).

#include <ios>       // boolalpha / noboolalpha (iostream already pulls this in)
#include <iostream>  // Header file library for IO
#include <limits>    // numeric_limits, used to clear leftover input
#include <string>    // For Strings we must include this
using namespace std; // Can use names for objects and variables within std library
// We can omit using namespace std and use std:: instead, e.g. std::cout << "Hi";

// CONSTANT VARIABLES
const int minutesPerHour = 60;
// This is how to declare a constant variable. Constants can sit outside functions.

// HELLO WORLD VIA C++
// (This was the original main(). It is renamed because a file can only have one main.)
int helloWorld() { // FUNC
    cout << "Hello World\n"; // COUT for Console Out, << is the insertion operator
    return 0; // Ends the function. In main, 0 means "finished successfully"
}

int test() {
    cout << "Hello, C++!\n";
    return 0;
}

// Using cout for arithmetic operations
int maths() {
    cout << 3 + 3 << "\n";
    return 0;
}

// We can use endl instead of \n to print to a new line
// \t creates a horizontal tab, \\ inserts a backslash character, \" inserts a double quote character
// (endl also flushes the output, so "\n" is usually the better habit)
int escapeCharacters() {
    cout << "Line one" << endl;
    cout << "Tab:\tindented\n";
    cout << "Backslash: \\\n";
    cout << "Quote: \"quoted\"\n";
    return 0;
}

/* This is for multi
 * line
 * comments
 */

/* TYPES
 * int = 123
 * double = 19.99
 * char = 's'   (single quotes, one character)
 * string = text such as "HELLO" (double quotes). It is a class that holds a
 *          sequence of chars and manages the memory for you
 * bool = true/false (lowercase)
 */

// DECLARING TYPES
int declaringTypes() {
    bool verified = false;
    int x = 3;
    char y = 's';
    cout << boolalpha << verified << noboolalpha << " " << x << " " << y << "\n";
    return 0;
}

int constants() {
    cout << "Minutes per hour: " << minutesPerHour << "\n";
    // minutesPerHour = 61; // ERROR: a const can't be changed
    return 0;
}

// Creating integer variables
int rectangle() {
    int length = 4;
    int width = 6;

    int area = length * width;

    cout << "Area of the rectangle is: " << area << "\n";
    return 0;
}

// USER INPUT
int userInput() {
    int x;
    cout << "Type a number: ";
    cin >> x; // Gets user input (>> is the extraction operator)
    cout << "Your number is: " << x << "\n";
    return 0;
}

// For Strings we must include <string> (done at the top of the file)
int strings() {
    string greeting = "Hello";
    cout << greeting << "\n";
    return 0;
}

// AUTO KEYWORD
int autoKeyword() {
    auto y = true; // lowercase true. y becomes a bool
    auto count = 10; // int
    auto price = 19.99; // double
    // Auto means we don't have to strictly define the type, the compiler works it out.
    // Auto only works if we give the variable a value, so "auto x;" doesn't work
    // (the compiler needs a value to work out the type).
    cout << boolalpha << y << noboolalpha << " " << count << " " << price << "\n";
    return 0;
}

// Test Practice
int main3() {
    int studentID = 1337;
    float score = 90.9; // double is the usual choice for decimals
    string grade = "A";
    bool passed = true;
    cout << studentID << "\n";
    cout << score << "\n";
    cout << grade << "\n";
    cout << passed << "\n"; // prints 1 (true) because boolalpha is off

    return 0;
}

// Logical Operators
// && - And
// || - Or
// ! - Not
int logicalOperators() {
    bool sunny = true;
    bool warm = false;
    cout << boolalpha;
    cout << "sunny && warm: " << (sunny && warm) << "\n"; // false, both must be true
    cout << "sunny || warm: " << (sunny || warm) << "\n"; // true, at least one is true
    cout << "!sunny: " << !sunny << "\n";                 // false, flips the value
    cout << noboolalpha;
    return 0;
}

// Shopping Price Program
// (This was a second main(). Renamed because a file can only have one main.)
int shoppingPrice() {
    int itemPrice = 20;
    int shippingCost = 10;
    int sum = itemPrice + shippingCost;
    cout << sum << "\n";
    return 0;
}

// APPENDING STRINGS
int appendingStrings() {
    string firstName = "John";
    string lastName = "Doe";
    string fullName = firstName.append(lastName);
    cout << fullName << "\n"; // JohnDoe
    // NOTE: append() changes firstName itself, so firstName is now "JohnDoe" too.
    // To join strings without changing them (and add a space) use +
    string first = "John";
    string last = "Doe";
    string spaced = first + " " + last;
    cout << spaced << "\n"; // John Doe
    return 0;
}

int stringLength() {
    string txt = "ABCDEFGHIJKLMNOP";
    // We can use the length function to see string length (size() does the same)
    cout << "The length of your text string is: " << txt.length() << "\n"; // 16
    return 0;
}

// Access strings
int accessStrings() {
    string myString = "Hello";
    cout << myString[0] << "\n";
    // Outputs the 0 index, in this case H

    // If we wanted to output the last character of a string
    cout << myString[myString.length() - 1] << "\n";
    // This would output o (indexes start at 0, so the last one is length - 1)

    // Change string characters
    myString[0] = 'J'; // Single quote, because it's one char
    cout << myString << "\n";
    // This would output Jello instead of Hello

    // We can also use
    cout << myString.at(0) << "\n";
    // This gives us the first character, J now that we changed it
    // at() checks the index is valid and gives an error if it isn't, [] doesn't check
    return 0;
}

// User input strings
int userInputStrings() {
    string fullName;
    cout << "Enter your full name: ";
    cin >> fullName;
    cout << "Your name is: " << fullName << "\n";
    // However if we entered John Doe, we'd only get John
    // cin stops at the first space, and "Doe" is still waiting in the input buffer.
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // throw away the rest of that line

    // So we use getline
    string fullNameLine;
    cout << "Enter your full name again: ";
    getline(cin, fullNameLine);
    cout << "Your name is: " << fullNameLine << "\n";
    // getline reads the whole line: cin as first arg, then the string variable as the second
    // (If getline comes right after "cin >> number", you need cin.ignore(...) first
    //  or it reads the leftover newline and looks like it was skipped.)
    return 0;
}

// C Style Strings
int cStyleStrings() {
    string greeting1 = "Hello";
    char greeting2[] = "Hello"; // This is a C Style String (an array of chars ending in '\0')
    cout << greeting1 << " " << greeting2 << "\n";
    return 0;
}

// Practice Program
int practiceMessage() {
    string message = "Hello";
    cout << message << "\n";
    return 0;
}

// Bools
// Self explanatory, to print out true and false for a variable
int bools() {
    bool isCodingFun = true;
    cout << boolalpha;
    cout << isCodingFun << "\n"; // Outputs true
    // to stop boolalpha
    cout << noboolalpha;
    cout << isCodingFun << "\n"; // Outputs 1
    return 0;
}

// Conditionals
// if (condition) {
//     // Code to be executed if true
// }
int conditionals() {
    // For Example
    if (20 > 19) {
        cout << "20 is greater than 19\n";
    }

    // Or
    int x = 20;
    int y = 18;

    if (x > y) {
        cout << "x is greater than y\n";
    }

    // Using Bools
    bool isGreater = x > y;
    if (isGreater) {
        cout << "x is greater than y (using a bool)\n";
    }
    return 0;
}

// ELSE STATEMENTS
// if (condition) {
//     // code if true
// } else {
//     // Code to be executed if condition is false
// }
int elseStatements() {
    int time = 20;

    if (time < 18) {
        cout << "Good day.\n";
    } else {
        cout << "Good evening.\n";
    }
    // Outputs "Good evening."

    // Using bools with else
    bool isDay = time < 18;

    if (isDay) {
        cout << "Good day.\n";
    } else {
        cout << "Good evening.\n";
    }
    // Outputs "Good evening."
    return 0;
}

// ELSE IF-S
// if (condition1) {
//     // block of code to be executed if condition1 is true
// } else if (condition2) {
//     // block of code to be executed if condition1 is false and condition2 is true
// } else {
//     // block of code to be executed if both conditions are false
// }
int elseIfStatements() {
    // EXAMPLE
    int time = 16;

    if (time < 12) {
        cout << "Good morning.\n";
    } else if (time < 18) {
        cout << "Good day.\n";
    } else {
        cout << "Good evening.\n";
    }
    // Outputs "Good day."

    // Using Bools with ELSE IF
    bool isMorning = time < 12;
    bool isDay = time < 18;

    if (isMorning) {
        cout << "Good morning.\n";
    } else if (isDay) {
        cout << "Good day.\n";
    } else {
        cout << "Good evening.\n";
    }
    // Outputs "Good day."
    return 0;
}

// NESTED IFS
// if (condition1) {
//     // code to run if condition1 is true
//     if (condition2) {
//         // code to run if both condition1 and condition2 are true
//     }
// }
int nestedIfs() {
    // Real Life Example
    int age = 20;
    bool isCitizen = true;

    if (age >= 18) {
        cout << "Old enough to vote.\n";

        if (isCitizen) {
            cout << "And you are a citizen, so you can vote!\n";
        } else {
            cout << "But you must be a citizen to vote.\n";
        }
    } else {
        cout << "Not old enough to vote.\n";
    }
    return 0;
}

// MAIN - the program starts here and calls every function above, in order.
// Comment out any line you don't want to run.
int main() {
    cout << "\n--- helloWorld ---\n";
    helloWorld();
    cout << "\n--- test ---\n";
    test();
    cout << "\n--- maths ---\n";
    maths();
    cout << "\n--- escapeCharacters ---\n";
    escapeCharacters();
    cout << "\n--- declaringTypes ---\n";
    declaringTypes();
    cout << "\n--- constants ---\n";
    constants();
    cout << "\n--- rectangle ---\n";
    rectangle();
    cout << "\n--- userInput (asks for a number) ---\n";
    userInput();
    cout << "\n--- strings ---\n";
    strings();
    cout << "\n--- autoKeyword ---\n";
    autoKeyword();
    cout << "\n--- main3 ---\n";
    main3();
    cout << "\n--- logicalOperators ---\n";
    logicalOperators();
    cout << "\n--- shoppingPrice ---\n";
    shoppingPrice();
    cout << "\n--- appendingStrings ---\n";
    appendingStrings();
    cout << "\n--- stringLength ---\n";
    stringLength();
    cout << "\n--- accessStrings ---\n";
    accessStrings();
    cout << "\n--- userInputStrings (asks for your name twice) ---\n";
    userInputStrings();
    cout << "\n--- cStyleStrings ---\n";
    cStyleStrings();
    cout << "\n--- practiceMessage ---\n";
    practiceMessage();
    cout << "\n--- bools ---\n";
    bools();
    cout << "\n--- conditionals ---\n";
    conditionals();
    cout << "\n--- elseStatements ---\n";
    elseStatements();
    cout << "\n--- elseIfStatements ---\n";
    elseIfStatements();
    cout << "\n--- nestedIfs ---\n";
    nestedIfs();
    return 0;
}

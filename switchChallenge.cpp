// Switch Challenge

#include <iostream>
using namespace std;

int main(){
    int choice = 2;
    switch(choice) {
        case 1:
            cout << "Your choice is coffee";
            break;
        case 2:
            cout << "Your choice is tea";
            break;
        default:
            cout << "Your choice is invalid";

    }
    return 0;
}

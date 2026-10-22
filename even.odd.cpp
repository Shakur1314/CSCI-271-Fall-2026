#include <iostream>
using namespace std;

// Shakur Ourogouni


int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    // Check if the number is even or odd using modulus
    if (num % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }

    return 0;
}
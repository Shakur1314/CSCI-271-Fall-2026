#include <iostream>
using namespace std;

// Shakur Ourogouni
// Assignment 3 — Decision Making & Control Flow

int main() {
    // Variable to store user age and membership status (1 for yes, 0 for no)
    int age;
    int isMember;

    // Prompt user for age
    cout << "Enter your age: ";
    cin >> age;

    // Prompt user for membership status
    cout << "Are you a member? (1 = yes, 0 = no): ";
    cin >> isMember;

    // Check conditions: age is 60 or older, OR (age is 18+ AND a member)
    if (age >= 60 || (age >= 18 && isMember == 1)) {
        cout << "You qualify for the discount." << endl;
    } else {
        cout << "You do not qualify for the discount." << endl;
    }

    return 0;
}
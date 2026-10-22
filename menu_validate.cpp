#include <iostream>

using namespace std;

int main() {
    int choice;
    
    // Use a do...while loop so the prompt appears at least once
    do {
        cout << "Enter a menu choice (1, 2, or 3): ";
        cin >> choice;
        
        // Check if the input is valid
        if (choice != 1 && choice != 2 && choice != 3) {
            cout << "Invalid choice, try again." << endl;
        }
    } while (choice != 1 && choice != 2 && choice != 3);
    
    // Once valid, display the selection
    cout << "You selected option " << choice << "." << endl;
    
    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int num;
    
    // Asking the user to enter a whole number
    cout << "Enter a number: ";
    cin >> num;
    
    // Using a for loop to multiply by 1 through 10
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << (num * i) << endl;
    }
    
    return 0;
}
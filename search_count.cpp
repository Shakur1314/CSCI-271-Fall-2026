// Name: Shakur OuroGouni
// Assignment 5
#include <iostream> 

using namespace std; 

int main() { 
    const int SIZE = 10; // Defines a constant array size of 10 elements
    int arr[SIZE] = {4, 2, 7, 4, 9, 1, 4, 5, 8, 3]; // Initializes an integer array with sample data
    int target = 4; // Defines the target value we want to search for in the array
    int frequency = 0; // Initializes a counter variable to track how many times the target appears

    // Iterates safely through every index of the array from 0 to SIZE - 1
    for(int i = 0; i < SIZE; i++) { 
        if(arr[i] == target) { // Checks if the element at the current index matches the target value
            frequency++; // Increments the frequency counter if a match is found
        }
    }

    cout << "Target " << target << " found " << frequency << " times." << endl; 

    return 0; 
}
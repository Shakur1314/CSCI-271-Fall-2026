// Name: Shakur OuroGouni
// Assignment 5
#include <iostream> 

using namespace std; 

// Function to print array elements in normal forward order
void printForward(int arr[], int size) { 
    cout << "Forward: "; 
    // Loops safely from the first index (0) up to the last valid index (size - 1)
    for(int i = 0; i < size; i++) { 
        cout << arr[i] << " "; 
    }
    cout << endl; 
}

// Function to print array elements in reverse order
void printReverse(int arr[], int size) { 
    cout << "Reverse: "; 
    // Loops backward safely starting from the last valid index (size - 1) down to index 0
    for(int i = size - 1; i >= 0; i--) { 
        cout << arr[i] << " "; 
    }
    cout << endl; 
}

// Function to count how many elements exceed a given threshold limit
int countAboveLimit(int arr[], int size, int limit) { 
    int count = 0; // Initializes the counter for elements strictly greater than the limit
    // Loops through every valid index of the array from 0 to size - 1
    for(int i = 0; i < size; i++) { 
        if(arr[i] > limit) { // Checks if the current element is greater than the specified limit
            count++; // Increments the counter if the condition is met
        }
    }
    return count; // Returns the final total count of elements above the limit
}

int main() { 
    const int SIZE = 5; // Defines a constant size of 5 for our test array
    int data[SIZE] = {12, 45, 23, 67, 34}; // Initializes the array with test data
    
    printForward(data, SIZE); 
    printReverse(data, SIZE); 
    
    int limit = 30; // Defines a threshold limit for filtering elements
    cout << "Elements above " << limit << ": " << countAboveLimit(data, SIZE, limit) << endl; 
    
    return 0; 
}
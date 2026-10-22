// Name: Shakur OuroGouni
// Assignment 5
#include <iostream> 

using namespace std; 

int main() { 
    const int SIZE = 5; // Defines a constant integer for the fixed size of the array
    double scores[SIZE] = {85.5, 90.0, 78.0, 92.5, 88.0}; // Declares and initializes an array of double values representing scores
    double sum = 0.0; // Declares and initializes a variable to keep track of the running total sum
    double average = 0.0; // Declares a variable to store the final calculated average

    // Loop through each element in the array from index 0 up to SIZE - 1 safely
    for(int i = 0; i < SIZE; i++) { 
        sum += scores[i]; // Adds the current element value at index i to the cumulative sum
    }

    // Calculates the average by dividing the total accumulated sum by the total number of elements
    average = sum / SIZE; 

    // Outputs the total calculated sum to the console
    cout << "Sum: " << sum << endl; 
    
    // Outputs the final calculated average to the console
    cout << "Average: " << average << endl; 

    return 0; // Signals to the operating system that the program terminated successfully
}
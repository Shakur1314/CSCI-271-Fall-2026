
#include <iostream> // Include input/output stream library
using namespace std; // Use standard namespace to avoid typing std::

int main() {
    int temperature; // Declare variable to store integer user input
 
    cout << "Enter the temperature (F) as an integer: "; // Prompt user for input
    cin >> temperature; // Read and store the user's input
 
    if (temperature < 32) { // Check if temperature is below freezing (< 32)
        cout << "Thats Freezing." << endl;
    }
    else if (temperature <= 59) { // Check if temperature falls in the cold range (32 to 59)
        cout << "Thats Cold." << endl;
    }
    else if (temperature <= 75) { // Check if temperature falls in the mild range (60 to 75)
        cout << "Thats Mild." << endl;
    }
    else { // Catch-all for temperatures 76 or higher
        cout << "Thats Hot." << endl;
    }
     
    return 0; // Exit program successfully
}
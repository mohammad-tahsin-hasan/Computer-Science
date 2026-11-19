#include <iostream>
using namespace std;

class MaxFinder {
   public:
    int maxValue;
    int position;

    // Constructor that takes an array and its size, then finds max and position
    MaxFinder(int arr[], int size) {
        maxValue = arr[0];
        position = 0;

        for (int i = 1; i < size; ++i) {
            if (arr[i] > maxValue) {
                maxValue = arr[i];
                position = i;
            }
        }
    }

    // Method to display the result
    void displayResult() {
        cout << "Maximum number is: " << maxValue << endl;
        cout << "Position (0-based index) is: " << position << endl;
    }
};

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " numbers:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    // Create object and find max
    MaxFinder finder(arr, size);
    finder.displayResult();

    return 0;
}

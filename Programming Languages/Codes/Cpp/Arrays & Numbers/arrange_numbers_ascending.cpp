#include <iostream>
using namespace std;

class SortAscending {
   public:
    int arr[100];  // fixed-size array
    int size;

    // Constructor to take input and sort
    SortAscending() {
        cout << "Enter the number of elements: ";
        cin >> size;

        cout << "Enter " << size << " numbers:" << endl;
        for (int i = 0; i < size; ++i) {
            cin >> arr[i];
        }

        for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }s
    }

    // Method to display sorted array
    void displaySorted() {
        cout << "Numbers in ascending order:" << endl;
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    SortAscending obj;
    obj.displaySorted();

    return 0;
}

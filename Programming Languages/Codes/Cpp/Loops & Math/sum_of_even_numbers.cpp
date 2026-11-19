#include <iostream>
using namespace std;

class EvenSummation {
   public:
    int sum;

    // Constructor that calculates the sum of even numbers from 1 to 100
    EvenSummation() {
        sum = 0;
        for (int i = 2; i <= 100; i += 2) {
            sum += i;
        }
    }

    // Method to display the result
    void displaySum() {
        cout << "Summation of even numbers from 1 to 100 is: " << sum << endl;
    }
};

int main() {
    // Create object which automatically calculates the sum
    EvenSummation obj;
    obj.displaySum();

    return 0;
}

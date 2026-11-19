#include <bits/stdc++.h>
using namespace std;

class Summation {
   public:
    int sum;

    // Constructor that calculates the sum from 1 to 100
    Summation() {
        sum = 0;
        for (int i = 1; i <= 100; ++i) {
            sum += i;
        }
    }

    // Method to display the result
    void displaySum() {
        cout << "Summation from 1 to 100 is: " << sum << endl;
    }
};

int main() {
    // Object creation triggers the constructor and calculation
    Summation obj;
    obj.displaySum();

    return 0;
}

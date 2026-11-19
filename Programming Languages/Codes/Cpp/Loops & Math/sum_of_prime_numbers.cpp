#include <iostream>
using namespace std;

class PrimeSummation {
   public:
    int sum;

    // Constructor that calculates the sum of prime numbers from 1 to 100
    PrimeSummation() {
        sum = 0;
        for (int i = 2; i <= 100; ++i) {
            if (isPrime(i)) {
                sum += i;
            }
        }
    }

    // Helper function to check if a number is prime
    bool isPrime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0)
                return false;
        }
        return true;
    }

    // Method to display the result
    void displaySum() {
        cout << "Summation of prime numbers from 1 to 100 is: " << sum << endl;
    }
};

int main() {
    PrimeSummation obj;
    obj.displaySum();

    return 0;
}

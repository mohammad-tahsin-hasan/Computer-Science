#include <iostream>
using namespace std;

class PrimeCheck {
   public:
    int number;

    // Constructor to initialize the number
    PrimeCheck(int n) {
        number = n;
    }

    // Method to check and display whether the number is prime
    void isPrime() {
        if (number <= 1) {
            cout << number << " is not a prime number." << endl;
            return;
        }

        bool prime = true;
        for (int i = 2; i < number; ++i) {
            if (number % i == 0) {
                prime = false;
                break;
            }
        }

        if (prime)
            cout << number << " is a prime number." << endl;
        else
            cout << number << " is not a prime number." << endl;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Create object and check for prime
    PrimeCheck obj(num);
    obj.isPrime();

    return 0;
}

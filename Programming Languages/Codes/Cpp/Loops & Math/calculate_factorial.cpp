#include <iostream>
using namespace std;

class Factorial {
   public:
    int number;
    long long result;

    // Constructor that takes input and calculates factorial
    Factorial(int n) {
        number = n;
        result = 1;
        for (int i = 1; i <= number; ++i) {
            result *= i;
        }
    }

    // Method to display the result
    void display() {
        cout << "Factorial of " << number << " is: " << result << endl;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Create object and automatically calculate factorial
    Factorial fact(num);
    fact.display();

    return 0;
}

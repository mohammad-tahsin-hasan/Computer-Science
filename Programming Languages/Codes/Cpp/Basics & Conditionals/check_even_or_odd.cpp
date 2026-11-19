#include <iostream>
using namespace std;

class NumberCheck {
   public:
    int number;

    // Constructor that takes the number and checks even/odd
    NumberCheck(int n) {
        number = n;

        // Method to check and display result

        if (number % 2 == 0)
            cout << number << " is Even." << endl;
        else
            cout << number << " is Odd." << endl;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Create object and check even/odd
    NumberCheck obj(num);

    return 0;
}

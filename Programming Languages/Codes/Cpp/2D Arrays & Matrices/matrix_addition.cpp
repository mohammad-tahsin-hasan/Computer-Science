#include <iostream>
using namespace std;

class MatrixAddition {
   public:
    int r, c;
    int a[4][4], b[4][4], mat[4][4];

    // Constructor: takes input and performs addition
    MatrixAddition() {
        cout << "Enter Row and Column: ";
        cin >> r >> c;

        cout << "Enter the first matrix:" << endl;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> a[i][j];
            }
        }

        cout << "Enter the second matrix:" << endl;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> b[i][j];
            }
        }

        // Matrix addition
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                mat[i][j] = a[i][j] + b[i][j];
            }
        }
    }

    // Method to display the result
    void displayResult() {
        cout << "The Addition of Matrices:" << endl;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    MatrixAddition obj;
    obj.displayResult();

    return 0;
}

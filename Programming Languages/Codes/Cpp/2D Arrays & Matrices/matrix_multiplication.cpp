#include <iostream>
using namespace std;

class MatrixMultiplication {
   public:
    int r1, r2, c1, c2;
    int a[4][4], b[4][4], mat[4][4];

    // Constructor: takes input and performs multiplication
    MatrixMultiplication() {
        cout << "Enter rows and columns for the first matrix: ";
        cin >> r1 >> c1;

        cout << "Enter rows and columns for the second matrix: ";
        cin >> r2 >> c2;

        if (c1 != r2) {
            cout << "Matrix multiplication not possible. Column of first must equal row of second." << endl;
            exit(0);
        }

        cout << "Enter elements of the first matrix:" << endl;
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                cin >> a[i][j];
            }
        }

        cout << "Enter elements of the second matrix:" << endl;
        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++) {
                cin >> b[i][j];
            }
        }

        // Matrix multiplication
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                mat[i][j] = 0;
                for (int k = 0; k < c1; k++) {
                    mat[i][j] += a[i][k] * b[k][j];
                }
            }
        }
    }

    // Method to display the result
    void displayResult() {
        cout << "Result of matrix multiplication:" << endl;
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    MatrixMultiplication obj;
    obj.displayResult();

    return 0;
}

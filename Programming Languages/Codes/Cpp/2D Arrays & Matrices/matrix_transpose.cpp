#include <iostream>
using namespace std;

class MatrixTranspose {
   public:
    int a[10][10], t[10][10];
    int r, c;

    // Constructor: takes input and computes transpose
    MatrixTranspose() {
        cout << "Enter the number of rows and columns: ";
        cin >> r >> c;

        cout << "Enter the matrix:" << endl;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> a[i][j];
            }
        }

        // Transpose logic
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                t[j][i] = a[i][j];
            }
        }
    }

    // Method to display the transposed matrix
    void displayTranspose() {
        cout << "The Transpose of the Matrix:" << endl;
        for (int i = 0; i < c; i++) {
            for (int j = 0; j < r; j++) {
                cout << t[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    MatrixTranspose obj;
    obj.displayTranspose();

    return 0;
}

#include <iostream>
#include "Matrix.h"

using namespace std;

int main() {
    Matrix mat(3, 3);
    cout << "Matrix size: " << mat.getRows() << "x" << mat.getCols() << endl;

    cout << "Enter matrix elements:" << endl;
    cin >> mat;
    cout << "Matrix:" << endl;
    cout << mat;

    mat.setElement(0, 0, 55);
    cout << "Matrix after modifying element at (0, 0):" << endl;
    cout << mat;
    cout << endl;

    Matrix mat_copy = mat;
    cout << "Copied matrix:" << endl;
    cout << mat_copy;

    cout << "Norm of the matrix: " << mat.norm() << endl << endl;

    if (mat == mat_copy) {
        cout << "Matrices are equal." << endl;
    }
    else {
        cout << "Matrices are not equal." << endl;
    }

    cout << endl;
    int scalar = 2;
    Matrix result = mat * scalar;
    cout << "Matrix multiplied by " << scalar << ":" << endl;
    cout << result;

    cout << endl;
    cout << "Incrementing matrix:" << endl;
    ++mat;
    cout << mat;

    cout << "Decrementing matrix:" << endl;
    --mat;
    cout << mat;

    return 0;
}

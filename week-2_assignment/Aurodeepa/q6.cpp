#include <iostream>
using namespace std;

const int SIZE = 3;

// Function to print a matrix
void printMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to calculate the sum of two matrices
void addMatrices(int mat1[SIZE][SIZE], int mat2[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to calculate the transpose of a matrix
void transposeMatrix(int matrix[SIZE][SIZE], int transpose[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int mat1[SIZE][SIZE], mat2[SIZE][SIZE];
    int sum[SIZE][SIZE], transpose1[SIZE][SIZE], transpose2[SIZE][SIZE], transposedSum[SIZE][SIZE];

    // Input the first matrix
    cout << "Enter elements of the first 3x3 matrix:" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> mat1[i][j];
        }
    }

    // Input the second matrix
    cout << "Enter elements of the second 3x3 matrix:" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> mat2[i][j];
        }
    }

    // Calculate the sum of the two matrices
    addMatrices(mat1, mat2, sum);
    cout << "Sum of the two matrices:" << endl;
    printMatrix(sum);

    // Calculate the transposes of the two matrices
    transposeMatrix(mat1, transpose1);
    transposeMatrix(mat2, transpose2);

    cout << "Transpose of the first matrix:" << endl;
    printMatrix(transpose1);
    cout << "Transpose of the second matrix:" << endl;
    printMatrix(transpose2);

    // Calculate the sum of the two transposed matrices
    addMatrices(transpose1, transpose2, transposedSum);
    cout << "Sum of the two transposed matrices:" << endl;
    printMatrix(transposedSum);

    return 0;
}

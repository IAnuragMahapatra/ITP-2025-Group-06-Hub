#include <iostream>
using namespace std;

void printMatrix(int mat[3][3], const string& name) {
    cout << name << " matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void addMatrices(int mat1[3][3], int mat2[3][3], int result[3][3]) {
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            result[i][j] = mat1[i][j] + mat2[i][j];
}

void transposeMatrix(int mat[3][3], int transposed[3][3]) {
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            transposed[j][i] = mat[i][j];
}

int main() {
    int mat1[3][3], mat2[3][3];
    int sum[3][3], trans1[3][3], trans2[3][3], transSum[3][3];

    cout << "Enter elements of matrix 1:"<<endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter elements of matrix 2:"<<endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> mat2[i][j];
        }
    }

    cout<<endl;
    addMatrices(mat1, mat2, sum);
    printMatrix(sum, "Sum of original matrices");

    transposeMatrix(mat1, trans1);
    transposeMatrix(mat2, trans2);

    cout<<endl;
    printMatrix(trans1, "Transpose of Matrix 1");
    printMatrix(trans2, "Transpose of Matrix 2");

    cout<<endl;
    addMatrices(trans1, trans2, transSum);
    printMatrix(transSum, "Sum of transposed matrices");

    return 0;
}

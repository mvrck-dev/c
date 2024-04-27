#include <stdio.h>

#define MAX_SIZE 10

void matrixAddition(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int result[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void matrixSubtraction(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int result[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

void matrixTranspose(int mat[][MAX_SIZE], int transposed[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = mat[i][j];
        }
    }
}

void displayMatrix(int mat[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE], transposed[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("Matrix 1:\n");
    displayMatrix(mat1, rows, cols);

    printf("Matrix 2:\n");
    displayMatrix(mat2, rows, cols);

    matrixAddition(mat1, mat2, result, rows, cols);
    printf("Matrix Addition:\n");
    displayMatrix(result, rows, cols);

    matrixSubtraction(mat1, mat2, result, rows, cols);
    printf("Matrix Subtraction:\n");
    displayMatrix(result, rows, cols);

    matrixTranspose(mat1, transposed, rows, cols);
    printf("Matrix 1 Transpose:\n");
    displayMatrix(transposed, cols, rows);

    matrixTranspose(mat2, transposed, rows, cols);
    printf("Matrix 2 Transpose:\n");
    displayMatrix(transposed, cols, rows);

    return 0;
}

#include <stdio.h>


void inputMatrix(int matrix[10][10], int n) {
    int i, j;
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}


void displayMatrix(int matrix[10][10], int n) {
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}


void transpose(int matrix[10][10], int n) {
    int i, j;
    printf("Transpose of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d\t", matrix[j][i]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[10][10], n;

    
    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    
    inputMatrix(matrix, n);

    
    printf("Original Matrix:\n");
    displayMatrix(matrix, n);

    
    transpose(matrix, n);

    return 0;
}
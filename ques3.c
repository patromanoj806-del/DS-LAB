#include <stdio.h>


void inputMatrix(int a[4][4]) {
    int i, j;
    printf("Enter elements of 4x4 matrix:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}


void displayMatrix(int a[4][4]) {
    int i, j;
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}


void sparseCheck(int a[4][4]) {
    int i, j, count = 0;

    
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(a[i][j] != 0) {
                count++;
            }
        }
    }

    
    if(count <= (16 / 2)) {
        printf("Matrix is a Sparse Matrix\n");

        int sparse[16][3];
        int k = 0;

        for(i = 0; i < 4; i++) {
            for(j = 0; j < 4; j++) {
                if(a[i][j] != 0) {
                    sparse[k][0] = i;
                    sparse[k][1] = j;
                    sparse[k][2] = a[i][j];
                    k++;
                }
            }
        }

        
        printf("Sparse Matrix (row col value):\n");
        for(i = 0; i < k; i++) {
            printf("%d\t%d\t%d\n", sparse[i][0], sparse[i][1], sparse[i][2]);
        }

    } else {
        printf("Matrix is NOT a Sparse Matrix\n");
    }
}

int main() {
    int a[4][4];

    inputMatrix(a);

    printf("Original Matrix:\n");
    displayMatrix(a);

    sparseCheck(a);

    return 0;
}
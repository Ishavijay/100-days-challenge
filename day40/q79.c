
//Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of matrix: ");
    scanf("%d", &n);

    int a[10][10];

    
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nDiagonal traversal of the matrix:\n");

    
    for (int k = 0; k < n; k++) {
        int i = 0, j = k;
        while (j >= 0 && i < n) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }


    for (int k = 1; k < n; k++) {
        int i = k, j = n - 1;
        while (i < n && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}

//Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int n;
    int issymmetric = 1;  

    printf("Enter n : ");
    scanf("%d", &n);

    int matrix[n][n];

    
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {  
                issymmetric = 0;  
                break;
            }
        }
        if (!issymmetric) break; 
    }

    if (issymmetric)
        printf("\nThe matrix is symmetric.\n");
    else
        printf("\nThe matrix is not symmetric.\n");

    return 0;
}

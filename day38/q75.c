//Add two matrices.
#include <stdio.h>

int main(){
int rows,cols;
    printf("Enter no. of rows:");
    scanf("%d",&rows);
printf("Enter no. of columns:");
scanf("%d",&cols);
int mat1[rows][cols];
int mat2[rows][cols];
int sum[rows][cols];
     printf("Enter elements of the 1 st matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter elements of the 2 nd matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }
printf("The matrices are:\n");
for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
        printf("%d",mat1[i][j]);    
        }

printf("\n");
}
printf("\n");
for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
        printf("%d",mat1[i][j]);    
        }
        printf("\n");
    }
printf("The sum of the two matrix is :");
for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
        sum[i][j]=mat1[i][j]+mat2[i][j];    
        }
        printf("\n");
    }
    printf("%d",sum);
return 0;
}
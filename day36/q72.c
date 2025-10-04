//Find the sum of all elements in a matrix.

#include <stdio.h>

int main(){
    int sum=0;
int rows,cols;
    printf("Enter no. of rows:");
    scanf("%d",&rows);
printf("Enter no. of columns:");
scanf("%d",&cols);
int matrix[rows][cols];
     printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            sum=sum+matrix[i][j];
        }

    }
    printf("The sum of the elements of the matrix is : %d",sum);
    return 0;
}
//Read and print a matrix.

#include <stdio.h>

int main(){
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
    printf("The entered matrix is:");
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
    printf("%d",matrix[i][j]);
}
printf("\n"); 
}
   return 0;
}
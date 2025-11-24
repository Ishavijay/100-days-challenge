//Find the transpose of a matrix.

#include <stdio.h>

int main(){
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int transpose[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            transpose[j][i]=matrix[i][j];
        }
    }
printf("The original matrix is :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
    printf("%d",matrix[i][j]);
}
    printf("\n");
            } 

printf("The transpose matrix is:\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
    printf("%d",transpose[i][j]);}
    printf("\n");
            } 
               return 0;
}
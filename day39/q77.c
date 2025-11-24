//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
int main(){
    int isdistinct=1;
    int matrix[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the %d %d element",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        if(matrix[0][0]==matrix[1][1] || matrix[1][1]==matrix[2][2] || matrix[0][0]==matrix[2][2]){
isdistinct=0;
        }
            }
        }
        if(isdistinct==1){
            printf("The diagonal elements are distinct");
        }
        else{
            printf("The diagonal elements are not distinct");
        }

    return 0;}

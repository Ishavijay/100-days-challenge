//Write a program to print numbers from 1 to n
#include <stdio.h>

int main(){
int n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("The numbers from 1 to %d are:",n);
 for(int i=1;i<=n;i++){
    printf("%d \n",i);
 }


    return 0;
}
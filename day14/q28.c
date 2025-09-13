//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main(){
    int n;
    long long mul=1;
    printf("Enter n:");
    scanf("%d",&n);

    for(int i=1;i<=n;i){
        if(i%2==0){
            mul*=i;
        }
    }
    printf("The product of even numbers from 1 to %d is %d",n,mul);
    return 0;
}
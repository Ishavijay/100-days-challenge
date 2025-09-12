#include <stdio.h>

int main(){
    //sum of n natural numbers
    int n;
    printf("Enter the limit n :");
    scanf("%d",&n);

    int sum=(n*(n+1))/2;
    printf("%d",sum);
    return 0;
}
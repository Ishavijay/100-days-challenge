//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main(){

    int n,sum=1;
    printf("Enter n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=2;j<n;j++){
            int k=(2*i+1)/(2*j);
            sum=sum+k;
        }
        printf("\n");
    }
    printf("Ths sum of the series is :%d",sum);
return 0;
}
/*Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.*/
 
#include <stdio.h>

int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
double sum=0.0;
for(int i=1;i<=n;i++){
double numerator=2*i;
double denominator=4*i-1;
double term = numerator/denominator;
sum=sum+term;
}
    printf("The sum of the series is %0.2f ",sum);
    return 0;
}
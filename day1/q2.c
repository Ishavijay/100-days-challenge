//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main(){
    int a,b;
    printf("enter greater number:\n");
    scanf("%d",&a);

    printf("enter smaller  number:\n");
    scanf("%d",&b);
int sum=a+b;
int diff=a-b;
int prod=a*b;
float quot=a/b;
printf("the sum of the numbers is:%d",sum);
printf("the difference is:%d",diff);
printf("the product is:%d",prod);
printf("the quotient is: %d",quot);
getchar();
getchar();
getchar();
getchar();
getchar();
getchar();
return 0;



}

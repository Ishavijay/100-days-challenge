//Write a program to find the sum of digits of a number.

#include <stdio.h>

int main(){
    int num,temp,sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
while(num!=0){
    temp =num % 10;
    sum=sum+temp;
    num=num/10;
}
printf("The sum of the digits of the number is :%d",sum);
    return 0;
}
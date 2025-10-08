//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
int main(){
int num;
printf("Enter a binary number :");
scanf("%d",&num);
printf("The complement is :");
while(num!=0){
    int digit =num%10;
    if(digit==1){
        printf("0");
    }
    else{
        printf("1");
    }
    num=num/10;
}
return 0;}
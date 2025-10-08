//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main(){

    int num;
    printf("Enter number:");
    scanf("%d",&num);
int product=1;
int odigit=0;
while(num!=0)
{int temp=num%10;
if(temp % 2!=0){
    product=product*temp;
    odigit=1;
}
num=num/10;
}
if(odigit){
printf("The product of the odd digits of the number is :%d",product);
}
else{
    printf("No odd digits found");
}}
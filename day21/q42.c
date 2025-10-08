//Write a program to check if a number is a perfect number.

#include <stdio.h>
int main(){
int num,sum=0;
printf("Enter a number:");
scanf("%d",&num);
for(int i=1;i<num;i++){
    if(num%i==0){
    sum=sum+i;}
}
if(sum==num){
    printf("It is a perfect number!!");
}
else{
    printf("It is not a perfect number!!");
}
    return 0;
}
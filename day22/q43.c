//Write a program to check if a number is a strong number.

#include <stdio.h>

int main(){

    int num,digit,sum=0;
    
    printf("Enter number:");
    scanf("%d",&num);
    int a=num;
while(num!=0){
    long long int factorial=1;
digit=num%10;
if(digit<0){
    return 0;
}
else{
    for(int i=1;i<=digit;i++){
     factorial*=i;
     
    }
    sum+=factorial;
}
num=num/10;
}
if(a==sum){
    printf("It is a strong number ");
}
else{
    printf("It is not a strong number:");
}
return 0;
}
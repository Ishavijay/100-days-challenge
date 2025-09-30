//Write a program to check if a number is a palindrome.

#include <stdio.h>

int main(){
    int num,digit=0,rev=0;
    printf("Enter a number");
    scanf("%d",&num);
    int number=num;
    while(num!=0){
       digit=num % 10;
       rev=rev*10+digit;
       num=num/10;

    }
    
    if(number==rev){
            printf("It is a palindrome!!");
        }
            else{
                printf("It is not a palindrome!!");
            }
    return 0;
}
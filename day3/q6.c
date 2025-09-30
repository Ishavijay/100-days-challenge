//Write a program to swap two numbers using a third variable.
#include <stdio.h>

int main(){
    //swapping two numbers
    int a=3;
    int b=6;
    int temp =a;
    a=b;
    b=temp;
    printf("Previous value of a was 3 but after swapping it is %d \n",a);
    printf("Previous value of b was 6 but after swapping it is %d",b);
    return 0;

}

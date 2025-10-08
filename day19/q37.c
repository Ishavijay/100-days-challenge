//Write a program to find the LCM of two numbers.
//a*b/gcd==lcm
#include <stdio.h>

int main() {
    int a, b, temp,gcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int num1=a;
    int num2=b;
    while(b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
gcd=a;
   int lcm=(num1*num2/gcd);
printf("The LCM is %d",lcm);
    return 0;
}

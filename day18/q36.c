// Write a program to find the HCF (GCD) of two numbers.
//When we have to find lcm it is the greatest powers one and when we have to find gcd we look for least power.
#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    while(b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF (GCD) is: %d\n",a);

    return 0;
}

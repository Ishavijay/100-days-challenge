//Write a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The factorial of %d is ", n);

    for (int i = n; i >= 1; i--) {
        printf("(%d)", i);
        factorial *= i; 
    }
    printf(" = %lld\n", factorial);

    return 0;
}

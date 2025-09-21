//Write a program to check if a number is prime.
#include <stdio.h>

int main() {
    int num, isprime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0) {
        if (num <= 1) {
            isprime = 0;  // 0 and 1 are not prime
        } else {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isprime = 0;
                    break;
                }
            }
        }

        if (isprime) {
            printf("%d is a prime number\n", num);
        } else {
            printf("%d is not a prime number\n", num);
        }
    } else {
        printf("%d is a negative number\n", num);
    }

    return 0;
}
//Write a program to swap the first and last digit of a number
#include <stdio.h>

int main() {
    int num, temp, first, last, digits = 0, middle;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10; 
    first = temp;
    while (first >= 10) {
        first /= 10;
        digits++;
    }
    digits++; 

    
    middle = num % (int)pow(10, digits - 1); 
    middle /= 10;                            

    
    int swapped = last * (int)pow(10, digits - 1) + middle * 10 + first;

    printf("Original number: %d\n", num);
    printf("After swapping first and last digit: %d\n", swapped);

    return 0;
}


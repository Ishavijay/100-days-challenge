//Check if a string is a palindrome.
#include <stdio.h>

int main() {
    char str[100];
    scanf("%[^\n]", str);

    int start = 0, end = 0;

    // Find length manually
    while (str[end] != '\0') {
        end++;
    }
    end--; // last valid character

    // Check palindrome
    while (start < end) {
        if (str[start] != str[end]) {
            printf("Not a palindrome\n");
            return 0;
        }
        start++;
        end--;
    }

    printf("Palindrome\n");
    return 0;
}



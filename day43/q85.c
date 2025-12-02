//Reverse a string.
#include <stdio.h>

int main() {
    char str[100];
    scanf("%[^\n]", str);

    int start = 0;
    int end = 0;

    // Find length manually
    while (str[end] != '\0') {
        end++;
    }
    end--;  // Move to last valid character

    // Reverse using two-pointer technique
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    printf("%s\n", str);

    return 0;
}

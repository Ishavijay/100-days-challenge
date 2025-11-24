// Count frequency of a given character in a string
#include <stdio.h>

int main() {
    char ch;
    char str[100];
    int count = 0;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character of which you want to find the frequency: ");
    scanf(" %c", &ch); 
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("The character '%c' appeared %d times in the string.\n", ch, count);
    return 0;
}

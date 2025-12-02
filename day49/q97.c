//Print the initials of a name
#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Print the first character if it is a letter
    if (isalpha(name[0])) {
        printf("%c", toupper(name[0]));
    }

    // Print first letter after each space
    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i-1] == ' ' && isalpha(name[i])) {
            printf("%c", toupper(name[i]));
        }
    }

    return 0;
}

//Print each character of a string on a new line.
#include <stdio.h>
#include <string.h>

int main() {
    char str[50] = "My name is Isha";
    char *ch;

    ch = strtok(str, " ");  
    printf("%s\n", ch);
// need to study
    while (ch != NULL) {
        ch = strtok(NULL, " ");
        if (ch != NULL)
            printf("%s\n", ch);
    }

    return 0;
}

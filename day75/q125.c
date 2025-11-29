//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[500];

    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Cannot open file '%s'\n", filename);
        return 1;
    }

    // Clear input buffer before fgets
    getchar();

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Write text to file
    fprintf(fp, "%s", text);

    fclose(fp);

    printf("Text appended successfully!\n");

    return 0;
}

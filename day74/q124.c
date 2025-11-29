//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>
#include <stdlib.h>

int main() {
    char sourceFile[100], destFile[100];
    FILE *src, *dest;
    char ch;

    // Get filenames from user
    printf("Enter source filename: ");
    scanf("%s", sourceFile);

    printf("Enter destination filename: ");
    scanf("%s", destFile);

    // Open source file in read mode
    src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error: Cannot open source file '%s'\n", sourceFile);
        return 1;
    }

    // Open destination file in write mode
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Cannot open destination file '%s'\n", destFile);
        fclose(src);
        return 1;
    }

    // Copy content character by character
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully from '%s' to '%s'\n", sourceFile, destFile);

    fclose(src);
    fclose(dest);

    return 0;
}

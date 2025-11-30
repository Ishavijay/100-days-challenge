/*Take two filenames from the user – a source file and a destination file. 
Copy all the content from the source file to the destination file using fgetc() and fputc()*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    char sFile[100], dFile[100];
    FILE *s, *d;
    char c;
    printf("Enter source filename: ");
    scanf("%s", sFile);
    printf("Enter destination filename: ");
    scanf("%s", dFile);
    src = fopen(sFile, "r");
    if (s == NULL) {
        printf("Error: Cannot open source file '%s'\n", sFile);
        return 1;
    }
    d= fopen(dFile, "w");
    if (dest == NULL) {
        printf("Error: Cannot open destination file '%s'\n", dFile);
        fclose(s);
        return 1;
    }
    while ((c= fgetc(s)) != EOF) {
        fputc(c, d);
    }
printf("File copied successfully from '%s' to '%s'\n", sFile, dFile);
    fclose(s);
    fclose(d);

    return 0;
}


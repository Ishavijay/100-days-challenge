/*ask the user for a filename. Check if it exists by trying to open it in read mode.
If the file pointer is NULL, print an error message; otherwise, read and display its content.*/
#include <stdio.h>

int main() {
    char File_name[100];
    FILE *fp;
    char c;

    printf("Enter the name of the file ");
    scanf("%s", File_name);

    fp = fopen(File_name, "r");

    if (fp == NULL) {
        printf("Error: File '%s' does not exist or Therefore  you cannot open it.\n", File_name);
        return 1;
    }
    printf("\n----------------------------File Content --------------------------\n");
    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }
    fclose(fp);
    return 0;
}


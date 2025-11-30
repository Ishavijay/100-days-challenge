/*Open an existing file in append mode and allow the user to enter a new line of text.
    Append the text at the end without overwriting existing content.*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fp;
    char File_name[100];
    char content[500];
    printf("Enter the file name: ");
    scanf("%s", File_name);
    fp = fopen(File_name, "a");
    if (fp == NULL) {
        printf("Error: Cannot open file '%s'\n", File_name);
        return 1;
    }
    getchar();
    printf("Enter text to append: ");
    fgets(content, sizeof(content), stdin);
    fprintf(fp, "%s", content);
    fclose(fp);
    printf("Text appended successfully!\n");
    return 0;
}


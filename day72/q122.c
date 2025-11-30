/* Write a C program that opens an existing file (e.g., info.txt) and reads its 
contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char File_name[100];
    char Line_content[500];  // buffer to store each line

    printf("Enter filename: ");
    scanf("%s", File_name);
    fp = fopen(File_name, "r");
    if (fp == NULL) {
        printf("Error: Cannot open file '%s'\n", File_name);
        return 1;
    }
    printf("\n--- File Content ---\n");
    while (fgets(Line_content, sizeof(Line_content), fp) != NULL) {
        printf("%s", Line_content);  
    }
    fclose(fp);
    return 0;
}


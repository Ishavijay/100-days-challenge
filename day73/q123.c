/*Read a text file and count the total number of characters, words, and lines. 
A word is defined as a sequence of non-space characters separated by spaces or newlines.*/
#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fp;
    char File_name[100];
    char C;
    int cCount= 0, wCount = 0, lCount = 0;
    int iWord = 0;

    printf("Enter filename: ");
    scanf("%s", File_name);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file '%s'\n", File_name);
        return 1;
    }
    while ((C = fgetc(fp)) != EOF) {
        cCount++; 
        if (C == '\n') {
            lCount++; }
        if (isspace(C)) {
            iWord = 0; 
        } else if (inWord == 0) {
            iWord = 1;  
            wCount++;
        }
    }    fclose(fp);
printf("\nTotal Characters: %d\n", cCount);
    printf("Total Words     : %d\n", wCount);
    printf("Total Lines     : %d\n", lCount);

    return 0;
}


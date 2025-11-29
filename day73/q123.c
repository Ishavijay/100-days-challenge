//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;
    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file '%s'\n", filename);
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        charCount++;  // count every character

        if (ch == '\n') {
            lineCount++;  // count lines
        }

        if (isspace(ch)) {
            inWord = 0;   // outside a word
        } else if (inWord == 0) {
            inWord = 1;   // starting a new word
            wordCount++;
        }
    }

    fclose(fp);

    printf("\nTotal Characters: %d\n", charCount);
    printf("Total Words     : %d\n", wordCount);
    printf("Total Lines     : %d\n", lineCount);

    return 0;
}

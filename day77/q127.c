//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include <stdio.h>
#include <ctype.h>   // for toupper()

int main() {
    FILE *fin, *fout;
    char ch;

    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error opening input.txt\n");
        return 1;
    }

    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error opening output.txt\n");
        fclose(fin);
        return 1;
    }

    // Read each character
    while ((ch = fgetc(fin)) != EOF) {
        if (ch >= 'a' && ch <= 'z')
            ch = toupper(ch);   // convert to uppercase

        fputc(ch, fout);        // write to output file
    }

    fclose(fin);
    fclose(fout);

    printf("Conversion complete! Check output.txt\n");

    return 0;
}

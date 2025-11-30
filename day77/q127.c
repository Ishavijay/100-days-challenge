/*Write a program that reads text from input.txt, converts all lowercase letters to uppercase
,and writes the result to output.txt.*/
#include <stdio.h>
#include <ctype.h> 
int main() {
    FILE *fin, *fout;
    char c;

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
    while ((c = fgetc(fin)) != EOF) {
        if (c >= 'a' && c <= 'z')
            c = toupper(c);  
        fputc(c, fout);        
    }
    fclose(fin);
    fclose(fout);
    printf("Conversion complete! Check output.txt\n");
    return 0;
}


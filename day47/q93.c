//Check if two strings are anagrams of each other.
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    scanf("%[^\n]", str1);
    getchar();           // To consume newline after first input
    scanf("%[^\n]", str2);

    int freq[256] = {0}; // ASCII frequency table

    // Count frequency of characters in first string
    for (int i = 0; str1[i] != '\0'; i++) {
        freq[(unsigned char)str1[i]]++;
    }

    // Decrease frequency based on second string
    for (int i = 0; str2[i] != '\0'; i++) {
        freq[(unsigned char)str2[i]]--;
    }

    // If all frequencies are zero → anagram
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not Anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}

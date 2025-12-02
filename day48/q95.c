//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int isRotation(char s1[], char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    // if lengths differ, cannot be rotations
    if (len1 != len2) return 0;

    char temp[200];

    // concatenate s1 with itself
    strcpy(temp, s1);
    strcat(temp, s1);

    // check if s2 exists inside temp
    if (strstr(temp, s2) != NULL)
        return 1;

    return 0;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (isRotation(str1, str2))
        printf("Yes, one string is a rotation of the other.\n");
    else
        printf("No, the strings are NOT rotations.\n");

    return 0;
}

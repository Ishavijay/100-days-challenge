#include <stdio.h>
//Count spaces, digits, and special characters in a string.
int main() {
    int Dcount = 0;
    int specialcount = 0;
    int spacecount = 0;
    char str[100] = "My name is Isha, My birth date is :10/11/2003 and my email ID is Isha@gmail.com";

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            spacecount++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            Dcount++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            
        }
        else {
            specialcount++;
        }
    }

    printf("The number of special characters are: %d\n", specialcount);
    printf("The number of digits are: %d\n", Dcount);
    printf("The number of spaces are: %d\n", spacecount);

    return 0;
}

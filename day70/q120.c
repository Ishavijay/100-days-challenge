/* Q120: Write a program to take a string input. Change it to sentence case. */

#include <stdio.h>
int main() {
    char string[200];
    printf("Enter The string: ");
    gets(string);  
    int j = 0;
    int newWord = 1;  
    while(string[j] != '\0'){
        if(string[j] == ' '){
            newWord = 1;  
        }else{
            if(newWord && string[j] >= 'a' && string[j] <= 'z'){
                string[j] = string[i] - 32;  
                newWord = 0;
            }else if(!newWord && string[j] >= 'A' && string[j] <= 'Z'){
                string[j] = string[j] + 32;  
            }else{
                newWord = 0;  
            }
        }
        j++;
    }

    printf("Sentence Case: %s\n", string);
    return 0;

}

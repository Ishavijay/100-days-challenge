//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>

int main(){
    char alp;
    printf("Enter any alphabet:");
    scanf("%c",&alp);
    if(alp == 'A'||alp == 'E'||alp == 'I'||alp == 'O'||alp == 'U'||alp == 'a'||alp == 'e'||alp == 'i'||alp == 'o'||alp == 'u'){
         printf("%c is a vowel!!",alp);
    }
    else{
        printf("%c is a consonant!!",alp);
    }
    return 0;
    

}
